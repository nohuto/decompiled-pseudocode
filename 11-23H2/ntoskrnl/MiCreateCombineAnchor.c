/*
 * XREFs of MiCreateCombineAnchor @ 0x14021503C
 * Callers:
 *     MiConvertPrivateToProto @ 0x1402175A8 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14035A020 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiLocateCombineBlock @ 0x140215B20 (MiLocateCombineBlock.c)
 *     MiIncrementCombinedPte @ 0x140217740 (MiIncrementCombinedPte.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiCreateCombineAnchor(__int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v8; // rbp
  __int64 CombineBlock; // rax
  __int64 v10; // rbx

  v3 = 0;
  v4 = *a1;
  v5 = a1[14];
  v8 = *a1 + 16LL * (*(_DWORD *)(a2 + 8) & 0xF);
  *a3 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v8 + 104));
  CombineBlock = MiLocateCombineBlock(v4, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 32), 1, a2 + 24);
  v10 = CombineBlock;
  if ( CombineBlock )
  {
    if ( (unsigned int)MiIncrementCombinedPte(v5, CombineBlock + 32) )
    {
      v3 = -1073741302;
      *a3 = v10;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 104));
  return v3;
}
