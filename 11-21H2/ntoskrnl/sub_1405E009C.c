/*
 * XREFs of sub_1405E009C @ 0x1405E009C
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall sub_1405E009C(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
