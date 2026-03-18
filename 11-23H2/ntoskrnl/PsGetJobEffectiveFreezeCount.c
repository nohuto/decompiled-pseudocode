/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x1405A3CD8
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140716058 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1407398D0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 1048);
}
