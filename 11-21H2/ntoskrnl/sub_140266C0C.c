/*
 * XREFs of sub_140266C0C @ 0x140266C0C
 * Callers:
 *     sub_1402664E8 @ 0x1402664E8 (sub_1402664E8.c)
 *     sub_140268CA8 @ 0x140268CA8 (sub_140268CA8.c)
 *     sub_1403CFD20 @ 0x1403CFD20 (sub_1403CFD20.c)
 * Callees:
 *     sub_140266998 @ 0x140266998 (sub_140266998.c)
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 */

_BOOL8 __fastcall sub_140266C0C(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // r11
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // r10d
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 808) && !*(_DWORD *)(a1 + 1168) )
  {
    v1 = *(_QWORD *)(a1 + 16720);
    v2 = sub_140266B40((_QWORD *)a1, 6u);
    v4 = v1 >> 2;
    v5 = v2;
    if ( *(_QWORD *)(v3 + 17504) < 3 * v4 && (v2 > 0x40000 || v2 > v4) )
    {
      v6 = sub_140266998(v3, 1u);
      if ( (v7 < v6 ? v6 - v7 : 0) < v5 >> 2 )
        return 1;
    }
  }
  return result;
}
