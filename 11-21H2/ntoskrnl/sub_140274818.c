/*
 * XREFs of sub_140274818 @ 0x140274818
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_14031B810 @ 0x14031B810 (sub_14031B810.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 */

LOGICAL __fastcall sub_140274818(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r10
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1;
  if ( v1 && (unsigned int)sub_140274C80(*(_QWORD *)(a1 + 104), v1) )
    return 1;
  if ( (unsigned int)sub_1403531F0(*(_QWORD *)(v2 + 104)) )
    return 1;
  result = KeShouldYieldProcessor();
  if ( result )
    return 1;
  return result;
}
