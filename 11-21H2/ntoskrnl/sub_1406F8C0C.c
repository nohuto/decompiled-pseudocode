/*
 * XREFs of sub_1406F8C0C @ 0x1406F8C0C
 * Callers:
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 * Callees:
 *     sub_140202010 @ 0x140202010 (sub_140202010.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_1406F9060 @ 0x1406F9060 (sub_1406F9060.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 */

__int64 __fastcall sub_1406F8C0C(char *P)
{
  unsigned int v2; // edi
  _DWORD *v3; // rcx

  v2 = 0;
  if ( (unsigned int)sub_14030EB80((__int64)P) )
  {
    sub_140202010((__int64)v3);
    sub_14032E700(P);
    return 1;
  }
  else if ( (v3[12] & 0x200000) != 0 )
  {
    sub_1407BC0B0(v3);
  }
  else
  {
    sub_1406F9060(v3);
  }
  return v2;
}
