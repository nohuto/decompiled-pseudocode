/*
 * XREFs of LdrResFindResource @ 0x1800EECD0
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 */

NTSTATUS __fastcall LdrResFindResource(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8,
        int a9)
{
  _QWORD Src[5]; // [rsp+40h] [rbp-28h] BYREF

  if ( (a9 & 0xC02) != 0 )
    return -1073741811;
  Src[2] = a4;
  Src[0] = a2;
  Src[1] = a3;
  return LdrResSearchResource(a1, Src, 3u, a9, a5, a6, a7, a8);
}
