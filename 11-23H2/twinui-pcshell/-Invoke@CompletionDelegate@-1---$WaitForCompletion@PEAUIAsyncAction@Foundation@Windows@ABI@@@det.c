/*
 * XREFs of ?Invoke@CompletionDelegate@?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@ABI@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAJ0W4AsyncStatus@567@@Z @ 0x1800738D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall `wil::details::WaitForCompletion<ABI::Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::Invoke(
        __int64 a1,
        void *a2,
        int a3)
{
  *(_DWORD *)(a1 + 48) = a3;
  wil::details::SetEvent(*(wil::details **)(a1 + 56), a2);
  return 0LL;
}
