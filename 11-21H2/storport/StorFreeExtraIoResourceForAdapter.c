/*
 * XREFs of StorFreeExtraIoResourceForAdapter @ 0x1C00590AC
 * Callers:
 *     RaidAdapterReclaimIoResourceTimerDpcRoutine @ 0x1C0035FB0 (RaidAdapterReclaimIoResourceTimerDpcRoutine.c)
 * Callees:
 *     StorFreeExtraIoResourceForGateway @ 0x1C0059138 (StorFreeExtraIoResourceForGateway.c)
 */

__int64 __fastcall StorFreeExtraIoResourceForAdapter(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 548) / *(_DWORD *)(a1 + 840);
  do
  {
    v4 = 320LL * v2;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(*(_QWORD *)(a1 + 832) + v4 + 136),
                             0,
                             0);
    if ( (unsigned int)result > v3 )
      result = StorFreeExtraIoResourceForGateway(v4 + *(_QWORD *)(a1 + 832), v3);
    ++v2;
  }
  while ( v2 < *(_DWORD *)(a1 + 840) );
  return result;
}
