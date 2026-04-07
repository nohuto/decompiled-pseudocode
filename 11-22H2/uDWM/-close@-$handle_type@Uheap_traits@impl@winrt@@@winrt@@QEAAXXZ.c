/*
 * XREFs of ?close@?$handle_type@Uheap_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009E310
 * Callers:
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x18009E554 (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 * Callees:
 *     WINRT_IMPL_HeapFree @ 0x18005D496 (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x18005D4D2 (WINRT_IMPL_GetProcessHeap.c)
 */

void __fastcall winrt::handle_type<winrt::impl::heap_traits>::close(void **a1)
{
  void *v1; // rdi
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  if ( *a1 )
  {
    ProcessHeap = WINRT_IMPL_GetProcessHeap();
    WINRT_IMPL_HeapFree(ProcessHeap, 0, v1);
    *a1 = 0LL;
  }
}
