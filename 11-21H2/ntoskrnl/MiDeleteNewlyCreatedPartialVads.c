/*
 * XREFs of MiDeleteNewlyCreatedPartialVads @ 0x14097ECFC
 * Callers:
 *     MiAllocateSplitVads @ 0x14079D6B0 (MiAllocateSplitVads.c)
 * Callees:
 *     MiComputeVadCharges @ 0x14030B440 (MiComputeVadCharges.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 *     MiFreePlaceholderStorage @ 0x1406EBA90 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     MiFreeRotateView @ 0x14096D000 (MiFreeRotateView.c)
 *     MiReturnVadCharges @ 0x140977F8C (MiReturnVadCharges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteNewlyCreatedPartialVads(__int64 a1)
{
  void **v1; // rdi
  int v2; // ebx
  _KPROCESS *Process; // rbp
  void **v4; // rsi
  void *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v1 = *(void ***)a1;
  v2 = *(_DWORD *)(a1 + 40);
  v6 = 0LL;
  v7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v1 )
  {
    do
    {
      v4 = (void **)*v1;
      MiComputeVadCharges((__int64)v1, (__int64)&v6);
      if ( !v4 && (v2 & 2) == 0 )
      {
        v7 = 0LL;
        *((_QWORD *)&v6 + 1) = 0LL;
      }
      MiReturnVadCharges(&v6);
      if ( v4 || (v2 & 2) != 0 )
      {
        if ( ((_DWORD)v1[6] & 0x200000) == 0 )
        {
          v5 = v1[16];
          if ( v5 )
            ObfReferenceObject(v5);
          if ( !v4 && (v2 & 4) == 0 )
            goto LABEL_14;
          MiUpControlAreaRefs((__int64)v1, 0);
        }
        if ( v4 )
          goto LABEL_15;
      }
LABEL_14:
      if ( (v2 & 1) != 0 )
      {
LABEL_15:
        if ( ((_DWORD)v1[6] & 0x200000) == 0 )
          MiRemoveSharedCommitNode(*(_QWORD **)v1[9], (unsigned __int64)Process, 0);
      }
      MiFreeRotateView((__int64)v1);
      MiFreePlaceholderStorage((__int64)v1);
      ExFreePoolWithTag(v1, 0);
      v1 = v4;
    }
    while ( v4 );
  }
}
