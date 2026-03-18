/*
 * XREFs of VfThunkApplyThunksCurrentSession @ 0x140A93724
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140A9A8F8 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     VfTargetDriversGetNode @ 0x1402D86CC (VfTargetDriversGetNode.c)
 *     ViIsDriverSuspectForVerifier @ 0x140A821E0 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllSharedExports @ 0x140A942C0 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140A94324 (ViThunkReplaceAllThunkedImports.c)
 */

__int64 __fastcall VfThunkApplyThunksCurrentSession(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v3; // ebx
  _DWORD *Node; // rax
  int v5; // edx
  _DWORD *v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // esi
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v11 = 0;
  Node = VfTargetDriversGetNode(v1);
  v6 = Node;
  if ( Node )
  {
    if ( (Node[6] & 1) == 0 )
    {
      LOBYTE(v5) = 1;
      v7 = RtlImageDirectoryEntryToData(v1, v5, 12, (int)&v11);
      if ( v7 )
      {
        v8 = v11;
        if ( v11 )
        {
          IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(a1);
          if ( (unsigned int)ViThunkReplaceAllThunkedImports(v7, v8 >> 3, IsDriverSuspectForVerifier) )
          {
            ViThunkReplaceAllSharedExports(v6);
            return 1;
          }
        }
      }
    }
  }
  return v3;
}
