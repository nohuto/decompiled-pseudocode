/*
 * XREFs of ??_ECompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAPEAXI@Z @ 0x180010D90
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180003750 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream *> *>'::`2'::CompletionDelegate::`vector deleting destructor'(
        _QWORD *a1,
        void *a2)
{
  char v2; // di
  wil::details *v4; // rcx
  __int64 v5; // rcx

  v2 = (char)a2;
  v4 = (wil::details *)a1[7];
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  *((_DWORD *)a1 + 11) = -1073741823;
  v5 = a1[4];
  if ( v5 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (v2 & 1) != 0 )
    operator delete(a1, 0x40uLL);
  return a1;
}
