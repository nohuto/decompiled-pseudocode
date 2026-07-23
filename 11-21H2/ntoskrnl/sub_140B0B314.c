/*
 * XREFs of sub_140B0B314 @ 0x140B0B314
 * Callers:
 *     sub_140B0AA3C @ 0x140B0AA3C (sub_140B0AA3C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140B0B5F8 @ 0x140B0B5F8 (sub_140B0B5F8.c)
 */

__int64 __fastcall sub_140B0B314(
        const WCHAR *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        const WCHAR *a4,
        const WCHAR *SourceString,
        const WCHAR *a6,
        const WCHAR *a7,
        const WCHAR *a8,
        const WCHAR *a9,
        const WCHAR *a10,
        const WCHAR *a11,
        const WCHAR *a12,
        const WCHAR *a13,
        const WCHAR *a14,
        const WCHAR *a15,
        const WCHAR *a16,
        const WCHAR *a17,
        const WCHAR *a18,
        const WCHAR *a19,
        const WCHAR *a20,
        const WCHAR *a21,
        const WCHAR *a22,
        const WCHAR *a23,
        const WCHAR *a24,
        const WCHAR *a25,
        const WCHAR *a26,
        const WCHAR *a27,
        const WCHAR *a28,
        const WCHAR *a29)
{
  __int64 i; // rcx
  __int64 result; // rax
  _DWORD v34[32]; // [rsp+D0h] [rbp-30h]

  v34[0] = sub_140B0B5F8(a1);
  v34[1] = sub_140B0B5F8(a2);
  v34[2] = sub_140B0B5F8(a3);
  v34[3] = sub_140B0B5F8(a4);
  v34[4] = sub_140B0B5F8(SourceString);
  v34[5] = sub_140B0B5F8(a6);
  v34[6] = sub_140B0B5F8(a7);
  v34[7] = sub_140B0B5F8(a8);
  v34[8] = sub_140B0B5F8(a9);
  v34[9] = sub_140B0B5F8(a10);
  v34[10] = sub_140B0B5F8(a11);
  v34[11] = sub_140B0B5F8(a12);
  v34[12] = sub_140B0B5F8(a13);
  v34[13] = sub_140B0B5F8(a14);
  v34[14] = sub_140B0B5F8(a15);
  v34[15] = sub_140B0B5F8(a16);
  v34[16] = sub_140B0B5F8(a17);
  v34[17] = sub_140B0B5F8(a18);
  v34[18] = sub_140B0B5F8(a19);
  v34[19] = sub_140B0B5F8(a20);
  v34[20] = sub_140B0B5F8(a21);
  v34[21] = sub_140B0B5F8(a22);
  v34[22] = sub_140B0B5F8(a23);
  v34[23] = sub_140B0B5F8(a24);
  v34[24] = sub_140B0B5F8(a25);
  v34[25] = sub_140B0B5F8(a26);
  v34[26] = sub_140B0B5F8(a27);
  v34[27] = sub_140B0B5F8(a28);
  v34[28] = sub_140B0B5F8(a29);
  for ( i = 0LL; i < 29; ++i )
  {
    result = *(unsigned int *)((char *)qword_1400256F0 + i * 4);
    if ( v34[i] != (_DWORD)result )
      LODWORD(dword_140C158E8) = 8;
  }
  return result;
}
