/*
 * XREFs of s_sndevtResolveSoundAlias @ 0x18011ABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18011A938 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x180158788 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 */

__int64 __fastcall s_sndevtResolveSoundAlias(
        void *a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        LPHANDLE lpTargetHandle,
        wchar_t **a6)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  char *FileW; // r13
  char *v10; // r15
  int v11; // esi
  __int64 v12; // rcx
  __int64 *v13; // rax
  const unsigned __int16 *v14; // rbx
  DWORD LastError; // edi
  unsigned __int64 v16; // r8
  const unsigned __int16 *v17; // rcx
  int SoundAlias; // ebx
  HANDLE CurrentProcess; // rax
  __int64 v20; // rax
  size_t v21; // rsi
  wchar_t *v22; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  char v25; // [rsp+40h] [rbp-C0h]
  int v26; // [rsp+44h] [rbp-BCh]
  unsigned int v27; // [rsp+48h] [rbp-B8h] BYREF
  const unsigned __int16 *v28; // [rsp+50h] [rbp-B0h]
  unsigned int Pid; // [rsp+58h] [rbp-A8h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp-A0h] BYREF
  RPC_BINDING_HANDLE BindingHandle; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v32; // [rsp+70h] [rbp-90h]
  struct _TP_TIMER *pv[7]; // [rsp+78h] [rbp-88h] BYREF
  wchar_t FileName[264]; // [rsp+B0h] [rbp-50h] BYREF

  v32 = a3;
  v28 = a2;
  BindingHandle = a1;
  v25 = a4;
  memset_0(FileName, 0, 0x208uLL);
  v7 = g_AudioSrvWatchDogTimerInMs;
  v27 = a4;
  v8 = (__int64)g_AudioHealthMonitor;
  FileW = 0LL;
  v10 = 0LL;
  v26 = 0;
  v11 = 0;
  v13 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v12,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v13[1],
    v7,
    (struct _TP_TIMER *)L"s_sndevtResolveSoundAlias",
    v8);
  v14 = v28;
  if ( !v28 )
  {
    LastError = -2147418096;
    goto LABEL_32;
  }
  if ( lpTargetHandle )
  {
    *lpTargetHandle = (HANDLE)-1LL;
    if ( !a6 )
      goto LABEL_8;
  }
  else if ( !a6 )
  {
    LastError = -2147418096;
    goto LABEL_50;
  }
  *a6 = 0LL;
LABEL_8:
  LastError = RpcImpersonateClient(BindingHandle);
  if ( !LastError )
  {
    v26 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        FileName[0] = 0;
        LastError = RegOpenCurrentUser(1u, &phkResult);
        if ( LastError )
          goto LABEL_32;
        v17 = v14;
        if ( v11 )
          v17 = szSystemDefaultSound;
        SoundAlias = _GetSoundAlias(v17, FileName, v16, &v27, dwCreationDisposition, phkResult, v32);
        RegCloseKey(phkResult);
        if ( SoundAlias )
          break;
        if ( (v25 & 2) != 0 || v11 == 1 )
        {
          LastError = 1168;
          goto LABEL_32;
        }
LABEL_16:
        v14 = v28;
        v11 = 1;
      }
      if ( !FileName[0] )
      {
        if ( (v25 & 2) != 0 || v11 == 1 )
        {
          LastError = 2;
          break;
        }
        goto LABEL_16;
      }
      if ( !lpTargetHandle )
        break;
      FileW = (char *)CreateFileW(FileName, 0x80000000, 3u, 0LL, 3u, 0x60000080u, 0LL);
      if ( FileW != (char *)-1LL )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( !LastError )
        {
          v10 = (char *)OpenProcess(0x40u, 0, Pid);
          LastError = RpcRevertToSelf();
          if ( !LastError )
          {
            v26 = 0;
            if ( !v10
              || (CurrentProcess = GetCurrentProcess(),
                  !DuplicateHandle(CurrentProcess, FileW, v10, lpTargetHandle, 0, 0, 2u)) )
            {
LABEL_31:
              LastError = GetLastError();
              break;
            }
          }
        }
        break;
      }
      if ( (v25 & 2) != 0 || v11 == 1 )
        goto LABEL_31;
      v14 = v28;
      v11 = 1;
    }
  }
LABEL_32:
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( FileName[v20] );
    v21 = 2 * v20 + 2;
    v22 = (wchar_t *)MIDL_user_allocate(v21);
    *a6 = v22;
    if ( v22 )
    {
      StringCbCopyExW(v22, v21, FileName, 0LL, 0LL, 0x600u);
      if ( LastError )
      {
LABEL_40:
        if ( lpTargetHandle )
        {
          if ( (char *)*lpTargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(*lpTargetHandle);
          *lpTargetHandle = (HANDLE)-1LL;
        }
      }
    }
    else if ( LastError )
    {
      LastError = 14;
      goto LABEL_40;
    }
  }
  if ( v26 == 1 )
    RpcRevertToSelf();
  if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(FileW);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
LABEL_50:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
