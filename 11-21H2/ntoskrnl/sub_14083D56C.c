/*
 * XREFs of sub_14083D56C @ 0x14083D56C
 * Callers:
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_14090DF50 @ 0x14090DF50 (sub_14090DF50.c)
 *     sub_1409136B4 @ 0x1409136B4 (sub_1409136B4.c)
 * Callees:
 *     sub_14020AA74 @ 0x14020AA74 (sub_14020AA74.c)
 *     sub_14020AA84 @ 0x14020AA84 (sub_14020AA84.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_140919170 @ 0x140919170 (sub_140919170.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

__int64 __fastcall sub_14083D56C(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = (_QWORD *)(a1 + 4208);
  while ( 1 )
  {
    sub_140689388(0);
    sub_140AB41FC(a1);
    if ( !sub_14020AA74(v2) && !sub_14020AA74((_QWORD *)(a1 + 4192)) )
      break;
    sub_140919170(a1);
  }
  sub_14020AA84(v2);
  sub_14020AA84((_QWORD *)(a1 + 4192));
  sub_140AB41E0(a1);
  return sub_140AB4260(v4, v3, v5, v6);
}
