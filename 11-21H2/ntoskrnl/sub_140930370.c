/*
 * XREFs of sub_140930370 @ 0x140930370
 * Callers:
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 *     sub_140651D6C @ 0x140651D6C (sub_140651D6C.c)
 * Callees:
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 */

NTSTATUS __fastcall sub_140930370(UUID *a1)
{
  return ExUuidCreate(a1);
}
