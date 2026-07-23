/*
 * XREFs of sub_140AA3EB0 @ 0x140AA3EB0
 * Callers:
 *     <none>
 * Callees:
 *     IoSizeofWorkItem @ 0x1402492D0 (IoSizeofWorkItem.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     MmIsNonPagedSystemAddressValid @ 0x14045BA00 (MmIsNonPagedSystemAddressValid.c)
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

BOOLEAN __fastcall sub_140AA3EB0(__int64 a1)
{
  ULONG v2; // eax
  void *v3; // rbx
  BOOLEAN result; // al

  v2 = IoSizeofWorkItem();
  sub_1406021F8(*(_QWORD *)(a1 + 8), v2);
  v3 = *(void **)(a1 + 8);
  if ( sub_140359DE0((__int64)v3) )
  {
    sub_140A8C924(0xC4u, 0x130uLL, (ULONG_PTR)v3, 0LL, 0LL);
    v3 = *(void **)(a1 + 8);
  }
  result = MmIsNonPagedSystemAddressValid(v3);
  if ( !result )
    return sub_140A8C924(0xC4u, 0x131uLL, (ULONG_PTR)v3, 0LL, 0LL);
  return result;
}
