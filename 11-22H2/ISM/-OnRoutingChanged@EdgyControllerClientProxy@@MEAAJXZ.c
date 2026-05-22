/*
 * XREFs of ?OnRoutingChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x180179380
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x180178FC0 (-GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnRoutingChanged(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  unsigned int Routing; // eax

  v1 = *((_QWORD *)this + 15);
  Routing = BamoEdgyControllerClientProxy::GetRouting((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerRoutingChanged(v1 + 72, this, Routing);
}
