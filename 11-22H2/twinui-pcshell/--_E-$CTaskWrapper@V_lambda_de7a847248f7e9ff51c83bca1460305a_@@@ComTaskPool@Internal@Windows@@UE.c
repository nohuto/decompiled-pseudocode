/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18004F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003E92C (-InternalRelease@-$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int64 **__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor'(
        volatile signed __int64 **a1,
        volatile int *a2)
{
  char v2; // di
  volatile signed __int64 *v4; // rcx

  v2 = (char)a2;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::InternalRelease(
    a1 + 4,
    a2);
  v4 = a1[3];
  if ( v4 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(volatile signed __int64 *))(*v4 + 16))(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (v2 & 1) != 0 )
    operator delete(a1, 0x28uLL);
  return a1;
}
