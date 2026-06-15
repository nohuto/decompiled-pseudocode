/*
 * XREFs of ?GetMany@?$IVectorView_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIBuffer@Streams@Storage@4@PEAI@Z @ 0x140077BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IVectorView_impl<Windows::Storage::Streams::IBuffer *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  return Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVectorView_impl<Windows::Storage::Streams::IBuffer *,1>,Windows::Storage::Streams::IBuffer *>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
