/*
 * XREFs of ?bValid@XDCOBJ@@QEBAHXZ @ 0x1C00404FC
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C00EB910 (NtGdiSelectBitmap.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C012CC5C (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiFillRgn @ 0x1C012E830 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C0132220 (NtGdiFrameRgn.c)
 *     NtGdiMakeObjectUnXferable @ 0x1C0146B70 (NtGdiMakeObjectUnXferable.c)
 *     GreCancelDC @ 0x1C029E32C (GreCancelDC.c)
 *     NtGdiSelectBrush @ 0x1C02AE790 (NtGdiSelectBrush.c)
 *     NtGdiSelectPen @ 0x1C02AE890 (NtGdiSelectPen.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::bValid(XDCOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
