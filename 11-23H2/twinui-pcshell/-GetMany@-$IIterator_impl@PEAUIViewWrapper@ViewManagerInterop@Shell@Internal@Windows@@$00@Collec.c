/*
 * XREFs of ?GetMany@?$IIterator_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@PEAI@Z @ 0x18039B720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,1>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>(
           a1,
           a2,
           a3,
           a4);
}
