/*
 * XREFs of sub_1C00AA17C @ 0x1C00AA17C
 * Callers:
 *     sub_1C003B11C @ 0x1C003B11C (sub_1C003B11C.c)
 * Callees:
 *     sub_1C00440A4 @ 0x1C00440A4 (sub_1C00440A4.c)
 */

void __fastcall sub_1C00AA17C(__int64 a1, char a2)
{
  void *v3; // rcx
  void *v4; // rcx

  if ( a2 )
    sub_1C00440A4(a1);
  v3 = *(void **)(a1 + 64);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x43506152u);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  if ( *(_QWORD *)(a1 + 232) )
    *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)a1 = 0LL;
  v4 = *(void **)(a1 + 240);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x454D6152u);
    *(_QWORD *)(a1 + 240) = 0LL;
  }
}
