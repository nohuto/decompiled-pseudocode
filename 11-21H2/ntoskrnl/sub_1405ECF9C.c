/*
 * XREFs of sub_1405ECF9C @ 0x1405ECF9C
 * Callers:
 *     sub_1409BD378 @ 0x1409BD378 (sub_1409BD378.c)
 * Callees:
 *     sub_1405ED044 @ 0x1405ED044 (sub_1405ED044.c)
 */

char __fastcall sub_1405ECF9C(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // r8d
  char v4; // cl

  if ( (unsigned int)(a1 - 4352) <= 0x12 && (unsigned int)(a2 - 4449) <= 0x14 )
    return 1;
  v2 = sub_1405ED044(a1, a2, (unsigned int)a2);
  v4 = 0;
  if ( v2 )
  {
    if ( (unsigned int)(v3 - 4520) <= 0x1A )
      return 1;
  }
  return v4;
}
