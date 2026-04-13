/*
 * XREFs of ?Invoke@CompletionDelegate@?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAJ0W4AsyncStatus@56ABI@@@Z @ 0x180070550
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800401CC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::Invoke(
        __int64 a1,
        void *a2,
        int a3)
{
  *(_DWORD *)(a1 + 48) = a3;
  wil::details::SetEvent(*(wil::details **)(a1 + 56), a2);
  return 0LL;
}
