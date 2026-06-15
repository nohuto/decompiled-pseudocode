/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIBuffer@Streams@Storage@4@PEAI@Z @ 0x140077BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Storage::Streams::IBuffer *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Storage::Streams::IBuffer *,1>,Windows::Storage::Streams::IBuffer *>(
           a1,
           a2,
           a3,
           a4);
}
