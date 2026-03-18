/*
 * XREFs of MiAweControlArea @ 0x1402A0EA4
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1402A0E14 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14064BD18 (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MmGetSectionInformation @ 0x1407BA090 (MmGetSectionInformation.c)
 *     MiDeletePageFileSectionNodes @ 0x1407CDAC0 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x1408633E0 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAweControlArea(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 64) || (*(_DWORD *)(a1 + 56) & 0x400) != 0 )
    return 0LL;
  else
    return (*(_DWORD *)(a1 + 92) >> 17) & 1;
}
