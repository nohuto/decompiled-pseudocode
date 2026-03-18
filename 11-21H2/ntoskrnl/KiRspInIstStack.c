/*
 * XREFs of KiRspInIstStack @ 0x14024EF40
 * Callers:
 *     KeInvalidAccessAllowed @ 0x140230BA0 (KeInvalidAccessAllowed.c)
 *     KiMcheckFastForward @ 0x14024EDB0 (KiMcheckFastForward.c)
 *     MiSystemFault @ 0x140279590 (MiSystemFault.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402AB9C0 (KeQueryCurrentStackInformationEx.c)
 *     MiDispatchFault @ 0x14031E200 (MiDispatchFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14031E900 (MiComputeMaximumFaultCluster.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiRspInIstStack(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  _BOOL8 result; // rax

  v2 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 8 * a1 + 28);
  v3 = 24576LL;
  if ( KiKvaShadow )
    v3 = 464LL;
  result = 1;
  if ( a2 > v2 || a2 < v2 - v3 )
  {
    if ( !KiKvaShadow )
      return 0;
    v4 = *(_QWORD *)(v2 + 8);
    if ( a2 > v4 || a2 < v4 - 24544 )
      return 0;
  }
  return result;
}
