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

__int64 __fastcall LdrpLoadPatchedNtdll(unsigned __int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int CurrentPatch; // ebx
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v8);
  v3 = (_QWORD *)(a2 + 536);
  v4 = *(_DWORD *)(v8 + 8);
  v5 = *(_DWORD *)(v8 + 88);
  *(_QWORD *)(a2 + 8) = a2 + 16;
  *(_DWORD *)a2 = 34078720;
  *(_QWORD *)(a2 + 536) = 0LL;
  CurrentPatch = LdrpQueryCurrentPatch(v5, v4, a2);
  if ( CurrentPatch < 0
    || *(_WORD *)a2
    && ((CurrentPatch = LdrpLoadCustomNtdll(a2, (const void **)(a2 + 536)), CurrentPatch < 0)
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
