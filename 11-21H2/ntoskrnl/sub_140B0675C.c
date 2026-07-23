/*
 * XREFs of sub_140B0675C @ 0x140B0675C
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14026CF08 @ 0x14026CF08 (sub_14026CF08.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1403C289C @ 0x1403C289C (sub_1403C289C.c)
 *     sub_1407F35F8 @ 0x1407F35F8 (sub_1407F35F8.c)
 */

__int64 sub_140B0675C()
{
  __int64 *v0; // rax
  __int64 v1; // rdx
  char *v2; // rax
  __int64 result; // rax

  v0 = sub_14026CF08(6);
  if ( !(unsigned int)sub_1403C289C(v0, v1, 0x100000000000uLL) )
    return 0LL;
  qword_140C534B8 = 0x100000000LL;
  qword_140D06CB8 = 0x100000000000LL;
  v2 = sub_14026DFC0(2);
  if ( !(unsigned int)sub_1407F35F8(&StartContext, (__int64)v2, 3, 0x100000000LL) )
    return 0LL;
  qword_140C53498 = 0LL;
  qword_140C534A0 = qword_140C534B8;
  result = 1LL;
  qword_140C4F068 = 7680LL;
  qword_140C4F070 = 15360LL;
  return result;
}
