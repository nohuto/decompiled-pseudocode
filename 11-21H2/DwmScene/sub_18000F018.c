/*
 * XREFs of sub_18000F018 @ 0x18000F018
 * Callers:
 *     sub_18000EDBC @ 0x18000EDBC (sub_18000EDBC.c)
 *     sub_18000F4B0 @ 0x18000F4B0 (sub_18000F4B0.c)
 *     sub_18000FBFC @ 0x18000FBFC (sub_18000FBFC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

LPVOID __fastcall sub_18000F018(DWORD dwFlags, SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  void (__fastcall *v6)(HANDLE, LPVOID); // rdi
  LPVOID v7; // rbx
  HANDLE v8; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, dwFlags, dwBytes);
  v6 = (void (__fastcall *)(HANDLE, LPVOID))qword_1801F73A8;
  v7 = v5;
  if ( qword_1801F73A8 )
  {
    v8 = GetProcessHeap();
    v6(v8, v7);
  }
  return v7;
}
