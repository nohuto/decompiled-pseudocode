/*
 * XREFs of PsChargeProcessQuota @ 0x140292858
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9F08 (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x140706060 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspChargeQuota @ 0x14022ED00 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessQuota(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].Affinity.StaticBitmap[27], (__int64)a1, 3, a3);
}
