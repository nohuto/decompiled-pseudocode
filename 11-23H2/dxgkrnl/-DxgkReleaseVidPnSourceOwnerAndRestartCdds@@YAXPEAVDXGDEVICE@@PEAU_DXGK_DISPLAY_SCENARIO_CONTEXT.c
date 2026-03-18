/*
 * XREFs of ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02EA660
 * Callers:
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01897FC (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C0189B0C (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C00041DC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0004224 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046C0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000501C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0005288 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C004993C (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C01716F0 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173118 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C018893C (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0188AA4 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01952F8 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0195B14 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02BEC54 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DxgkReleaseVidPnSourceOwnerAndRestartCdds(
        struct DXGDEVICE *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 v3; // rsi
  char v7; // r15
  int ProcessSessionId; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r9
  char v13; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v15; // r9
  struct DXGDEVICE *v16; // rbx
  __int64 v17; // rax
  struct DXGDEVICE *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  char v22; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v23; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v24[6]; // [rsp+52h] [rbp-AEh] BYREF
  struct DXGDEVICE *v25[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v26[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[88]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v30[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v31[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v32[88]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v33[432]; // [rsp+1C0h] [rbp+C0h] BYREF

  v3 = *((_QWORD *)a1 + 235);
  v23 = 0;
  v24[0] = 0;
  v7 = 0;
  if ( !v3 )
  {
    WdLogSingleEntry1(1LL, 2598LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2598LL, 0LL, 0LL, 0LL, 0LL);
  }
  ProcessSessionId = PsGetProcessSessionId(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL));
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId(v9) )
  {
    WdLogSingleEntry1(1LL, 2604LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetProcessSessionId(pDevice->GetProcess()->GetEProcess()) == PsGetCurrentProcessSessionId()",
      2604LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 2606LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      2606LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v3 + 2920) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 2607LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
      2607LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v33,
    *(struct ADAPTER_DISPLAY **)(v3 + 2920),
    *((struct DXGPROCESS **)a1 + 5));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 5) + 376LL), 0);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v33);
  v22 = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v22, 1);
  if ( v10 >= 0 )
  {
    v25[0] = 0LL;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v3 + 404),
                                             v25,
                                             0LL,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
      WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
    v16 = v25[0];
    if ( v25[0] )
    {
      v17 = *((_QWORD *)a1 + 2);
      if ( *((_QWORD *)v25[0] + 2) != v17 )
        v16 = 0LL;
      v25[0] = v16;
      if ( v16 )
      {
        if ( *((_QWORD *)v16 + 2) != v17 )
        {
          WdLogSingleEntry1(1LL, 2675LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pCddDevice == NULL) || (pCddDevice->GetRenderCore() == pDevice->GetRenderCore())",
            2675LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v16 + 1937) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
      }
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, (__int64)a1, 1, v15, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v27);
    v18 = v25[0];
    if ( *(_DWORD *)(v3 + 200) != 1 )
      goto LABEL_26;
    if ( !*(_QWORD *)(v3 + 2920) )
    {
      WdLogSingleEntry1(1LL, 2711LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        2711LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1)
      || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v33, (struct _KTHREAD **)a1, -1);
      ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(*(PERESOURCE ***)(v3 + 2920), a1);
      v7 = 1;
      if ( v18 )
        ADAPTER_DISPLAY::EnsureGdiOutput(
          *(ADAPTER_DISPLAY **)(v3 + 2920),
          v18,
          (struct COREDEVICEACCESS *)v27,
          &v23,
          v24,
          a2);
      MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v33, v23);
    }
    else
    {
LABEL_26:
      WdLogSingleEntry2(4LL, a1, v3);
    }
    if ( a3
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1)
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1)) )
    {
      ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2920), a1);
    }
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v27);
    if ( v18 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
      *((_BYTE *)v18 + 1937) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25[0] + 2), v25[0]);
    }
    v13 = v22;
    if ( v22 )
    {
      v13 = 0;
      DxgkReleaseSessionModeChangeLock();
    }
    if ( v23 )
    {
      if ( v24[0] )
      {
        v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 88LL);
        if ( v21 )
          (*(void (**)(void))(v21 + 192))();
      }
    }
    if ( v7 )
    {
      v25[1] = 0LL;
      v25[0] = (struct DXGDEVICE *)1;
      if ( (int)DxgkStatusChangeNotify((int *)v25, v19, v20) < 0 )
      {
        WdLogSingleEntry1(1LL, 2791LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 2791LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    COREACCESS::~COREACCESS((COREACCESS *)v28);
  }
  else
  {
    v11 = v10;
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( a3 )
    {
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)a1, 1, v12, 0);
      COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v30);
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1)
        || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v3 + 2920), a1) )
      {
        ADAPTER_DISPLAY::RemoveDeviceOwnershipReferences(*(ADAPTER_DISPLAY **)(v3 + 2920), a1);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      COREACCESS::~COREACCESS((COREACCESS *)v31);
    }
    v13 = v22;
  }
  if ( v13 )
    DxgkReleaseSessionModeChangeLock();
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v33);
}
