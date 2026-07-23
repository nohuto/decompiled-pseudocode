/*
 * XREFs of sub_1409972C8 @ 0x1409972C8
 * Callers:
 *     sub_140996FDC @ 0x140996FDC (sub_140996FDC.c)
 * Callees:
 *     sub_1405D1AD0 @ 0x1405D1AD0 (sub_1405D1AD0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1409972C8(int a1)
{
  _DWORD *v1; // r8
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // edx
  bool v6; // zf
  int *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx

  v1 = off_140C08FA8;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  while ( v1 != (_DWORD *)&off_140C08FA8 )
  {
    a1 = v1[6];
    v5 = v3;
    v4 |= 1 << a1;
    v3 |= 1 << a1;
    v6 = *((_BYTE *)v1 + 32) == 0;
    v1 = *(_DWORD **)v1;
    if ( v6 )
      v3 = v5;
  }
  sub_140A48330(a1);
  v7 = dword_140D048B0;
  do
  {
    v8 = v2;
    if ( ((1 << v2) & v3) != 0 )
      v9 = 1LL;
    else
      v9 = (unsigned int)-((v4 & (1 << v2)) != 0);
    if ( (_DWORD)v9 != *v7 )
    {
      *v7 = v9;
      sub_1405D1AD0(v2, v9);
    }
    ++v2;
    ++v7;
  }
  while ( v2 < 5 );
  return sub_140A47CF8(v8, v9);
}
