/*
 * XREFs of ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x180083460
 * Callers:
 *     ??0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z @ 0x1800814E0 (--0error_info_fallback@impl@winrt@@QEAA@HPEAX@Z.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1800CB0A0 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 * Callees:
 *     WINRT_IMPL_HeapFree @ 0x18004B1B1 (WINRT_IMPL_HeapFree.c)
 *     FormatMessageW_0 @ 0x18004B1BD (FormatMessageW_0.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x18004B1E1 (WINRT_IMPL_GetProcessHeap.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x180083C84 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 */

__int64 __fastcall winrt::impl::message_from_hresult(__int64 a1, DWORD a2)
{
  DWORD v3; // eax
  void *v4; // rdi
  HANDLE ProcessHeap; // rax
  LPVOID lpMem; // [rsp+50h] [rbp+8h] BYREF

  lpMem = 0LL;
  v3 = FormatMessageW_0(0x1300u, 0LL, a2, 0x400u, (LPWSTR)&lpMem, 0, 0LL);
  winrt::impl::trim_hresult_message(a1, lpMem, v3);
  v4 = lpMem;
  if ( lpMem )
  {
    ProcessHeap = WINRT_IMPL_GetProcessHeap();
    WINRT_IMPL_HeapFree(ProcessHeap, 0, v4);
  }
  return a1;
}
