/*
 * XREFs of ?Invoke@CompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAJ0W4AsyncStatus@56ABI@@@Z @ 0x18003A370
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180047D60 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *>'::`2'::CompletionDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  unsigned int v3; // r8d
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 48) = a3;
  if ( !SetEvent(*(HANDLE *)(a1 + 56)) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x91F, v3, v4);
  return 0LL;
}
