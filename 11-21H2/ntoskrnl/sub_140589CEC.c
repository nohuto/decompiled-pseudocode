/*
 * XREFs of sub_140589CEC @ 0x140589CEC
 * Callers:
 *     sub_14045B962 @ 0x14045B962 (sub_14045B962.c)
 *     sub_14058A110 @ 0x14058A110 (sub_14058A110.c)
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 * Callees:
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 */

char __fastcall sub_140589CEC(__int64 a1, int a2)
{
  char v4; // cl
  char result; // al
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  if ( (a2 & 0x100) != 0 )
  {
    v4 = *(_BYTE *)(a1 + 34);
    if ( (v4 & 7) != 5 )
      *(_BYTE *)(a1 + 34) = v4 & 0xF8 | 5;
    result = 0;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    *(_QWORD *)(a1 + 24) = v6;
    v7 = 0LL;
    if ( (a2 & 0x80000200) == 0 )
      v7 = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 8) = v7;
    if ( a2 < 0 )
      *(_QWORD *)(a1 + 24) = v6 & 0xBFFFFFFFFFFFFFFFuLL;
    if ( (a2 & 0x200) != 0 )
    {
      sub_140268998(a1);
      sub_14033C300(a1, 3);
      if ( (a2 & 0x20000) == 0 )
        _InterlockedIncrement64(&qword_140C50848);
    }
    result = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = result;
    if ( a2 < 0 )
      result = sub_14033C300(a1, 1);
  }
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  *(_DWORD *)(a1 + 36) = 0;
  return result;
}
