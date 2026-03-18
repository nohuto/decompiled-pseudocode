/*
 * XREFs of xxxResetDisplayDevice @ 0x1C005D650
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065210 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C0166FE4 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     DestroyMonitorDCs @ 0x1C005D530 (DestroyMonitorDCs.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C005D5B0 (-ResetSystemColors@@YAXXZ.c)
 *     ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C005D938 (-UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C005D988 (IsPostIAMShellHookMessageExSupported.c)
 *     IsCreateBitmapStripSupported @ 0x1C005F900 (IsCreateBitmapStripSupported.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C0078C18 (DwmAsyncNotifyDisplayModeChange.c)
 *     ReferenceDwmApiPort @ 0x1C0078C50 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0078CB4 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1C00996B0 (ApiSetEditionEndDeferWinEventNotify.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1C00997AC (ApiSeEditionDeferWinEventNotify.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct CMonitorTopology *v4; // rbx
  unsigned int v6; // r14d
  unsigned __int16 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  int updated; // esi
  __int64 v12; // rax
  void *v13; // rdx
  __int64 v15; // rcx
  int CurrentProcessSessionId; // [rsp+40h] [rbp-30h] BYREF
  struct CMonitorTopology *v17; // [rsp+48h] [rbp-28h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  char v20; // [rsp+A8h] [rbp+38h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  v6 = a3;
  v8 = *((_WORD *)gpsi + 3498);
  v19 = 0LL;
  v18 = 0LL;
  if ( !(_DWORD)a2 )
  {
    if ( a1 && (v4 = *(struct CMonitorTopology **)(a1 + 256)) != 0LL )
    {
      *(_QWORD *)(a1 + 256) = 0LL;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)qword_1C02965B0);
      v4 = (struct CMonitorTopology *)qword_1C02965B0;
    }
    v17 = v4;
    if ( v4 )
    {
      if ( qword_1C029BD10 )
        qword_1C029BD10(v4, &v18, _lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_);
    }
  }
  DestroyMonitorDCs(a1, a2, a3);
  ApiSeEditionDeferWinEventNotify();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v20, v9, v10);
  updated = zzzUpdateUserScreen();
  if ( updated >= 0 && qword_1C029C868 && (int)qword_1C029C868() >= 0 && qword_1C029C870 )
    qword_1C029C870();
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v20);
  ApiSetEditionEndDeferWinEventNotify();
  if ( updated < 0 )
  {
    CMonitorTopology::UnlockAndRelease(&v17, (struct _TL *)&v18);
    return (unsigned int)updated;
  }
  else
  {
    if ( qword_1C029C878 && (int)qword_1C029C878() >= 0 && qword_1C029C880 )
      qword_1C029C880(a1, v8 != *((_WORD *)gpsi + 3498), v6);
    ResetSystemColors();
    if ( (int)IsCreateBitmapStripSupported() >= 0 && qword_1C029C8A0 )
      qword_1C029C8A0();
    if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
    {
      v12 = ReferenceDwmApiPort();
      DwmAsyncNotifyDisplayModeChange(v12);
    }
    if ( qword_1C029C8A8 && (int)qword_1C029C8A8() >= 0 && qword_1C029C8B0 )
      qword_1C029C8B0(a1);
    if ( a1 )
    {
      v13 = *(void **)(a1 + 256);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v13);
        *(_QWORD *)(a1 + 256) = 0LL;
        v4 = v17;
      }
    }
    if ( v6 && qword_1C029C8B8 && (int)qword_1C029C8B8() >= 0 && qword_1C029C8C0 && (unsigned int)qword_1C029C8C0(a1) )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v15, &ChangeDisplayModeDeferral, 0LL);
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
      if ( v4 )
      {
        *(_QWORD *)(a1 + 256) = v4;
        _InterlockedIncrement((volatile signed __int32 *)v4);
      }
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C029C8D0 )
        qword_1C029C8D0(a1, 35LL, 1LL);
      if ( qword_1C029C8D8 && (int)qword_1C029C8D8() >= 0 && qword_1C029C8E0 )
        qword_1C029C8E0(a1, 0LL, 2LL);
    }
    else
    {
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C029C8D0 )
        qword_1C029C8D0(a1, 35LL, 0LL);
      if ( qword_1C029C8E8 && (int)qword_1C029C8E8() >= 0 && qword_1C029C8F0 )
        qword_1C029C8F0(a1, v4, v8, 0LL, a4, 0);
    }
    CMonitorTopology::UnlockAndRelease(&v17, (struct _TL *)&v18);
    if ( qword_1C029C8F8 && (int)qword_1C029C8F8() >= 0 && qword_1C029C900 )
      qword_1C029C900(a1, 1LL);
    if ( gpqForeground
      && *(_QWORD *)(gpqForeground + 104)
      && qword_1C029C908
      && (int)qword_1C029C908() >= 0
      && qword_1C029C910 )
    {
      qword_1C029C910(*(_QWORD *)(gpqForeground + 104), 31LL, 0LL);
    }
    if ( !v6 )
    {
      if ( qword_1C029C5D0 )
        qword_1C029C5D0();
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId);
    return 0LL;
  }
}
