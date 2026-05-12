/*
 * XREFs of sub_1C0018614 @ 0x1C0018614
 * Callers:
 *     sub_1C0018568 @ 0x1C0018568 (sub_1C0018568.c)
 *     sub_1C0074FD0 @ 0x1C0074FD0 (sub_1C0074FD0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0018614(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x53446152u);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
