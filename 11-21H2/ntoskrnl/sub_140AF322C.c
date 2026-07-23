/*
 * XREFs of sub_140AF322C @ 0x140AF322C
 * Callers:
 *     sub_140A5B510 @ 0x140A5B510 (sub_140A5B510.c)
 * Callees:
 *     <none>
 */

char (__fastcall *sub_140AF322C())(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  char (__fastcall *result)(__int64, __int64, _QWORD *, _QWORD *, char); // rax

  off_140C01C18[0] = (void (__fastcall __noreturn *)())sub_140372830;
  off_140C01C20 = (void (__fastcall __noreturn *)())MmConfigureGraphicsPtes;
  result = sub_1403DE960;
  qword_140C01C30 = (__int64)sub_1403DE960;
  return result;
}
