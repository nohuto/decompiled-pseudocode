/*
 * XREFs of ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x180518C74
 * Callers:
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x180519FD8 (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 *     ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180532DF0 (-SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18011F2D0 (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppLayoutHelpers::BuildSingleViewLayout(
        AppLayoutHelpers *this,
        struct IApplicationView *a2,
        struct IAppLayout **a3)
{
  const struct _GUID *v5; // rdx
  int v6; // ebx
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  v6 = CAppLayout_CreateInstance(0LL, v5, &v8);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(void *, AppLayoutHelpers *, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 232LL))(
           v8,
           this,
           0LL,
           1LL,
           0LL);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IApplicationView *))v8)(
             v8,
             &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
             a2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v6;
}
