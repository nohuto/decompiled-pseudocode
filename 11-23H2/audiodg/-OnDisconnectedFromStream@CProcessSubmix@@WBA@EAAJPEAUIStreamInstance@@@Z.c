/*
 * XREFs of ?OnDisconnectedFromStream@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z @ 0x140030A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::OnDisconnectedFromStream(__int64 a1, struct IStreamInstance *a2)
{
  return CProcessSubmix::OnDisconnectedFromStream((CProcessSubmix *)(a1 - 16), a2);
}
