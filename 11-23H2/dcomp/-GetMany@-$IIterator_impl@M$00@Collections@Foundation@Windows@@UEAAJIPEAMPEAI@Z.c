/*
 * XREFs of ?GetMany@?$IIterator_impl@M$00@Collections@Foundation@Windows@@UEAAJIPEAMPEAI@Z @ 0x180170B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<float,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<float,1>,float>(
           a1,
           a2,
           a3,
           a4);
}
