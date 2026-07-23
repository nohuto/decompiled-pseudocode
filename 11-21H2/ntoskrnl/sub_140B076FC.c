/*
 * XREFs of sub_140B076FC @ 0x140B076FC
 * Callers:
 *     sub_140B0728C @ 0x140B0728C (sub_140B0728C.c)
 * Callees:
 *     sub_14027A0F4 @ 0x14027A0F4 (sub_14027A0F4.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

__int64 sub_140B076FC()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r10

  v0 = qword_140C540B0;
  v1 = (unsigned __int64)(unsigned int)sub_140363220(1) << 32;
  v2 = v1 | (unsigned int)sub_140363220(1);
  v3 = qword_140C540C0;
  qword_140C540B0 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_140C51BA8[0] = ((unsigned __int64)(unsigned __int8)sub_140363220(1) << 30) + v3;
  qword_140C51BE8 = ((qword_140C51BA8[0] + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
                  + ((unsigned __int64)(unsigned __int8)sub_140363220(1) << 30);
  result = sub_14027A0F4();
  qword_140C51BF0 = (v5 & (qword_140C51BE8 + result + 0x7FFFFFFFFFLL)) - 1;
  return result;
}
