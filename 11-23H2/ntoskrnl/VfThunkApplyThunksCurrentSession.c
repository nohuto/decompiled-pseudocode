/*
 * XREFs of VfThunkApplyThunksCurrentSession @ 0x140ADB3CC
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140ADA724 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x140209F84 (VfTargetDriversGetNode.c)
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     ViIsDriverSuspectForVerifier @ 0x140AC2B6C (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllSharedExports @ 0x140ADBE84 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140ADBEE8 (ViThunkReplaceAllThunkedImports.c)
 */

__int64 __fastcall VfThunkApplyThunksCurrentSession(__int64 a1)
{
  void *v1; // rsi
  unsigned int v3; // ebx
  __int64 Node; // rax
  __int64 v5; // rdi
  PVOID v6; // r14
  ULONG v7; // esi
  unsigned int IsDriverSuspectForVerifier; // eax
  ULONG Size; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 48);
  v3 = 0;
  Size = 0;
  Node = VfTargetDriversGetNode((__int64)v1);
  v5 = Node;
  if ( Node )
  {
    if ( (*(_DWORD *)(Node + 24) & 1) == 0 )
    {
      v6 = RtlImageDirectoryEntryToData(v1, 1u, 0xCu, &Size);
      if ( v6 )
      {
        v7 = Size;
        if ( Size )
        {
          IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(a1);
          if ( (unsigned int)ViThunkReplaceAllThunkedImports(v6, v7 >> 3, IsDriverSuspectForVerifier) )
          {
            ViThunkReplaceAllSharedExports(v5);
            return 1;
          }
        }
      }
    }
  }
  return v3;
}
