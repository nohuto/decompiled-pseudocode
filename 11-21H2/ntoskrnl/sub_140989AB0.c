/*
 * XREFs of sub_140989AB0 @ 0x140989AB0
 * Callers:
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 */

void __fastcall sub_140989AB0(char a1)
{
  __int64 v2; // r8
  __int128 v3; // xmm0

  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  v2 = 1LL << ((dword_140C1F798 + dword_140C1F79C) & 0x3F);
  if ( a1 )
  {
    v3 = xmmword_140C1F7C0;
    *(_QWORD *)&xmmword_140C5ACC0 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C5ACC0);
    qword_140C1F7A0 |= v2;
    WORD6(xmmword_140C5ACC0) = MEMORY[0xFFFFF780000002C4];
    BYTE14(xmmword_140C5ACC0) = dword_140C4EEFC;
    qword_140C1F7A8 = MEMORY[0xFFFFF78000000014];
    ++dword_140C1F798;
    LOBYTE(xmmword_140C5ACF0) = dword_140D04884;
    DWORD1(xmmword_140C5ACF0) = dword_140C245E4;
    DWORD2(xmmword_140C5ACF0) = dword_140C245E0;
    HIDWORD(xmmword_140C5ACF0) = dword_140C245EC;
    HIBYTE(xmmword_140C5ACC0) = HIBYTE(xmmword_140C5ACC0) & 0xFC | dword_140C4EEF4 & 1 | (2 * (dword_140C4EEF8 & 1));
  }
  else
  {
    v3 = 0LL;
    *(_QWORD *)&xmmword_140C5ACE0 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C5ACE0);
    qword_140C1F7A0 &= ~v2;
    ++dword_140C1F79C;
    WORD6(xmmword_140C5ACE0) = MEMORY[0xFFFFF780000002C4];
    qword_140C1F7B0 = MEMORY[0xFFFFF78000000014];
  }
  xmmword_140C5ACD0 = v3;
  if ( dword_140C1F798 < (unsigned int)dword_140C1F79C || (unsigned int)(dword_140C1F798 - dword_140C1F79C) > 1 )
    byte_140C1F7E8 = 1;
  sub_1403697C8(4);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
