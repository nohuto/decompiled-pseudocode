/*
 * XREFs of sub_140AA19B0 @ 0x140AA19B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140AA19B0(__int64 a1, __int64 a2)
{
  void *v2; // rbx

  v2 = 0LL;
  if ( (qword_140D01450 & 0x800) != 0 && dword_140D57588 )
    v2 = *(void **)(a1 + 48);
  sub_14042A5E0(a1, a2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
