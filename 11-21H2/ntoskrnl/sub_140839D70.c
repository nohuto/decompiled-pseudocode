/*
 * XREFs of sub_140839D70 @ 0x140839D70
 * Callers:
 *     sub_140839A64 @ 0x140839A64 (sub_140839A64.c)
 *     ArbBootAllocation @ 0x140839BE0 (ArbBootAllocation.c)
 *     sub_14090B4C0 @ 0x14090B4C0 (sub_14090B4C0.c)
 *     sub_14090B860 @ 0x14090B860 (sub_14090B860.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140839D70(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  int v6; // edx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  char v9; // al
  int v10; // ecx

  a3[5] = a2;
  result = sub_14042A5E0(a2, a3);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a3 + 9) = 0;
    if ( *(_BYTE *)(a2 + 2) == 3 )
    {
      *((_DWORD *)a3 + 9) = 1;
      v6 = 1;
    }
    v7 = a3[1];
    v8 = *a3;
    if ( v7 - *a3 + 1 == a3[2] )
    {
      v6 |= 2u;
      *((_DWORD *)a3 + 9) = v6;
    }
    v9 = *(_BYTE *)(a2 + 1);
    if ( v9 == 3 || (v10 = v6, v9 == 7) )
    {
      v10 = v6;
      if ( _bittest16((const signed __int16 *)(a2 + 4), 8u) )
      {
        v10 = v6 | 8;
        *((_DWORD *)a3 + 9) = v6 | 8;
      }
    }
    if ( v7 < v8 )
      *((_DWORD *)a3 + 9) = v10 | 4;
    return 0LL;
  }
  return result;
}
