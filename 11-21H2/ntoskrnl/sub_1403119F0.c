/*
 * XREFs of sub_1403119F0 @ 0x1403119F0
 * Callers:
 *     sub_1402091B0 @ 0x1402091B0 (sub_1402091B0.c)
 *     sub_140218310 @ 0x140218310 (sub_140218310.c)
 *     CcIsThereDirtyLoggedPages @ 0x14023A5E0 (CcIsThereDirtyLoggedPages.c)
 *     sub_14023AFD8 @ 0x14023AFD8 (sub_14023AFD8.c)
 *     CcSetLogHandleForFileEx @ 0x140241350 (CcSetLogHandleForFileEx.c)
 *     sub_1402492E0 @ 0x1402492E0 (sub_1402492E0.c)
 *     sub_140252E20 @ 0x140252E20 (sub_140252E20.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140257B30 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     sub_14027D408 @ 0x14027D408 (sub_14027D408.c)
 *     sub_14027D8DC @ 0x14027D8DC (sub_14027D8DC.c)
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     sub_140286210 @ 0x140286210 (sub_140286210.c)
 *     sub_1402864A0 @ 0x1402864A0 (sub_1402864A0.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 *     sub_1403335A0 @ 0x1403335A0 (sub_1403335A0.c)
 *     sub_140338BF0 @ 0x140338BF0 (sub_140338BF0.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14036B680 (ExIsResourceAcquiredSharedLite.c)
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 *     sub_140376BFC @ 0x140376BFC (sub_140376BFC.c)
 *     sub_140376DF0 @ 0x140376DF0 (sub_140376DF0.c)
 *     CcSetLoggedDataThreshold @ 0x1403891F0 (CcSetLoggedDataThreshold.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14039C100 (ExDisownFastResource.c)
 *     sub_14039C944 @ 0x14039C944 (sub_14039C944.c)
 *     sub_14039CBAC @ 0x14039CBAC (sub_14039CBAC.c)
 *     sub_14039D010 @ 0x14039D010 (sub_14039D010.c)
 *     sub_14039D3E4 @ 0x14039D3E4 (sub_14039D3E4.c)
 *     sub_14039ED00 @ 0x14039ED00 (sub_14039ED00.c)
 *     sub_140456CC6 @ 0x140456CC6 (sub_140456CC6.c)
 *     sub_14052D9E0 @ 0x14052D9E0 (sub_14052D9E0.c)
 *     sub_14052DC38 @ 0x14052DC38 (sub_14052DC38.c)
 *     sub_14052DF88 @ 0x14052DF88 (sub_14052DF88.c)
 *     sub_14052E568 @ 0x14052E568 (sub_14052E568.c)
 *     sub_14052E768 @ 0x14052E768 (sub_14052E768.c)
 *     sub_14052F378 @ 0x14052F378 (sub_14052F378.c)
 *     sub_14052F618 @ 0x14052F618 (sub_14052F618.c)
 *     sub_1405311A8 @ 0x1405311A8 (sub_1405311A8.c)
 *     sub_140531A6C @ 0x140531A6C (sub_140531A6C.c)
 *     sub_140532A28 @ 0x140532A28 (sub_140532A28.c)
 *     sub_1405336FC @ 0x1405336FC (sub_1405336FC.c)
 *     CcIsThereDirtyDataEx @ 0x14053A990 (CcIsThereDirtyDataEx.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x14056E3D0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x14056E460 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     sub_140611F10 @ 0x140611F10 (sub_140611F10.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14063CB30 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     sub_14063CF10 @ 0x14063CF10 (sub_14063CF10.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 */

__int64 __fastcall sub_1403119F0(__int64 a1, volatile __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // rdx
  __int64 result; // rax
  int v7; // eax
  bool v8; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v5 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v7 = *(_DWORD *)(v5 + 24);
      v8 = v7 == -1;
      result = (unsigned int)(v7 + 1);
      *(_DWORD *)(v5 + 24) = result;
      if ( v8 )
        result = sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    return sub_14045A10C(a1, a2);
  if ( _InterlockedExchange64(a2, a1) )
    return sub_140311C70(a1);
  return result;
}
