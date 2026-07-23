/*
 * XREFs of sub_1402089E0 @ 0x1402089E0
 * Callers:
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 * Callees:
 *     sub_140657990 @ 0x140657990 (sub_140657990.c)
 *     sub_14067C50C @ 0x14067C50C (sub_14067C50C.c)
 *     sub_14067C528 @ 0x14067C528 (sub_14067C528.c)
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_14071BB4C @ 0x14071BB4C (sub_14071BB4C.c)
 *     sub_14071C050 @ 0x14071C050 (sub_14071C050.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_140910824 @ 0x140910824 (sub_140910824.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

__int64 __fastcall sub_1402089E0(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  __int64 v6; // rsi

  v3 = *(_QWORD *)(a2 + 72);
  v6 = *(_QWORD *)(v3 + 72);
  sub_14071BB4C(v3);
  sub_1407C0854(v6);
  sub_1407C0854(v3);
  sub_14067C50C(*(_QWORD *)(v3 + 32));
  sub_1407164DC(*(_QWORD *)(v3 + 32), *(unsigned int *)(v3 + 40));
  sub_14067EE40(v3, 1LL, a3);
  sub_14067EDC0(v3, a3);
  sub_14067EB68(v3);
  sub_140657990(v3, a3);
  if ( (DWORD2(xmmword_140D06900) & 0x1000000) != 0 )
    sub_140910824(a1);
  sub_14067C528(*(_QWORD *)(v3 + 32));
  sub_140AB4300(v3);
  sub_140AB4300(v6);
  return sub_14071C050(v3);
}
