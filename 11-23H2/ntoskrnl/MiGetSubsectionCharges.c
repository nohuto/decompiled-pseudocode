/*
 * XREFs of MiGetSubsectionCharges @ 0x14066B6F8
 * Callers:
 *     MiCreatePrototypePtes @ 0x14021BA80 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x140289030 (MiReferenceActiveSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x140366034 (MiUpdateLastSubsectionSize.c)
 *     MiExtendSection @ 0x1407069E4 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x1407481F8 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x14065A4C8 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14065B8A4 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  char v4; // bp
  void *v5; // rdi
  __int64 result; // rax
  unsigned int v7; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *(void **)(qword_140C673C8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges((__int64)v5, 0, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit((unsigned __int64)v5, a2, 0LL) )
    {
      v7 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges((__int64)v5, 0, v4, a2);
      return v7;
    }
    if ( !(unsigned int)MiChargeResident(v5, a2, 0LL) )
    {
      if ( v3 )
        MiReturnCommit((__int64)v5, a2);
      v7 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
