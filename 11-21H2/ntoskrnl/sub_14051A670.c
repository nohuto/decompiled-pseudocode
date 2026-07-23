/*
 * XREFs of sub_14051A670 @ 0x14051A670
 * Callers:
 *     sub_14051BA00 @ 0x14051BA00 (sub_14051BA00.c)
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403CD7E0 @ 0x1403CD7E0 (sub_1403CD7E0.c)
 *     sub_14064F634 @ 0x14064F634 (sub_14064F634.c)
 */

__int64 __fastcall sub_14051A670(void *Src, _QWORD *a2)
{
  __int64 *i; // r11
  __int64 v5; // r11
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v9; // rcx
  int v10; // esi
  _QWORD *v11; // rcx
  __int64 v12; // rdx

  for ( i = (__int64 *)qword_140C4BEA0; ; i = *(__int64 **)v5 )
  {
    if ( i == &qword_140C4BEA0 )
    {
      v6 = sub_1403B1F04((__int64)Src, 32LL);
      v7 = (_QWORD *)v6;
      if ( !v6 )
        return 3221225626LL;
      *(_OWORD *)v6 = 0LL;
      *(_OWORD *)(v6 + 16) = 0LL;
      v10 = sub_1403CD7E0(Src, (__int64 *)(v6 + 16));
      if ( v10 < 0 )
      {
        v12 = v7[2];
        if ( v12 )
          sub_1403B1B5C(v9, v12);
        sub_1403B1B5C(v9, (__int64)v7);
      }
      else
      {
        v7[3] = 1LL;
        v11 = (_QWORD *)qword_140C4BEA8;
        if ( *(__int64 **)qword_140C4BEA8 != &qword_140C4BEA0 )
          __fastfail(3u);
        *v7 = &qword_140C4BEA0;
        v7[1] = v11;
        *v11 = v7;
        qword_140C4BEA8 = (__int64)v7;
        *a2 = v7;
      }
      return (unsigned int)v10;
    }
    if ( (unsigned __int8)sub_14064F634(i[2], Src) )
      break;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
    __fastfail(0xEu);
  *a2 = v5;
  return 0LL;
}
