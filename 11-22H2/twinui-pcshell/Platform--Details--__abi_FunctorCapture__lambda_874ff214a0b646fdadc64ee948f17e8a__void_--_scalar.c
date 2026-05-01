/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::_scalar_deleting_destructor_ @ 0x18076AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x18005F490 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_874ff214a0b646fdadc64ee948f17e8a__void_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)(a1 + 1));
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
