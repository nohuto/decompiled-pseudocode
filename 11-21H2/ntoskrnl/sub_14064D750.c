/*
 * XREFs of sub_14064D750 @ 0x14064D750
 * Callers:
 *     sub_140AB097C @ 0x140AB097C (sub_140AB097C.c)
 * Callees:
 *     sub_14064D6B0 @ 0x14064D6B0 (sub_14064D6B0.c)
 */

__int64 __fastcall sub_14064D750(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (_BYTE)xmmword_140C0DF20 )
    return (unsigned int)-1073741637;
  xmmword_140C0DF70 = *(_OWORD *)a2;
  xmmword_140C0DF80 = *(_OWORD *)(a2 + 16);
  DWORD2(xmmword_140C0DF20) = *(_DWORD *)(a2 + 8);
  DWORD1(xmmword_140C0DF20) = *(_DWORD *)(a2 + 12);
  HIDWORD(xmmword_140C0DF20) = *(_DWORD *)(a2 + 16);
  if ( *(_DWORD *)(a2 + 24) == 3 )
  {
    LODWORD(xmmword_140C0DF30) = 4;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a2 + 24) == 4 )
  {
    LODWORD(xmmword_140C0DF30) = 5;
LABEL_7:
    LOWORD(xmmword_140C0DF20) = 1;
    qword_140C0DF40 = *(PVOID *)a2;
    sub_14064D6B0((__int64)&xmmword_140C0DF20);
    return v2;
  }
  return (unsigned int)-1073741637;
}
