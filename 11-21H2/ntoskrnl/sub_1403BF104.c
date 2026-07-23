/*
 * XREFs of sub_1403BF104 @ 0x1403BF104
 * Callers:
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403B8644 @ 0x1403B8644 (sub_1403B8644.c)
 *     sub_1403B8D0C @ 0x1403B8D0C (sub_1403B8D0C.c)
 *     sub_1403BB634 @ 0x1403BB634 (sub_1403BB634.c)
 *     sub_1403BBC5C @ 0x1403BBC5C (sub_1403BBC5C.c)
 *     sub_1403BD66C @ 0x1403BD66C (sub_1403BD66C.c)
 *     sub_1403BDD00 @ 0x1403BDD00 (sub_1403BDD00.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BE4F0 @ 0x1403BE4F0 (sub_1403BE4F0.c)
 *     sub_1403BECF8 @ 0x1403BECF8 (sub_1403BECF8.c)
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 *     sub_1403DD678 @ 0x1403DD678 (sub_1403DD678.c)
 *     sub_140510850 @ 0x140510850 (sub_140510850.c)
 *     sub_14051A18C @ 0x14051A18C (sub_14051A18C.c)
 *     sub_14051B720 @ 0x14051B720 (sub_14051B720.c)
 *     sub_14051DEB0 @ 0x14051DEB0 (sub_14051DEB0.c)
 *     sub_140529654 @ 0x140529654 (sub_140529654.c)
 *     sub_140AF70C8 @ 0x140AF70C8 (sub_140AF70C8.c)
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 *     sub_140AFA274 @ 0x140AFA274 (sub_140AFA274.c)
 *     sub_140AFA63C @ 0x140AFA63C (sub_140AFA63C.c)
 *     sub_140B237A4 @ 0x140B237A4 (sub_140B237A4.c)
 *     sub_140B2AB30 @ 0x140B2AB30 (sub_140B2AB30.c)
 *     sub_140B4BF38 @ 0x140B4BF38 (sub_140B4BF38.c)
 *     sub_140B4D08C @ 0x140B4D08C (sub_140B4D08C.c)
 * Callees:
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 */

__int64 __fastcall sub_1403BF104(int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( !qword_140C54AC0 || HIDWORD(KeGetPcr()[1].LockArray) )
    KeBugCheckEx(0x5Cu, 0x8000uLL, 0x8675309uLL, 0LL, 0LL);
  if ( a2 > 1 )
    return 0LL;
  v3 = (a1 + 7) & 0xFFFFFFF8;
  if ( dword_140C54AD0 >= v3 )
  {
    result = qword_140C54AC8;
    qword_140C54AC8 += v3;
    dword_140C54AD0 -= v3;
    return result;
  }
  v5 = (v3 + 4095) >> 12;
  v6 = sub_140AF9E94(qword_140C54AC0, 0LL, v5, 0LL);
  if ( !v6 )
    return 0LL;
  v7 = sub_1403BF3B8(v6, v5, a2 == 1, 0, 4);
  if ( v7 )
  {
    qword_140C54AC8 = v7 + v3;
    dword_140C54AD0 = (v5 << 12) - v3;
  }
  return v7;
}
