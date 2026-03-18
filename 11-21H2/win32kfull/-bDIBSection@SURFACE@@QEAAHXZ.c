/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C008A7DC
 * Callers:
 *     GreMakeBitmapStock @ 0x1C008A560 (GreMakeBitmapStock.c)
 *     GreGetDIBColorTable @ 0x1C008A670 (GreGetDIBColorTable.c)
 *     GreSetDIBColorTable @ 0x1C02B6140 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02B9570 (NtGdiGetColorSpaceforBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 24) )
      return 1LL;
  }
  return result;
}
