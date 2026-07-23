/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14032A410
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     MmCreatePeb @ 0x1407A1A8C (MmCreatePeb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 636);
}
