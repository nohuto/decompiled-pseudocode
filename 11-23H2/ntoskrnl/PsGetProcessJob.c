/*
 * XREFs of PsGetProcessJob @ 0x140360F30
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140716058 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1407398D0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessJob(__int64 a1)
{
  return *(_QWORD *)(a1 + 1296);
}
