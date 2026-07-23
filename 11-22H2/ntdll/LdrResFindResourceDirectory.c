/*
 * XREFs of LdrResFindResourceDirectory @ 0x180005190
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResourceDirectory(
        const WCHAR *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7)
{
  __int64 v7; // rax
  _QWORD Src[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (a7 & 0xC00) != 0 )
    return 3221225485LL;
  v7 = Src[0];
  if ( a2 )
    v7 = a2;
  Src[0] = v7;
  if ( a3 )
    Src[1] = a3;
  return LdrResSearchResource(a1, Src, a4, 0LL, a5, a6);
}
