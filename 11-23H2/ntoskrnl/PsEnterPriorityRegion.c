/*
 * XREFs of PsEnterPriorityRegion @ 0x14033C3E0
 * Callers:
 *     <none>
 * Callees:
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 */

void PsEnterPriorityRegion()
{
  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
}
