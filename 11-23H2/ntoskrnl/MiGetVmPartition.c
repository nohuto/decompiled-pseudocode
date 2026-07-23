/*
 * XREFs of MiGetVmPartition @ 0x140629940
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140A3D274 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3DA38 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x140A48AA8 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
