/*
 * XREFs of ??R_lambda_bb14d33f9ed2e05f3d7476fb839c1ccf_@@QEBAJ$$QEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewEventArgs@2345@@Z @ 0x1803A119C
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_bb14d33f9ed2e05f3d7476fb839c1ccf_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@789Windows@@@Z @ 0x1803A1D20 (-Invoke@-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerIn_ea_1803A1D20.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_bb14d33f9ed2e05f3d7476fb839c1ccf_::operator()(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
         *a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v8);
  if ( v6 >= 0 )
  {
    if ( v8 )
      v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a1[2])(a1[1] + *((int *)a1 + 6), *a2, *a3);
    else
      v6 = -2147417848;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  return (unsigned int)v6;
}
