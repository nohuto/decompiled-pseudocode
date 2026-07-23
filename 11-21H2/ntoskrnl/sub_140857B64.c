/*
 * XREFs of sub_140857B64 @ 0x140857B64
 * Callers:
 *     sub_140B26BAC @ 0x140B26BAC (sub_140B26BAC.c)
 * Callees:
 *     <none>
 */

PVOID *sub_140857B64()
{
  PVOID *result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  qword_140D00C28 = 0LL;
  result = &qword_140D00C30;
  qword_140D00C38 = (__int64)&qword_140D00C30;
  qword_140D00C30 = &qword_140D00C30;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  byte_140CE1AD0 = 1;
  return result;
}
