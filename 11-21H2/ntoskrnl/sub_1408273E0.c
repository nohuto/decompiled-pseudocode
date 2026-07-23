/*
 * XREFs of sub_1408273E0 @ 0x1408273E0
 * Callers:
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 * Callees:
 *     sub_1406C2248 @ 0x1406C2248 (sub_1406C2248.c)
 *     sub_1408274C4 @ 0x1408274C4 (sub_1408274C4.c)
 */

__int64 __fastcall sub_1408273E0(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const UNICODE_STRING *a7,
        __int64 a8)
{
  __int64 v8; // rsi
  const UNICODE_STRING *v10; // rdi
  __int64 result; // rax
  int v13; // edx
  const UNICODE_STRING *v14; // [rsp+60h] [rbp+8h] BYREF

  v8 = qword_140D00AC8;
  a7 = 0LL;
  v10 = 0LL;
  v14 = 0LL;
  if ( (int)sub_1406C2248(qword_140D00AC8, a2, &a7) >= 0 )
    return 0x40000000LL;
  if ( a3 )
  {
    result = sub_1406C2248(v8, a3, &v14);
    if ( (int)result < 0 )
      return result;
    v10 = v14;
  }
  v13 = (8 * (a6 & 2)) | 0x20;
  if ( (a6 & 1) == 0 )
    v13 = 8 * (a6 & 2);
  return sub_1408274C4(v8, a2, v10, 0LL, a5, v13, sub_1407D4DD0, a8, &a7);
}
