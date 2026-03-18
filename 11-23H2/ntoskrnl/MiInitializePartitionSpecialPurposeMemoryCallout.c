/*
 * XREFs of MiInitializePartitionSpecialPurposeMemoryCallout @ 0x1406606F0
 * Callers:
 *     <none>
 * Callees:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4736C (MiInitializePartitionSpecialPurposeMemory.c)
 */

void __fastcall MiInitializePartitionSpecialPurposeMemoryCallout(_DWORD *Parameter)
{
  Parameter[4] = MiInitializePartitionSpecialPurposeMemory(*(_QWORD *)Parameter, *((_QWORD *)Parameter + 1));
}
