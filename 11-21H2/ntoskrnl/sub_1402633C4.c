/*
 * XREFs of sub_1402633C4 @ 0x1402633C4
 * Callers:
 *     sub_1407DC0D0 @ 0x1407DC0D0 (sub_1407DC0D0.c)
 * Callees:
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 */

__int64 __fastcall sub_1402633C4(unsigned int a1)
{
  return sub_140266B40(
           *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1838LL)),
           a1);
}
