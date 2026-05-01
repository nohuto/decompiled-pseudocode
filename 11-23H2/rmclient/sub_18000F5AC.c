/*
 * XREFs of sub_18000F5AC @ 0x18000F5AC
 * Callers:
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_18000F1DC @ 0x18000F1DC (sub_18000F1DC.c)
 *     sub_18001056C @ 0x18001056C (sub_18001056C.c)
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 *     sub_180011994 @ 0x180011994 (sub_180011994.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

LPVOID __fastcall sub_18000F5AC(DWORD dwFlags, SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  void (__fastcall *v6)(HANDLE, LPVOID); // rdi
  LPVOID v7; // rbx
  HANDLE v8; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, dwFlags, dwBytes);
  v6 = (void (__fastcall *)(HANDLE, LPVOID))qword_180032928;
  v7 = v5;
  if ( qword_180032928 )
  {
    v8 = GetProcessHeap();
    v6(v8, v7);
  }
  return v7;
}
