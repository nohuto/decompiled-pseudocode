/*
 * XREFs of ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x1803B511C
 * Callers:
 *     _lambda_667ec943145f044c0b36791820c9a348_::operator() @ 0x1803ACA30 (_lambda_667ec943145f044c0b36791820c9a348_--operator().c)
 *     _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x1803ACED4 (_lambda_73bca28b4d92a1291c49cf8f8a9be4e0_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803B8114 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowFromViewWrapper(
        __int64 (__fastcall ***a1)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *),
        HWND *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *); // rbx
  int v5; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v4 = **a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  v5 = v4(
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a1,
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         &v8);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 48LL))(v8, &v7);
    if ( v5 >= 0 )
      *a2 = (HWND)v7;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  return (unsigned int)v5;
}
