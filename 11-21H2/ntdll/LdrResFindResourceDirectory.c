/*
 * XREFs of LdrResFindResourceDirectory @ 0x180064670
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResourceDirectory(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7)
{
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (a7 & 0xC00) != 0 )
    return 3221225485LL;
  v7 = v9[0];
  if ( a2 )
    v7 = a2;
  v9[0] = v7;
  if ( a3 )
    v9[1] = a3;
  return LdrResSearchResource(a1, v9, a4, 0LL, a5, a6);
}
