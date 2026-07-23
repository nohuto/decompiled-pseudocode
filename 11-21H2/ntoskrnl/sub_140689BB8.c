/*
 * XREFs of sub_140689BB8 @ 0x140689BB8
 * Callers:
 *     sub_1406890A0 @ 0x1406890A0 (sub_1406890A0.c)
 *     sub_140689B38 @ 0x140689B38 (sub_140689B38.c)
 *     sub_14068EF5C @ 0x14068EF5C (sub_14068EF5C.c)
 *     sub_1406D6E10 @ 0x1406D6E10 (sub_1406D6E10.c)
 *     sub_1406D6F24 @ 0x1406D6F24 (sub_1406D6F24.c)
 *     sub_1406DFF64 @ 0x1406DFF64 (sub_1406DFF64.c)
 *     sub_1406E9C5C @ 0x1406E9C5C (sub_1406E9C5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140689BB8(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v2; // r9
  int v3; // ecx
  unsigned __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 result; // rax

  if ( (a1[1028] & 0x800) != 0 )
    return 0x2000000LL;
  v1 = a1[70];
  v2 = a1[47];
  v3 = 0x2000;
  if ( v1 < 0x2000 )
    v3 = v1;
  v4 = (unsigned int)(8 * v3);
  v5 = v1 - v3;
  if ( v5 )
    v4 += (unsigned __int64)v5 >> 2;
  if ( v4 >= v2 )
    LODWORD(v4) = v2;
  result = (unsigned int)v4;
  if ( (unsigned int)dword_140C48DF8 >= 0x80000 && dword_140C48DF8 < (unsigned int)v4 )
    result = (unsigned int)dword_140C48DF8;
  if ( (unsigned int)result < 0x8000 )
    return 0x8000LL;
  return result;
}
