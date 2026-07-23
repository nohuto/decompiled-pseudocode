/*
 * XREFs of PsChargeProcessPagedPoolQuota @ 0x1407B0C20
 * Callers:
 *     MiInsertVadCharges @ 0x1406FAAC0 (MiInsertVadCharges.c)
 *     AlpcpChargePagedPoolQuota @ 0x14071CD4C (AlpcpChargePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x1407B088C (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1407B0BB4 (ExpAllocateTablePagedPoolNoZero.c)
 * Callees:
 *     PspChargeQuota @ 0x14022ED00 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessPagedPoolQuota(struct _KPROCESS *a1, unsigned __int64 a2)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 1, a2);
}
