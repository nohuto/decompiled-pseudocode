/*
 * XREFs of wistd::__function::__func__lambda_6990cc1065daf1bb2b53d774e458881b__void___cdecl(int_const_&)_::_scalar_deleting_destructor_ @ 0x180065370
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x18003C7B0 (-Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z.c)
 */

struct WPF::HeapBase *__fastcall wistd::__function::__func__lambda_6990cc1065daf1bb2b53d774e458881b__void___cdecl_int_const____::_scalar_deleting_destructor_(
        struct WPF::HeapBase *a1,
        char a2,
        void *a3)
{
  *(_QWORD *)a1 = &wistd::__function::__base<void (int const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::Free(a1, a1, a3);
  return a1;
}
