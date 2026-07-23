/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x14079D7D8
 * Callers:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14020EBB8 (MiIsImportOptimizationEnabled.c)
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x140324FB4 (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403250DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCaptureRetpolineImportInfo @ 0x14079D8D8 (MiCaptureRetpolineImportInfo.c)
 *     VslCaptureSecureImageIat @ 0x14094398C (VslCaptureSecureImageIat.c)
 */

__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, ULONG_PTR a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8
  void *v8; // rbx
  int v9; // ebx
  PVOID v11; // rax
  ULONG Size; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !MiIsImportOptimizationEnabled() )
    return 0;
  if ( !MiDoesControlAreaRequireRetpolineFixups(v5) )
    return 0;
  v8 = *(void **)(a1 + 48);
  if ( *(void **)(*(_QWORD *)v6 + 32LL) != v8 || (v7 & 1) != 0 )
    return 0;
  if ( (MiFlags & 0x8000) != 0 )
  {
    Size = 0;
    v11 = RtlImageDirectoryEntryToData(v8, 1u, 0xCu, &Size);
    if ( v11 )
    {
      v9 = VslCaptureSecureImageIat(v8, v11, Size);
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
  }
  else
  {
    v4 = (__int64 *)MiReservePtes((__int64)&qword_140C69940, 1u);
    if ( !v4 )
      return (unsigned int)-1073741670;
    v9 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v9 < 0 )
      goto LABEL_11;
  }
  MiWalkEntireImage(a2, (ULONG_PTR)v4, 0x10u, 0xFFFFFFFF);
  if ( (MiFlags & 0x8000) == 0 )
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, (int)v4);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v9 = 0;
  if ( v4 )
LABEL_11:
    MiReleasePtes((__int64)&qword_140C69940, v4, 1u);
  return (unsigned int)v9;
}
