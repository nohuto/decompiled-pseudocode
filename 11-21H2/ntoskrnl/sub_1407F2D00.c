/*
 * XREFs of sub_1407F2D00 @ 0x1407F2D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406831A8 @ 0x1406831A8 (sub_1406831A8.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 *     sub_1409A4620 @ 0x1409A4620 (sub_1409A4620.c)
 */

__int64 __fastcall sub_1407F2D00(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-30h] BYREF
  char v8; // [rsp+24h] [rbp-2Ch]
  __int16 v9; // [rsp+25h] [rbp-2Bh]
  char v10; // [rsp+27h] [rbp-29h]
  __int64 v11; // [rsp+28h] [rbp-28h]
  int *v12; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-18h]
  int *v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+70h] [rbp+20h] BYREF
  int v16; // [rsp+80h] [rbp+30h] BYREF

  v15 = 0;
  sub_1406831A8(*(_QWORD *)(a1 + 136), 12, 2LL - (a3 != 0));
  if ( sub_1407F0F98() )
  {
    LOBYTE(v5) = a3;
    return sub_1409A4620(*(unsigned int *)(a1 + 16), *(unsigned int *)(a1 + 36), v5);
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v11 = 4LL;
    v13 = 4LL;
    v7 = 2;
    v16 = a3 != 0 ? 1 : -1;
    v8 = 0;
    v12 = &v16;
    v14 = &v15;
    return sub_1407F2AD0(5, (__int64)&v7, 1, (unsigned int *)(a1 + 16));
  }
}
