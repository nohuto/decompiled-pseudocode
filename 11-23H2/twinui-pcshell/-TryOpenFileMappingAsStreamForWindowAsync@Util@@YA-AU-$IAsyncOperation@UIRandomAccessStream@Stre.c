/*
 * XREFs of ?TryOpenFileMappingAsStreamForWindowAsync@Util@@YA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@5@@Z @ 0x180279E20
 * Callers:
 *     ?OpenFileMappingAsStreamForWindowAsync@InProcPropertyStore@Util@@UEAA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_KAEBUhstring@6@@Z @ 0x180715FD0 (-OpenFileMappingAsStreamForWindowAsync@InProcPropertyStore@Util@@UEAA-AU-$IAsyncOperation@UIRand.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2 @ 0x18027960C (Util--TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Foundation::IUnknown *__fastcall Util::TryOpenFileMappingAsStreamForWindowAsync(
        winrt::Windows::Foundation::IUnknown *a1,
        __int64 a2,
        void **a3)
{
  void *v6; // rax
  int v8; // [rsp+220h] [rbp+8h] BYREF
  void **v9; // [rsp+230h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x1C1uLL);
  v8 = 0;
  Util::TryOpenFileMappingAsStreamForWindowAsync__InitCoro_2((__int64)&v8, (__int64)v6 + 112, a1, a2, (__int64)a3);
  winrt::hstring::~hstring(a3);
  return a1;
}
