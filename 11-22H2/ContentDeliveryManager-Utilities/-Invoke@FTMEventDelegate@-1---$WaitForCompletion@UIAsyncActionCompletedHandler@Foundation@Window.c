/*
 * XREFs of ?Invoke@FTMEventDelegate@?1???$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@UEAAJ0W4AsyncStatus@34ABI@@@Z @ 0x180037E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall `WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>'::`2'::FTMEventDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 48) = a3;
  SetEvent(*(HANDLE *)(a1 + 56));
  return 0LL;
}
