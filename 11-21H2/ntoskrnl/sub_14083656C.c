/*
 * XREFs of sub_14083656C @ 0x14083656C
 * Callers:
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

_QWORD *__fastcall sub_14083656C(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // r8
  __int64 v6; // r8

  if ( PsIsCurrentThreadInServerSilo() )
  {
    v6 = *((_QWORD *)sub_140347DB0() + 165);
    result = (_QWORD *)(v6 + 608);
    v5 = (_QWORD *)(v6 + 616);
  }
  else
  {
    result = (_QWORD *)0xFFFFF780000003C8LL;
    v5 = (_QWORD *)0xFFFFF780000003D0LL;
  }
  *result = a1;
  *v5 = a2;
  return result;
}
