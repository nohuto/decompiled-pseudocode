/*
 * XREFs of MiAweControlArea @ 0x1402A1134
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1402A10A4 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14064C268 (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 *     MmGetSectionInformation @ 0x1407BA370 (MmGetSectionInformation.c)
 *     MiDeletePageFileSectionNodes @ 0x1407CDD90 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140863620 (MiDereferenceFailedControlArea.c)
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
