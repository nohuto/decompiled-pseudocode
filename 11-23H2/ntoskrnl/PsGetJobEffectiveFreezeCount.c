/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x1405A41C8
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140716258 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140739AC0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 1048);
}
