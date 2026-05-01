/*
 * XREFs of CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___::_scalar_deleting_destructor_ @ 0x18055E850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  void *v4; // rcx

  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(a1 + 7);
  v4 = (void *)a1[6];
  if ( v4 )
    DeleteObject(v4);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
