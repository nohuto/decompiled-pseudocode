/*
 * XREFs of BiZwCreateKey @ 0x140374004
 * Callers:
 *     BiCreateKey @ 0x1408040D4 (BiCreateKey.c)
 * Callees:
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
 */

NTSTATUS __fastcall BiZwCreateKey(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        __int64 a4,
        int a5,
        ULONG CreateOptions,
        PULONG Disposition)
{
  return ZwCreateKey(a1, a2, a3, 0, 0LL, CreateOptions, Disposition);
}
