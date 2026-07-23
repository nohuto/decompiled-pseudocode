/*
 * XREFs of KiTpIsSupportedKernelTracepointLocation @ 0x1409766E0
 * Callers:
 *     KeSetTracepoint @ 0x140975DE0 (KeSetTracepoint.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402F7190 (RtlSectionTableFromVirtualAddress.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x1409765F0 (KiTpIsExcludedKernelTracepointLocation.c)
 */

_BOOL8 __fastcall KiTpIsSupportedKernelTracepointLocation(PVOID BaseOfImage, __int64 a2)
{
  _IMAGE_NT_HEADERS64 *v4; // rax
  PIMAGE_SECTION_HEADER v5; // rax
  int v6; // ecx
  unsigned __int8 v7; // dl
  bool v8; // zf

  v4 = RtlImageNtHeader(BaseOfImage);
  if ( !v4 )
    return 0LL;
  v5 = RtlSectionTableFromVirtualAddress(v4, BaseOfImage, (int)a2 - (int)BaseOfImage);
  if ( !v5 )
    return 0LL;
  if ( (v5->Characteristics & 0x22000000) != 0x20000000 )
    return 0LL;
  v6 = *(_DWORD *)v5->Name;
  if ( *(_DWORD *)v5->Name == 1414090313 || v6 == 1396790859 )
    return 0LL;
  if ( v6 == 1162297680 && *(_DWORD *)&v5->Name[4] )
  {
    v7 = v5->Name[4];
    if ( v7 == 119 )
    {
      v8 = v5->Name[5] == 120;
      goto LABEL_13;
    }
    if ( v7 == 86 && v5->Name[5] == 82 )
    {
      v8 = v5->Name[6] == 70;
LABEL_13:
      if ( v8 )
        return 0LL;
    }
  }
  return BaseOfImage != PsHalImageBase
      && (BaseOfImage != PsNtosImageBase
       || v6 != 1128354388 && v6 != 1347769157 && !(unsigned int)KiTpIsExcludedKernelTracepointLocation(a2));
}
