/*
 * XREFs of LpcRequestWaitReplyPortEx @ 0x140978200
 * Callers:
 *     <none>
 * Callees:
 *     LpcpRequestWaitReplyPort @ 0x14097854C (LpcpRequestWaitReplyPort.c)
 */

__int64 __fastcall LpcRequestWaitReplyPortEx(__int64 a1)
{
  return LpcpRequestWaitReplyPort(a1);
}
