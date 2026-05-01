/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIChainLink@Chaining@Shell@Internal@4@PEAI@Z @ 0x180304D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Internal::Shell::Chaining::IChainLink *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Internal::Shell::Chaining::IChainLink *,1>,Windows::Internal::Shell::Chaining::IChainLink *>(
           a1,
           a2,
           a3,
           a4);
}
