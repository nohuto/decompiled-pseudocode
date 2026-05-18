/*
 * XREFs of sub_18000ED7C @ 0x18000ED7C
 * Callers:
 *     sub_18000EB38 @ 0x18000EB38 (sub_18000EB38.c)
 *     sub_18000F12C @ 0x18000F12C (sub_18000F12C.c)
 *     sub_18000F4C4 @ 0x18000F4C4 (sub_18000F4C4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

LPVOID __fastcall sub_18000ED7C(DWORD dwFlags, SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  void (__fastcall *v6)(HANDLE, LPVOID); // rdi
  LPVOID v7; // rbx
  HANDLE v8; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, dwFlags, dwBytes);
  v6 = (void (__fastcall *)(HANDLE, LPVOID))qword_1801D3280;
  v7 = v5;
  if ( qword_1801D3280 )
  {
    v8 = GetProcessHeap();
    v6(v8, v7);
  }
  return v7;
}
