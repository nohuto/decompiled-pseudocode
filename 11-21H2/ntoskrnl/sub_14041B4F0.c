/*
 * XREFs of sub_14041B4F0 @ 0x14041B4F0
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 * Callees:
 *     sub_1403B3020 @ 0x1403B3020 (sub_1403B3020.c)
 *     KeSaveStateForHibernate @ 0x140420460 (KeSaveStateForHibernate.c)
 */

__int64 __fastcall sub_14041B4F0(__int64 a1, int a2)
{
  __int64 v2; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  *(_DWORD *)qword_140C4BFE8 = a2;
  sub_1403B3020(0LL, 0LL, 0);
  KeSaveStateForHibernate(v5 + 144);
  v2 = v5;
  *(_QWORD *)(v5 + 632) = retaddr;
  *(_QWORD *)(v2 + 536) = &v5;
  *(_QWORD *)(v2 + 504) = 1LL;
  return 0LL;
}
