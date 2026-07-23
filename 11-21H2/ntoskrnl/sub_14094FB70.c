/*
 * XREFs of sub_14094FB70 @ 0x14094FB70
 * Callers:
 *     sub_1407491FC @ 0x1407491FC (sub_1407491FC.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall sub_14094FB70(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&stru_140C449C0, Executive, 0, 0, 0LL);
  return result;
}
