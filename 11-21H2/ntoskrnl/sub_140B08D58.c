/*
 * XREFs of sub_140B08D58 @ 0x140B08D58
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

__int64 sub_140B08D58()
{
  _RTL_BITMAP *v0; // rax
  __int64 result; // rax
  UNICODE_STRING v2; // [rsp+30h] [rbp-49h] BYREF
  ULONG_PTR BugCheckParameter3[16]; // [rsp+40h] [rbp-39h] BYREF

  qword_140C50618 = 0LL;
  v2.Buffer = L"Session";
  *(_QWORD *)&v2.Length = 1048590LL;
  v0 = (_RTL_BITMAP *)sub_1402828F0(256, 0x20uLL, 0x20206D4Du);
  qword_140C53490 = v0;
  if ( !v0 || (v0->SizeOfBitMap = 128, v0->Buffer = &v0[1].SizeOfBitMap, !qword_140C53490) )
    KeBugCheckEx(0x7Du, qword_140C590D0, qword_140C590C0, qword_140C590C8, 0x200uLL);
  memset(
    qword_140C53490->Buffer,
    0,
    4 * ((qword_140C53490->SizeOfBitMap >> 5) + ((qword_140C53490->SizeOfBitMap & 0x1F) != 0)));
  qword_140C50638 = 0LL;
  memset(BugCheckParameter3, 0, 0x78uLL);
  LODWORD(BugCheckParameter3[1]) = 0;
  BYTE2(BugCheckParameter3[0]) |= 0xCu;
  LOWORD(BugCheckParameter3[0]) = 120;
  HIDWORD(BugCheckParameter3[4]) = 512;
  HIDWORD(BugCheckParameter3[5]) = 40;
  *(_OWORD *)((char *)&BugCheckParameter3[1] + 4) = xmmword_140B57A90;
  HIDWORD(BugCheckParameter3[3]) = 983043;
  BugCheckParameter3[9] = (ULONG_PTR)sub_14096DD40;
  result = ObCreateObjectType(&v2, (__int64)BugCheckParameter3, 0LL, (__int64)&qword_140D06BB0);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1Au, 0x1237uLL, (int)result, (ULONG_PTR)BugCheckParameter3, 0LL);
  return result;
}
