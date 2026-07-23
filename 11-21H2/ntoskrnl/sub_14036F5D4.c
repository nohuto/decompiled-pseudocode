/*
 * XREFs of sub_14036F5D4 @ 0x14036F5D4
 * Callers:
 *     sub_14036EEAC @ 0x14036EEAC (sub_14036EEAC.c)
 *     sub_1403C3FA0 @ 0x1403C3FA0 (sub_1403C3FA0.c)
 *     sub_1403C41C8 @ 0x1403C41C8 (sub_1403C41C8.c)
 * Callees:
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 */

__int64 __fastcall sub_14036F5D4(__int128 *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = *a1;
  v4 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, __int128 *))sub_14036F620)((unsigned int)a2, a2, a3, &v7);
  v5 = 0;
  if ( v4 )
  {
    *a3 = v4;
    *(_BYTE *)(v4 + 333) |= 0x10u;
    *(_BYTE *)(v4 + 525) |= 0x10u;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
