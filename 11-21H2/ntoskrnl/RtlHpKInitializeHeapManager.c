/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x1403C445C
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1403C3FA0 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpHeapManagerStart @ 0x14036EDD4 (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x14036FB38 (RtlHpHeapManagerInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C44EC (RtlHpGlobalsInitialize.c)
 */

__int64 RtlHpKInitializeHeapManager()
{
  union _RTL_RUN_ONCE v1; // [rsp+40h] [rbp+8h] BYREF

  RtlHpGlobalsInitialize();
  v1.Value = 0x500010200LL;
  RtlHpHeapManagerInitialize(ExPoolState, &v1);
  dword_140C5EA20 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_140C5EA20 = 64;
  return RtlHpHeapManagerStart(ExPoolState, 1, 1LL, (union _RTL_RUN_ONCE)0xFFFF800000000000uLL, 0x800000000000uLL, 2);
}
