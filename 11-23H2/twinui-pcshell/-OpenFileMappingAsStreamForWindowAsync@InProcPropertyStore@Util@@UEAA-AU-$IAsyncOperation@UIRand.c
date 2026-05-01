/*
 * XREFs of ?OpenFileMappingAsStreamForWindowAsync@InProcPropertyStore@Util@@UEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_KAEBUhstring@6@@Z @ 0x180715FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?TryOpenFileMappingAsStreamForWindowAsync@Util@@YA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@5@@Z @ 0x180279E20 (-TryOpenFileMappingAsStreamForWindowAsync@Util@@YA-AU-$IAsyncOperation@UIRandomAccessStream@Stre.c)
 */

struct winrt::impl::hstring_header *__fastcall Util::InProcPropertyStore::OpenFileMappingAsStreamForWindowAsync(
        __int64 a1,
        struct winrt::impl::hstring_header *a2,
        __int64 a3,
        winrt::impl **a4)
{
  struct winrt::impl::hstring_header *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v7 = winrt::impl::duplicate_hstring(*a4, a2, a3);
  Util::TryOpenFileMappingAsStreamForWindowAsync(a2, a3, (void **)&v7);
  return a2;
}
