/*
 * XREFs of sub_1403BFD14 @ 0x1403BFD14
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_1403BFD14(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  char result; // al
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  v6 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  sub_1403BFE70(a1, a2, BugCheckParameter3, &v7);
  v3 = BugCheckParameter3[0];
  if ( (BugCheckParameter3[0] & 0x20) != 0 )
    *(_BYTE *)(a1 + 1762) |= 4u;
  if ( (_BYTE)byte_140E01841 )
    *(_BYTE *)(a1 + 1762) |= 8u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    result = BugCheckParameter2;
    if ( (unsigned int)BugCheckParameter2 != (unsigned __int64)v3 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, (unsigned int)BugCheckParameter2, v3, 0LL);
  }
  else
  {
    LODWORD(BugCheckParameter2) = v3;
    result = BYTE4(BugCheckParameter3[1]);
    *(_QWORD *)&xmmword_140D06920 = v3 | xmmword_140D06920 & 0xFFFFFFFF00000000uLL;
    qword_140D06930 = v6;
    qword_140C09820 = v6;
    DWORD2(xmmword_140D06920) = BugCheckParameter3[1];
    BYTE12(xmmword_140D06920) = BYTE4(BugCheckParameter3[1]);
    dword_140C09828 = BugCheckParameter3[1];
  }
  if ( v7 )
    dword_140D06C2C = 1;
  if ( (*(_QWORD *)&v3 & 0x400000LL) != 0 )
  {
    result = 0x80;
    *(_WORD *)(a1 + 1760) |= 0x80u;
  }
  return result;
}
