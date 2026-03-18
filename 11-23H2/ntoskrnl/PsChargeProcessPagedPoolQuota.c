/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1407B0A30
 * Callers:
 *     MiInsertVadCharges @ 0x1406FA8B0 (MiInsertVadCharges.c)
 *     AlpcpChargePagedPoolQuota @ 0x14071CB4C (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1407B069C (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1407B09C4 (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x14022EBF0 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 1, a2);
}
