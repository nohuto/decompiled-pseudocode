/*
 * XREFs of sub_140919308 @ 0x140919308
 * Callers:
 *     sub_1409192C8 @ 0x1409192C8 (sub_1409192C8.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_14080FCA4 @ 0x14080FCA4 (sub_14080FCA4.c)
 *     sub_14080FCD0 @ 0x14080FCD0 (sub_14080FCD0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

void __fastcall sub_140919308(__int64 a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  signed __int64 i; // rdx
  signed __int64 v6; // rtt
  signed __int64 v7; // rax
  bool v8; // cc
  signed __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rcx

  _m_prefetchw(a2 + 2);
  v4 = a2[2];
  for ( i = v4 - 1; i > 0; i = v4 - 1 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(a2 + 2, i, v4);
    if ( v6 == v4 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  sub_1407C0854(a1);
  sub_14080FCD0();
  v7 = _InterlockedExchangeAdd64(a2 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v8 = v7 <= 1;
  v9 = v7 - 1;
  if ( v8 )
  {
    if ( v9 )
      __fastfail(0xEu);
    v10 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v11 = (_QWORD *)a2[1], (_QWORD *)*v11 != a2) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    sub_14080FCA4();
    *(_WORD *)(a1 + 8) &= ~0x80u;
    sub_140AB4300(a1);
    sub_14071BF40(a2[3]);
    sub_140346D64(a2, 0x33374D43u);
  }
  else
  {
    sub_14080FCA4();
    sub_140AB4300(a1);
  }
}
