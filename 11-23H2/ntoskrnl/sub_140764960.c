/*
 * XREFs of sub_140764960 @ 0x140764960
 * Callers:
 *     sub_140764690 @ 0x140764690 (sub_140764690.c)
 *     sub_140764848 @ 0x140764848 (sub_140764848.c)
 *     sub_140A4DDC4 @ 0x140A4DDC4 (sub_140A4DDC4.c)
 *     sub_140A4DFAC @ 0x140A4DFAC (sub_140A4DFAC.c)
 * Callees:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140764E94 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140A4DAC0 @ 0x140A4DAC0 (sub_140A4DAC0.c)
 */

__int64 __fastcall sub_140764960(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return sub_140A4DAC0(a1, a2);
}
