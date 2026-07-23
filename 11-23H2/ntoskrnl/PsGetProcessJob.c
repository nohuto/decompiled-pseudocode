/*
 * XREFs of PsGetProcessJob @ 0x1403610D0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140716258 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140739AC0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 1296);
}
