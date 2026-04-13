/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800401CC
 * Callers:
 *     ?Invoke@CompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAJ0W4AsyncStatus@56ABI@@@Z @ 0x180037DB0 (-Invoke@CompletionDelegate@-1---$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFile@Storage.c)
 *     ?Invoke@CompletionDelegate@?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAJ0W4AsyncStatus@56ABI@@@Z @ 0x180070550 (-Invoke@CompletionDelegate@-1---$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details.c)
 *     ?OnPublishComplete@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@@Z @ 0x1800707F0 (-OnPublishComplete@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@@Z.c)
 *     ?OnPublishError@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@J@Z @ 0x180070810 (-OnPublishError@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@J@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180042B80 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x92D, v2, v3);
}
