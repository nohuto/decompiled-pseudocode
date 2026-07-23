/*
 * XREFs of sub_1403DDD24 @ 0x1403DDD24
 * Callers:
 *     sub_1402D1304 @ 0x1402D1304 (sub_1402D1304.c)
 *     sub_140602644 @ 0x140602644 (sub_140602644.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B2F500 @ 0x140B2F500 (sub_140B2F500.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

NTSTATUS __fastcall sub_1403DDD24(const GUID *a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*a4 )
    return EtwRegister(a1, (PETWENABLECALLBACK)sub_1403D3500, a3, a4);
  return result;
}
