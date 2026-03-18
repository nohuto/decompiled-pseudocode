/*
 * XREFs of MiAweControlArea @ 0x1402A0D84
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1402A0CF4 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14064BD88 (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MmGetSectionInformation @ 0x1407BA640 (MmGetSectionInformation.c)
 *     MiDeletePageFileSectionNodes @ 0x1407CE050 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140863600 (MiDereferenceFailedControlArea.c)
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
