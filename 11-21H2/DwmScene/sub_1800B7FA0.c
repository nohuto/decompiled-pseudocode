/*
 * XREFs of sub_1800B7FA0 @ 0x1800B7FA0
 * Callers:
 *     sub_18011BE50 @ 0x18011BE50 (sub_18011BE50.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800B7FA0(__int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rcx
  char *v4; // rbx

  sub_180010884(*(char **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  **(_QWORD **)(v2 + 8) = 0LL;
  v3 = *(char **)v2;
  if ( v3 )
  {
    do
    {
      v4 = *(char **)v3;
      sub_180010884(v3, 0x38uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return sub_180010884(*(char **)(a1 + 8), 0x38uLL);
}
