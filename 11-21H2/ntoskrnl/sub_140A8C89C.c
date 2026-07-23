/*
 * XREFs of sub_140A8C89C @ 0x140A8C89C
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 *     sub_140A8CC6C @ 0x140A8CC6C (sub_140A8CC6C.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 */

PDRIVER_DISPATCH __fastcall sub_140A8C89C(struct _DRIVER_OBJECT *a1, unsigned int a2)
{
  __int64 v2; // rbx
  PDRIVER_DISPATCH result; // rax
  __int64 v5; // rcx

  v2 = a2;
  if ( a2 > 0x1B )
    return 0LL;
  if ( !MmIsDriverVerifying(a1) )
    return a1->MajorFunction[v2];
  v5 = *(_QWORD *)&a1->DriverExtension[1].ServiceKeyName.Length;
  if ( !v5 )
    return a1->MajorFunction[v2];
  result = *(PDRIVER_DISPATCH *)(v5 + 8 * v2 + 32);
  if ( !result )
    return a1->MajorFunction[v2];
  return result;
}
