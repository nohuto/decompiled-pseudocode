/*
 * XREFs of ?OnRoutingChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x18016B100
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x18016AD40 (-GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnRoutingChanged(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  unsigned int Routing; // eax

  v1 = *((_QWORD *)this + 15);
  Routing = BamoEdgyControllerClientProxy::GetRouting((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerRoutingChanged(v1 + 72, this, Routing);
}
