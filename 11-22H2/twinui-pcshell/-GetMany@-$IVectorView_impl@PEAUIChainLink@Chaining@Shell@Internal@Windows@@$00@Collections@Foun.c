/*
 * XREFs of ?GetMany@?$IVectorView_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIChainLink@Chaining@Shell@Internal@4@PEAI@Z @ 0x1803C1250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IVectorView_impl<Windows::Internal::Shell::Chaining::IChainLink *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  return Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVectorView_impl<Windows::Internal::Shell::Chaining::IChainLink *,1>,Windows::Internal::Shell::Chaining::IChainLink *>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
