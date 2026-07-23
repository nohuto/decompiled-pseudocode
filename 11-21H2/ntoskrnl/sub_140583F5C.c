/*
 * XREFs of sub_140583F5C @ 0x140583F5C
 * Callers:
 *     sub_140596B14 @ 0x140596B14 (sub_140596B14.c)
 * Callees:
 *     sub_140266998 @ 0x140266998 (sub_140266998.c)
 */

__int64 __fastcall sub_140583F5C(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  int v4; // edi
  _QWORD *v5; // r11
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r10
  __int64 v9; // r11

  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v2 > v3 )
  {
    v4 = 0;
    v5 = *(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
    v6 = v5[2090];
    if ( !a2 || ((v2 ^ (v2 + a2)) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
    {
      if ( v5[2112] < v6 >> 4 && v2 >= v6 >> 4 )
        return 1LL;
      v4 = 1;
    }
    if ( v2 - v3 >= 3 * (v6 >> 2) )
    {
      v7 = v5[2075];
      if ( (unsigned int)sub_140266998((__int64)v5, 1u) != *(_DWORD *)(v7 + 44) )
      {
        if ( !v4 )
          v8 = *(_QWORD *)(v9 + 16896);
        if ( v8 < 8LL * *(_QWORD *)(v7 + 2384) )
          return 1LL;
      }
    }
  }
  return 0LL;
}
