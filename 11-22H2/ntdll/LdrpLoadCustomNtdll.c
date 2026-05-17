/*
 * XREFs of LdrpLoadCustomNtdll @ 0x1800DED6C
 * Callers:
 *     LdrpLoadPatchedNtdll @ 0x1800DEF34 (LdrpLoadPatchedNtdll.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18002EEB0 (RtlImageNtHeader.c)
 *     NpClose @ 0x18009E980 (NpClose.c)
 *     NpMapViewOfSection @ 0x18009E9A0 (NpMapViewOfSection.c)
 *     NpUnmapViewOfSection @ 0x18009E9C0 (NpUnmapViewOfSection.c)
 *     NpOpenFile @ 0x18009E9E0 (NpOpenFile.c)
 *     NpCreateSection @ 0x18009EA00 (NpCreateSection.c)
 *     ZwSystemDebugControl @ 0x1800A2780 (ZwSystemDebugControl.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DCCF4 (LdrpProtectAndRelocateImage.c)
 */

__int64 __fastcall LdrpLoadCustomNtdll(__int64 a1, const void **a2)
{
  int Section; // esi
  struct _TEB *v5; // rdi
  void *ArbitraryUserPointer; // rbx
  int v7; // eax

  *a2 = 0LL;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
    ZwSystemDebugControl();
  Section = NpOpenFile();
  if ( Section >= 0 )
  {
    Section = NpCreateSection();
    if ( Section >= 0 )
    {
      v5 = NtCurrentTeb();
      ArbitraryUserPointer = v5->NtTib.ArbitraryUserPointer;
      v5->NtTib.ArbitraryUserPointer = *(void **)(a1 + 8);
      v7 = NpMapViewOfSection();
      v5->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
      Section = v7;
      if ( v7 == 1073741827 )
        Section = LdrpProtectAndRelocateImage(*a2);
      if ( Section >= 0 && !RtlImageNtHeader((unsigned __int64)*a2) )
        Section = -1073741701;
    }
  }
  if ( Section < 0 && *a2 )
  {
    NpUnmapViewOfSection();
    *a2 = 0LL;
  }
  return (unsigned int)Section;
}
