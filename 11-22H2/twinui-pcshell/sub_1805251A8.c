/*
 * XREFs of sub_1805251A8 @ 0x1805251A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1805251A8(__int64 a1, __int64 a2)
{
  char v2; // of
  __int64 v3; // rax

  if ( !v2 )
    JUMPOUT(0x180525135LL);
  *(int *)(v3 + 94) >>= a1;
  BYTE1(a2) = -123;
  return winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Rect>>::MoveNext(
           a1,
           a2);
}
