/*
 * XREFs of MiProcessKernelCfgImage @ 0x140368450
 * Callers:
 *     MiFinalizeDriverCfgState @ 0x1407E32F8 (MiFinalizeDriverCfgState.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140214B60 (RtlImageNtHeaderEx.c)
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x140A4431C (MiProcessKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgImage(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  int v8; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  OutHeaders = 0LL;
  if ( (MiFlags & 0x40000) == 0 )
    return 0LL;
  RtlImageNtHeaderEx(1u, *(PVOID *)(a1 + 48), 0LL, &OutHeaders);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000) == 0 )
  {
    result = MiMarkKernelImageCfgBits(a1, OutHeaders);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 104) |= 0x2000u;
  }
  if ( !a3 || (a2 & 8) != 0 )
    return 0LL;
  v8 = MiProcessKernelCfgAddressTakenImports(a1);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
