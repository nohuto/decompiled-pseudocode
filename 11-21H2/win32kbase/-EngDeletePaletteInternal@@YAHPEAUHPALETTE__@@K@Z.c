/*
 * XREFs of ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00B0820
 * Callers:
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B07D0 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngDeletePalette @ 0x1C00B0800 (EngDeletePalette.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 */

__int64 __fastcall EngDeletePaletteInternal(HPALETTE a1, __int16 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  unsigned int *v4; // rcx
  unsigned int v5; // eax
  unsigned int *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2 & 0x8000;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  v4 = v7;
  if ( v7 )
  {
    v5 = v7[6];
    if ( (v5 & 0x100) == 0 && (!v3 || (v5 & 0x2000000) != 0) )
    {
      v7[6] = v5 & 0xFEFFFFFF;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v7);
      v4 = v7;
      v2 = 1;
    }
    if ( v4 )
      HmgDecrementShareReferenceCountEx(v4, 0LL);
  }
  return v2;
}
