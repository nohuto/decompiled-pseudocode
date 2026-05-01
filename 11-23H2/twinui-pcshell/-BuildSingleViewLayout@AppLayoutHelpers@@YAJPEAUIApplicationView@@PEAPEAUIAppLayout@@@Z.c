/*
 * XREFs of ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x1805D1324
 * Callers:
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1805D2678 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 *     ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1805EDB50 (-SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18016C4CC (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppLayoutHelpers::BuildSingleViewLayout(
        AppLayoutHelpers *this,
        struct IApplicationView *a2,
        struct IAppLayout **a3)
{
  const struct _GUID *v5; // rdx
  __int64 v6; // r9
  int v7; // ebx
  void *v9; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  v7 = CAppLayout_CreateInstance(0LL, v5, &v9, v6);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(void *, AppLayoutHelpers *, _QWORD, __int64, _QWORD))(*(_QWORD *)v9 + 232LL))(
           v9,
           this,
           0LL,
           1LL,
           0LL);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IApplicationView *))v9)(
             v9,
             &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
             a2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v7;
}
