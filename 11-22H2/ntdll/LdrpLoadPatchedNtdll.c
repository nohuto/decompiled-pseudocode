/*
 * XREFs of LdrpLoadPatchedNtdll @ 0x1800DEF34
 * Callers:
 *     LdrpInitializeInternal @ 0x180073EC8 (LdrpInitializeInternal.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     NpUnmapViewOfSection @ 0x18009E9C0 (NpUnmapViewOfSection.c)
 *     ZwManageHotPatch @ 0x1800A10E0 (ZwManageHotPatch.c)
 *     LdrpQueryCurrentPatch @ 0x1800DA5D0 (LdrpQueryCurrentPatch.c)
 *     LdrpLoadCustomNtdll @ 0x1800DED6C (LdrpLoadCustomNtdll.c)
 */

__int64 __fastcall LdrpLoadPatchedNtdll(PVOID BaseOfImage, __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned int TimeDateStamp; // edx
  unsigned int CheckSum; // ecx
  int CurrentPatch; // ebx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  v3 = (_QWORD *)(a2 + 536);
  TimeDateStamp = OutHeaders->FileHeader.TimeDateStamp;
  CheckSum = OutHeaders->OptionalHeader.CheckSum;
  *(_QWORD *)(a2 + 8) = a2 + 16;
  *(_DWORD *)a2 = 34078720;
  *(_QWORD *)(a2 + 536) = 0LL;
  CurrentPatch = LdrpQueryCurrentPatch(CheckSum, TimeDateStamp, a2);
  if ( CurrentPatch < 0
    || *(_WORD *)a2
    && ((CurrentPatch = LdrpLoadCustomNtdll((__int128 *)a2, (PVOID *)(a2 + 536)), CurrentPatch < 0)
     || (CurrentPatch = ZwManageHotPatch(), CurrentPatch < 0)) )
  {
    if ( *v3 )
    {
      NpUnmapViewOfSection();
      *v3 = 0LL;
    }
  }
  return (unsigned int)CurrentPatch;
}
