/*
 * XREFs of sub_1409118AC @ 0x1409118AC
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409118AC(unsigned int *a1)
{
  unsigned __int64 v1; // rcx

  v1 = *a1;
  byte_140D3CA07 = 1;
  if ( v1 < 0x1000000 )
    v1 = 0x1000000LL;
  qword_140D3B068 = v1;
  qword_140D3B1F8 = 95 * (v1 / 0x64);
  qword_140D3B200 = v1;
  return 0LL;
}
