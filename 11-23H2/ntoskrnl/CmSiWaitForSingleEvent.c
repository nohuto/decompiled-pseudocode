/*
 * XREFs of CmSiWaitForSingleEvent @ 0x140208C58
 * Callers:
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall CmSiWaitForSingleEvent(__int64 a1)
{
  return KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
}
