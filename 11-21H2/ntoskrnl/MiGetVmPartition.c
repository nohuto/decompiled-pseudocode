/*
 * XREFs of MiGetVmPartition @ 0x14058DE04
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140979A34 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x14098056C (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
