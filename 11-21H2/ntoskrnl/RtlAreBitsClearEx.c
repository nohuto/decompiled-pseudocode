/*
 * XREFs of RtlAreBitsClearEx @ 0x14022C900
 * Callers:
 *     sub_1407B92D0 @ 0x1407B92D0 (sub_1407B92D0.c)
 *     sub_1407BDB60 @ 0x1407BDB60 (sub_1407BDB60.c)
 *     sub_140970C6C @ 0x140970C6C (sub_140970C6C.c)
 *     sub_1409766B0 @ 0x1409766B0 (sub_1409766B0.c)
 *     sub_140981BB0 @ 0x140981BB0 (sub_140981BB0.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r11
  __int64 v5; // rbx
  _QWORD *v6; // r9
  _QWORD *v7; // r10
  _QWORD *v10; // r9

  if ( a2 >= *(_QWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest64(*(const signed __int64 **)(a1 + 8), a2);
    return 0;
  }
  if ( *(_QWORD *)a1 - a2 < a3 )
    return 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2 + a3 - 1;
  v5 = *(_QWORD *)(v3 + 8 * (a2 >> 6));
  v6 = (_QWORD *)(v3 + 8 * (a2 >> 6));
  v7 = (_QWORD *)(v3 + 8 * (v4 >> 6));
  if ( v6 != v7 )
  {
    if ( (v5 & (-1LL << a2)) == 0 )
    {
      v10 = v6 + 1;
      if ( v10 == v7 )
        return ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v4) & *v10) == 0;
      while ( !*v10 )
      {
        if ( ++v10 == v7 )
          return ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v4) & *v10) == 0;
      }
    }
    return 0;
  }
  return (v5 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2)) == 0;
}
