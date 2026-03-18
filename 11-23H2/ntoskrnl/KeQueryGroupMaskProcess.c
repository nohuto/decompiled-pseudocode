/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14032A180
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     MmCreatePeb @ 0x1407A189C (MmCreatePeb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 636);
}
