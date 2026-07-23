/*
 * XREFs of sub_14099CDDC @ 0x14099CDDC
 * Callers:
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 *     sub_140828BC0 @ 0x140828BC0 (sub_140828BC0.c)
 * Callees:
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 */

__int64 __fastcall sub_14099CDDC(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-30h] BYREF
  char v6; // [rsp+24h] [rbp-2Ch]
  __int16 v7; // [rsp+25h] [rbp-2Bh]
  char v8; // [rsp+27h] [rbp-29h]
  int v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+2Ch] [rbp-24h]
  __int64 v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+38h] [rbp-18h]
  int v13; // [rsp+3Ch] [rbp-14h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  unsigned int v15; // [rsp+60h] [rbp+10h] BYREF

  v15 = a1;
  result = 0LL;
  v7 = 0;
  v8 = 0;
  v10 = 0;
  v13 = 0;
  if ( byte_140C5AE3C )
  {
    v11 = a4;
    v5 = 0;
    v6 = 0;
    v9 = 20;
    v12 = 0;
    v14 = 0LL;
    return sub_1407F2AD0(5, (__int64)&v5, 1, &v15);
  }
  return result;
}
