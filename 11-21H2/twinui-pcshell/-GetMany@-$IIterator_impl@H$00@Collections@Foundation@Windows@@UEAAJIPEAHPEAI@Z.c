/*
 * XREFs of ?GetMany@?$IIterator_impl@H$00@Collections@Foundation@Windows@@UEAAJIPEAHPEAI@Z @ 0x180330890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<int,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<int,1>,int>(
           a1,
           a2,
           a3,
           a4);
}
