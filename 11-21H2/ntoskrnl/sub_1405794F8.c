/*
 * XREFs of sub_1405794F8 @ 0x1405794F8
 * Callers:
 *     sub_140294110 @ 0x140294110 (sub_140294110.c)
 * Callees:
 *     <none>
 */

void (__fastcall __noreturn *__fastcall sub_1405794F8(__int64 a1))(__int64 a1)
{
  void (__fastcall __noreturn *result)(__int64); // rax

  qword_140C2AAB0 = 1LL;
  xmmword_140C2AAC0 = 0LL;
  xmmword_140C2AAD0 = 0LL;
  xmmword_140C2AAE0 = 0LL;
  LOWORD(xmmword_140C2AAE0) = *(_WORD *)(a1 + 392);
  *((_QWORD *)&xmmword_140C2AAD0 + 1) = *(_QWORD *)(a1 + 384);
  LODWORD(xmmword_140C2AAD0) = *(_DWORD *)(a1 + 376);
  WORD4(xmmword_140C2AAC0) = *(_WORD *)(a1 + 368);
  *(_QWORD *)&xmmword_140C2AAC0 = *(_QWORD *)(a1 + 360);
  *((_QWORD *)&xmmword_140C2AAE0 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = &xmmword_140C2AAC0;
  result = sub_140420B10;
  *(_QWORD *)(a1 + 360) = sub_140420B10;
  return result;
}
