/*
 * XREFs of ?SetTempAppVisuals@AppResizeOperation@@WII@EAAXPEAUITemporaryAppVisualArray@@@Z @ 0x18020AD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppResizeOperation::SetTempAppVisuals(__int64 a1, struct ITemporaryAppVisualArray *a2)
{
  CAppLayoutOperation::SetTempAppVisuals((CAppLayoutOperation *)(a1 - 136), a2);
}
