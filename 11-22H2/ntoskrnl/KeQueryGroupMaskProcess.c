/*
 * XREFs of KeQueryGroupMaskProcess @ 0x140329FA0
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     MmCreatePeb @ 0x1407A1DAC (MmCreatePeb.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 636);
}
