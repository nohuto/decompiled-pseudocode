/*
 * XREFs of UmfdUnloadFontFile @ 0x1C00EA0E0
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00E9FA0 (UmfdLoadFontFile.c)
 * Callees:
 *     UmfdUnloadFontFileInternal @ 0x1C00EA118 (UmfdUnloadFontFileInternal.c)
 */

__int64 __fastcall UmfdUnloadFontFile(PVOID pv)
{
  unsigned int v2; // ebx

  v2 = UmfdUnloadFontFileInternal(pv);
  EngFreeMem(pv);
  return v2;
}
