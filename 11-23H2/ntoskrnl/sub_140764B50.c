/*
 * XREFs of sub_140764B50 @ 0x140764B50
 * Callers:
 *     sub_140764880 @ 0x140764880 (sub_140764880.c)
 *     sub_140764A38 @ 0x140764A38 (sub_140764A38.c)
 *     sub_140A4E074 @ 0x140A4E074 (sub_140A4E074.c)
 *     sub_140A4E25C @ 0x140A4E25C (sub_140A4E25C.c)
 * Callees:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140765084 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140A4DD70 @ 0x140A4DD70 (sub_140A4DD70.c)
 */

__int64 __fastcall sub_140764B50(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return sub_140A4DD70(a1, a2);
}
