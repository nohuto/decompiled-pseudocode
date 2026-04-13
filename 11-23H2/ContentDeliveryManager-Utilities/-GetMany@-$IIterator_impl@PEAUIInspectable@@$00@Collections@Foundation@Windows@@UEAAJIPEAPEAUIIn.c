/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInspectable@@PEAI@Z @ 0x1800C8A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<IInspectable *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<IInspectable *,1>,IInspectable *>(
           a1,
           a2,
           a3,
           a4);
}
