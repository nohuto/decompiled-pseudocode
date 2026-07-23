/*
 * XREFs of LdrResFindResourceDirectory @ 0x1407E9F40
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x140759E30 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResourceDirectory(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int **a4,
        void *a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // rax
  unsigned int v9; // r8d
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (a7 & 0xC00) != 0 )
    return 3221225485LL;
  v8 = v11[0];
  if ( a2 )
    v8 = a2;
  v11[0] = v8;
  v9 = a2 != 0;
  if ( a3 )
  {
    v11[1] = a3;
    v9 = 2;
  }
  return LdrResSearchResource(a1, v11, v9, a7 | 2u, a4, 0LL, a5, a6);
}
