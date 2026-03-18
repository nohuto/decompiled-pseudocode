/*
 * XREFs of MiImageCfgRvaIteratorFirst @ 0x14079DD00
 * Callers:
 *     <none>
 * Callees:
 *     MiImageCfgRvaIteratorNext @ 0x14079DD30 (MiImageCfgRvaIteratorNext.c)
 */

__int64 __fastcall MiImageCfgRvaIteratorFirst(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 80);
  return MiImageCfgRvaIteratorNext();
}
