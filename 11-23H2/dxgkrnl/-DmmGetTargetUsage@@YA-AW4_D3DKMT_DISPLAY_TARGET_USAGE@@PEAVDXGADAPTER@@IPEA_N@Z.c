/*
 * XREFs of ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C019DFFC
 * Callers:
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C0185D50 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C019BA70 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01E8270 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02FDCC0 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00072F0 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000A4DC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmGetTargetUsage(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 2920) )
    WdLogSingleEntry0(1LL);
  if ( a3 )
    *a3 = 0;
  v6 = *(_QWORD *)(a1 + 2920);
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, *(_QWORD *)(v6 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
    v8 = *(_QWORD *)(v7 + 120);
    if ( a2 == -1 )
      WdLogSingleEntry0(1LL);
    v9 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v8, a2);
    if ( v9 )
    {
      if ( a3 )
        *a3 = *(_BYTE *)(v9 + 96);
      v10 = *(_DWORD *)(v9 + 92);
    }
    else
    {
      v10 = 0;
    }
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Fail to get VidPnMgr on adapter 0x%I64x!",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
