/*
 * XREFs of sub_1C0022954 @ 0x1C0022954
 * Callers:
 *     sub_1C00A25F4 @ 0x1C00A25F4 (sub_1C00A25F4.c)
 * Callees:
 *     sub_1C0018B98 @ 0x1C0018B98 (sub_1C0018B98.c)
 *     sub_1C002298C @ 0x1C002298C (sub_1C002298C.c)
 */

__int64 __fastcall sub_1C0022954(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 448) & 0x20) == 0 )
  {
    sub_1C0018B98(*(_QWORD *)(a1 + 24), a1);
    return sub_1C002298C(*(_QWORD *)(a1 + 24), a1);
  }
  return result;
}
