/*
 * XREFs of sub_14083D1A4 @ 0x14083D1A4
 * Callers:
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_14090DF50 @ 0x14090DF50 (sub_14090DF50.c)
 *     sub_1409136B4 @ 0x1409136B4 (sub_1409136B4.c)
 * Callees:
 *     sub_140689034 @ 0x140689034 (sub_140689034.c)
 *     sub_140689074 @ 0x140689074 (sub_140689074.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

__int64 __fastcall sub_14083D1A4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KEVENT *v5; // rbx
  __int64 v6; // rcx
  struct _KEVENT *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  sub_140AB4370(a1, a2, a3);
  sub_140AB41FC(a1);
  v5 = (struct _KEVENT *)sub_140689074(v4, (_QWORD *)(a1 + 4192));
  v7 = (struct _KEVENT *)sub_140689074(v6, (_QWORD *)(a1 + 4208));
  sub_140AB41E0(a1);
  sub_140AB4260(v9, v8, v10, v11);
  sub_140689034(a1 + 4192, v5, -1073741823);
  return sub_140689034(a1 + 4208, v7, -1073741823);
}
