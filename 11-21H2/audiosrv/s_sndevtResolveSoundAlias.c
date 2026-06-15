/*
 * XREFs of s_sndevtResolveSoundAlias @ 0x180006200
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x180006538 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180006B20 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 */

__int64 __fastcall s_sndevtResolveSoundAlias(
        void *a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        LPHANDLE lpTargetHandle,
        wchar_t **a6)
{
  _FILETIME v7; // rbx
  char *FileW; // r12
  char *v9; // r13
  int v10; // esi
  __int64 v11; // rcx
  const unsigned __int16 *v12; // rbx
  DWORD LastError; // edi
  unsigned __int64 v14; // r8
  const unsigned __int16 *v15; // rcx
  int SoundAlias; // ebx
  HANDLE CurrentProcess; // rax
  __int64 v18; // rax
  size_t v19; // rbx
  wchar_t *v20; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  char v23; // [rsp+40h] [rbp-C0h]
  int v24; // [rsp+44h] [rbp-BCh]
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int Pid; // [rsp+54h] [rbp-ACh] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  RPC_BINDING_HANDLE BindingHandle; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v30; // [rsp+68h] [rbp-98h]
  _BYTE pv[64]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR FileName[264]; // [rsp+B0h] [rbp-50h] BYREF

  v30 = a3;
  BindingHandle = a1;
  v23 = a4;
  memset_0(FileName, 0, 0x208uLL);
  v26 = a4;
  v7 = g_AudioHealthMonitor;
  FileW = 0LL;
  v9 = 0LL;
  v24 = 0;
  v10 = 0;
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v11,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7);
  v12 = a2;
  if ( !a2 )
  {
    LastError = -2147418096;
    goto LABEL_18;
  }
  if ( lpTargetHandle )
  {
    *lpTargetHandle = (HANDLE)-1LL;
    if ( !a6 )
      goto LABEL_5;
  }
  else if ( !a6 )
  {
    LastError = -2147418096;
    goto LABEL_30;
  }
  *a6 = 0LL;
LABEL_5:
  LastError = RpcImpersonateClient(BindingHandle);
  if ( !LastError )
  {
    v24 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        FileName[0] = 0;
        LastError = RegOpenCurrentUser(1u, &phkResult);
        if ( LastError )
          goto LABEL_18;
        v15 = v12;
        if ( v10 )
          v15 = szSystemDefaultSound;
        SoundAlias = _GetSoundAlias(v15, FileName, v14, &v26, dwCreationDisposition, phkResult, v30);
        RegCloseKey(phkResult);
        if ( SoundAlias )
          break;
        if ( (v23 & 2) != 0 || v10 == 1 )
        {
          LastError = 1168;
          goto LABEL_18;
        }
LABEL_37:
        v12 = a2;
        v10 = 1;
      }
      if ( !FileName[0] )
      {
        if ( (v23 & 2) != 0 || v10 == 1 )
        {
          LastError = 2;
          break;
        }
        goto LABEL_37;
      }
      if ( !lpTargetHandle )
        break;
      FileW = (char *)CreateFileW(FileName, 0x80000000, 3u, 0LL, 3u, 0x60000080u, 0LL);
      if ( FileW != (char *)-1LL )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( !LastError )
        {
          v9 = (char *)OpenProcess(0x40u, 0, Pid);
          LastError = RpcRevertToSelf();
          if ( !LastError )
          {
            v24 = 0;
            if ( !v9
              || (CurrentProcess = GetCurrentProcess(),
                  !DuplicateHandle(CurrentProcess, FileW, v9, lpTargetHandle, 0, 0, 2u)) )
            {
LABEL_45:
              LastError = GetLastError();
              break;
            }
          }
        }
        break;
      }
      if ( (v23 & 2) != 0 || v10 == 1 )
        goto LABEL_45;
      v12 = a2;
      v10 = 1;
    }
  }
LABEL_18:
  if ( a6 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( FileName[v18] );
    v19 = 2 * v18 + 2;
    if ( v19 > 0x40000 )
    {
      *a6 = 0LL;
    }
    else
    {
      v20 = (wchar_t *)operator new[](2 * v18 + 2, (const struct std::nothrow_t *)&std::nothrow);
      *a6 = v20;
      if ( v20 )
      {
        StringCbCopyExW(v20, v19, FileName, 0LL, 0LL, 0x600u);
        if ( !LastError )
          goto LABEL_24;
LABEL_49:
        if ( lpTargetHandle )
        {
          if ( (char *)*lpTargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(*lpTargetHandle);
          *lpTargetHandle = (HANDLE)-1LL;
        }
        goto LABEL_24;
      }
    }
    if ( !LastError )
      goto LABEL_24;
    LastError = 14;
    goto LABEL_49;
  }
LABEL_24:
  if ( v24 == 1 )
    RpcRevertToSelf();
  if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(FileW);
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
LABEL_30:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return LastError;
}
