/*
 * XREFs of ViThunkFindAllThunkedImports @ 0x140ADC940
 * Callers:
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140ADC6BC (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     ViThunkGetWdmThunk @ 0x140ADCBC4 (ViThunkGetWdmThunk.c)
 */

__int64 __fastcall ViThunkFindAllThunkedImports(__int64 a1, __int64 a2, unsigned int *a3)
{
  void *v3; // rcx
  _DWORD *v4; // r15
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  unsigned int i; // edi
  __int64 v9; // rbp
  __int64 WdmThunk; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *(void **)(a1 + 48);
  v4 = ViWdmThunksWithIatIndex;
  LODWORD(v14) = 0;
  v6 = RtlImageDirectoryEntryToData(v3, 1u, 0xCu, (PULONG)&v14);
  if ( !v6 || !(_DWORD)v14 )
    return 0LL;
  v7 = (unsigned int)v14 >> 3;
  for ( i = 0; i < v7; ++v6 )
  {
    v9 = *v6;
    WdmThunk = ViThunkGetWdmThunk(*v6, &VfPoolThunks);
    if ( WdmThunk
      || (WdmThunk = ViThunkGetWdmThunk(v9, &VfRegularThunks)) != 0
      || (WdmThunk = ViThunkGetWdmThunk(v9, &VfDifThunks)) != 0 )
    {
      v11 = *a3;
      v12 = 3 * v11;
      v4[2 * v12] = i;
      *(_QWORD *)&v4[2 * v12 + 2] = WdmThunk;
      *a3 = v11 + 1;
    }
    ++i;
  }
  return *a3;
}
