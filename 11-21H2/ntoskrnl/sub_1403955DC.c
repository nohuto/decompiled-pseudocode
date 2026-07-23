/*
 * XREFs of sub_1403955DC @ 0x1403955DC
 * Callers:
 *     sub_1408036C8 @ 0x1408036C8 (sub_1408036C8.c)
 * Callees:
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 */

NTSTATUS __fastcall sub_1403955DC(
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
