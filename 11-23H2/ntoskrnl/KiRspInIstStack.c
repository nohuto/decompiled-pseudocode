/*
 * XREFs of KiRspInIstStack @ 0x14035AD30
 * Callers:
 *     KeQueryCurrentStackInformationEx @ 0x14022EAC0 (KeQueryCurrentStackInformationEx.c)
 *     MiDispatchFault @ 0x140238000 (MiDispatchFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402386C0 (MiComputeMaximumFaultCluster.c)
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     KeInvalidAccessAllowed @ 0x140341F80 (KeInvalidAccessAllowed.c)
 *     KiMcheckFastForward @ 0x14035AB90 (KiMcheckFastForward.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRspInIstStack(unsigned int a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx

  v2 = 0;
  v3 = 24576LL;
  v4 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 8 * a1 + 28);
  if ( KiKvaShadow )
    v3 = 464LL;
  if ( a2 <= v4 && a2 >= v4 - v3 )
    return 1LL;
  if ( !KiKvaShadow )
    return 0LL;
  v5 = *(_QWORD *)(v4 + 8);
  if ( a2 > v5 )
    return 0LL;
  LOBYTE(v2) = a2 >= v5 - 24544;
  return v2;
}
