/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_ef4126646d7c3b67819dc4e9d2cf7836__void_::_scalar_deleting_destructor_ @ 0x180601060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_ef4126646d7c3b67819dc4e9d2cf7836__void_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 1));
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
