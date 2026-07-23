/*
 * XREFs of sub_140995B08 @ 0x140995B08
 * Callers:
 *     sub_1403C10B0 @ 0x1403C10B0 (sub_1403C10B0.c)
 *     sub_140993C50 @ 0x140993C50 (sub_140993C50.c)
 *     sub_140996C60 @ 0x140996C60 (sub_140996C60.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_1407F22AC @ 0x1407F22AC (sub_1407F22AC.c)
 */

void __fastcall sub_140995B08(unsigned int a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+58h] [rbp+10h] BYREF

  if ( !byte_140C5AC3C )
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  v3 = 0;
  if ( (_DWORD)xmmword_140C20BD0 == 1 )
  {
    v2 = 3LL;
    if ( a1 == 43 && BYTE8(xmmword_140C20BE0) )
      v2 = 2LL;
    goto LABEL_11;
  }
  if ( (_DWORD)xmmword_140C20BD0 == 4 && BYTE8(xmmword_140C20BE0) && a1 == 43 )
  {
    v2 = 10LL;
LABEL_11:
    sub_1407F22AC((_QWORD *)v2, (int)&v3, 0, a1);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
}
