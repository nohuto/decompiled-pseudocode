/*
 * XREFs of MiReleaseSessionDriverCharges @ 0x140683154
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     MiManageSubsectionView @ 0x1402A0790 (MiManageSubsectionView.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14062624C (MiReturnCrossPartitionControlAreaCharges.c)
 */

int __fastcall MiReleaseSessionDriverCharges(__int64 a1)
{
  __int64 v3[21]; // [rsp+20h] [rbp-A8h] BYREF

  memset(&v3[1], 0, 0x90uLL);
  if ( *(_BYTE *)(a1 + 65) == 1 )
    MiReturnCrossPartitionControlAreaCharges(*(_QWORD *)(a1 + 80));
  v3[0] = *(_QWORD *)(a1 + 80);
  return MiManageSubsectionView(v3, (_QWORD *)(a1 + 24), 4);
}
