/*
 * XREFs of sub_140818D14 @ 0x140818D14
 * Callers:
 *     sub_140818A90 @ 0x140818A90 (sub_140818A90.c)
 *     sub_1408603A8 @ 0x1408603A8 (sub_1408603A8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140818D14(int a1, __int16 a2)
{
  memset(&InputBufferLength, 0, 0xB0uLL);
  dword_140C16758 = -2130771792;
  dword_140C1673C = 0x20000;
  wcscpy(&xmmword_140C166EC, (const wchar_t *)&xmmword_140870900);
  RtlInitUnicodeString(&stru_140C167A0, &xmmword_140C166EC);
  InputBufferLength = 180;
  dword_140C167C0 = 1;
  if ( a1 )
  {
    word_140C167C6 = 1;
    word_140C167C4 = a2 + 1;
    HIWORD(dword_140C167C0) = 1;
    LOWORD(dword_140C167C0) = a2 + 2;
    InputBufferLength = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
