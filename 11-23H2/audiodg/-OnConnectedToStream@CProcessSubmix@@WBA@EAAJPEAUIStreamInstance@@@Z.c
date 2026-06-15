/*
 * XREFs of ?OnConnectedToStream@CProcessSubmix@@WBA@EAAJPEAUIStreamInstance@@@Z @ 0x140030A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::OnConnectedToStream(__int64 a1, struct IStreamInstance *a2)
{
  return CProcessSubmix::OnConnectedToStream((CProcessSubmix *)(a1 - 16), a2);
}
