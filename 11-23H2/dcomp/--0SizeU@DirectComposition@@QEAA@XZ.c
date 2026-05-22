/*
 * XREFs of ??0SizeU@DirectComposition@@QEAA@XZ @ 0x18008E9A0
 * Callers:
 *     ??0CSurfaceManager@DirectComposition@@AEAA@XZ @ 0x18001B868 (--0CSurfaceManager@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

DirectComposition::SizeU *__fastcall DirectComposition::SizeU::SizeU(DirectComposition::SizeU *this)
{
  DirectComposition::SizeU *result; // rax

  *(_DWORD *)this = 0;
  result = this;
  *((_DWORD *)this + 1) = 0;
  return result;
}
