/*
 * XREFs of RtlpLocateActivationContextSectionForQuery @ 0x18007B25C
 * Callers:
 *     RtlpQueryRunLevel @ 0x18007B0A8 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007B198 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18008D2F4 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800EB568 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800EB7F8 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800EBA84 (RtlpQueryInformationActivationContextManifestResourceName.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x18001DC40 (RtlpLocateActivationContextSection.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpLocateActivationContextSectionForQuery(
        _DWORD *a1,
        int *a2,
        void *a3,
        size_t a4,
        size_t *a5,
        size_t Size,
        _DWORD *a7,
        __int64 a8,
        unsigned int a9,
        _QWORD *a10,
        _DWORD *a11)
{
  int ActivationContextSection; // eax

  if ( a7
    && (ActivationContextSection = RtlpLocateActivationContextSection(a7, 0LL, a9, a10, a11),
        *a2 = ActivationContextSection,
        ActivationContextSection != -1072365567) )
  {
    *a1 = ((ActivationContextSection >> 31) & 1) + 1;
  }
  else
  {
    *a1 = 2;
    if ( Size > a4 )
    {
      *a2 = -1073741789;
    }
    else
    {
      memset_thunk_772440563353939046(a3, 0, Size);
      if ( a5 )
        *a5 = Size;
      *a2 = 0;
    }
  }
}
