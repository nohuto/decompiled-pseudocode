/*
 * XREFs of sub_140828EBC @ 0x140828EBC
 * Callers:
 *     sub_1403C0C50 @ 0x1403C0C50 (sub_1403C0C50.c)
 *     sub_1403C10B0 @ 0x1403C10B0 (sub_1403C10B0.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_140828BC0 @ 0x140828BC0 (sub_140828BC0.c)
 *     sub_140828E20 @ 0x140828E20 (sub_140828E20.c)
 *     sub_14098C9B0 @ 0x14098C9B0 (sub_14098C9B0.c)
 *     sub_14099007C @ 0x14099007C (sub_14099007C.c)
 *     sub_140995F04 @ 0x140995F04 (sub_140995F04.c)
 * Callees:
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 */

__int64 __fastcall sub_140828EBC(int a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  char v5; // [rsp+24h] [rbp-34h]
  __int16 v6; // [rsp+25h] [rbp-33h]
  char v7; // [rsp+27h] [rbp-31h]
  int v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+2Ch] [rbp-2Ch]
  __int64 v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+3Ch] [rbp-1Ch]
  __int64 v13; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v6 = 0;
  v7 = 0;
  v9 = 0;
  v12 = 0;
  if ( byte_140C5AE3C )
  {
    v4 = a1;
    v8 = a2;
    v10 = a3;
    v5 = 0;
    v11 = 0;
    v13 = 0LL;
    return sub_1407F2AD0(5, (__int64)&v4, 2, 0LL);
  }
  return result;
}
