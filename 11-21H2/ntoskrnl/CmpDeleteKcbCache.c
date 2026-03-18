/*
 * XREFs of CmpDeleteKcbCache @ 0x1406BBBA8
 * Callers:
 *     CmpInitializeKcbCache @ 0x14067C560 (CmpInitializeKcbCache.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteKcbCache(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rdi

  v2 = *(void **)(a1 + 1648);
  v3 = *(void **)(a1 + 1664);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1648) = 0LL;
    *(_DWORD *)(a1 + 1656) = 0;
    ExFreePoolWithTag(v2, 0x61434D43u);
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1664) = 0LL;
    *(_DWORD *)(a1 + 1672) = 0;
    ExFreePoolWithTag(v3, 0x61434D43u);
  }
}
