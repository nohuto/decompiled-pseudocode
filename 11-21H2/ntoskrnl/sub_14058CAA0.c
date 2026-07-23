/*
 * XREFs of sub_14058CAA0 @ 0x14058CAA0
 * Callers:
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_140589DDC @ 0x140589DDC (sub_140589DDC.c)
 * Callees:
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 */

__int64 __fastcall sub_14058CAA0(_QWORD *a1, char a2)
{
  unsigned __int64 v3; // rax

  if ( (a1[3] & 0x4000000000000000LL) != 0 )
    return 0LL;
  if ( (a2 & 1) != 0 )
    v3 = sub_14024A35C(a1);
  else
    v3 = (*a1 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
  return *(unsigned int *)(v3 + 1088);
}
