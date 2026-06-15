/*
 * XREFs of s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800C90E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x1800C8150 (-AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z.c)
 *     ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800C8408 (-FindSupportedHidCollection@@YAJPEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU.c)
 *     ?FreeNode@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800C8550 (-FreeNode@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@AEAAXPEAVCN.c)
 *     ?GetHidCollectionsInContainer@@YAJU_GUID@@PEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@@Z @ 0x1800C8578 (-GetHidCollectionsInContainer@@YAJU_GUID@@PEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@@.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800C8F7C (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall s_ccCreateHandsfreeHidFileFromAudioId(
        RPC_BINDING_HANDLE BindingHandle,
        unsigned __int16 *a2,
        _DWORD *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // r14
  char v9; // r12
  __int64 *v10; // rax
  __int64 v11; // rdx
  int ContainerId; // ebx
  __int64 v13; // r8
  int v14; // r9d
  int LastError; // eax
  HANDLE CurrentProcess; // rax
  __int64 *v17; // rdx
  __int64 v18; // rax
  void *v19; // rdi
  HANDLE hSourceHandle; // [rsp+40h] [rbp-C0h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h]
  __int128 v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+88h] [rbp-78h]
  struct _TP_TIMER *pv[8]; // [rsp+90h] [rbp-70h] BYREF
  struct _HIDP_CAPS v29; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int Pid; // [rsp+160h] [rbp+60h] BYREF
  HANDLE TargetHandle; // [rsp+168h] [rbp+68h] BYREF

  v25 = 0LL;
  PreparsedData = 0LL;
  v4 = (__int64)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = -1LL;
  v24 = 0LL;
  hSourceHandle = (HANDLE)-1LL;
  v26 = 0LL;
  TargetHandle = (HANDLE)-1LL;
  v27 = 10;
  v9 = 0;
  v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          (__int64)BindingHandle,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v10[1],
    v5,
    (struct _TP_TIMER *)L"s_ccCreateHandsfreeHidFileFromAudioId",
    v4);
  *a3 = 0;
  ContainerId = AudioDeviceInterfaceGetContainerId(a2, &v23);
  if ( ContainerId >= 0 )
  {
    ContainerId = GetHidCollectionsInContainer((__int64)&v23, (__int64)&v24);
    if ( ContainerId >= 0 )
    {
      ContainerId = FindSupportedHidCollection(&v24, &hSourceHandle, &v29, &PreparsedData);
      if ( ContainerId >= 0 )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( LastError )
        {
          if ( LastError <= 0 )
          {
            ContainerId = LastError;
            goto LABEL_13;
          }
LABEL_10:
          ContainerId = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_13;
        }
        if ( RpcImpersonateClient(BindingHandle) )
          goto LABEL_13;
        v9 = 1;
        v6 = (__int64)OpenProcess(0x40u, 0, Pid);
        if ( !v6
          || (CurrentProcess = GetCurrentProcess(),
              !DuplicateHandle(CurrentProcess, hSourceHandle, (HANDLE)v6, &TargetHandle, 0xC0000000, 0, 0)) )
        {
          LastError = GetLastError();
          ContainerId = LastError;
          if ( LastError <= 0 )
            goto LABEL_13;
          goto LABEL_10;
        }
        ContainerId = 0;
        *a3 = (_DWORD)TargetHandle;
        TargetHandle = 0LL;
      }
    }
  }
LABEL_13:
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle((HANDLE)v6);
  if ( v9 )
    RpcRevertToSelf();
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hSourceHandle);
  while ( v25 )
  {
    v17 = (__int64 *)v24;
    if ( !(_QWORD)v24 )
      ATL::AtlThrowImpl(-2147467259);
    v18 = *(_QWORD *)v24;
    v19 = *(void **)(v24 + 16);
    *(_QWORD *)&v24 = v18;
    if ( v18 )
      *(_QWORD *)(v18 + 8) = 0LL;
    else
      v24 = 0uLL;
    ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::FreeNode((__int64)&v24, v17);
    CoTaskMemFree(v19);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v11, v13, v14);
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)&v24);
  return (unsigned int)ContainerId;
}
