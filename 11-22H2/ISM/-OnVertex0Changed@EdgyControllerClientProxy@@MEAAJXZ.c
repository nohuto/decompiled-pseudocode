/*
 * XREFs of ?OnVertex0Changed@EdgyControllerClientProxy@@MEAAJXZ @ 0x180179400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVertex0@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x180179040 (-GetVertex0@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnVertex0Changed(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  const struct D2D_VECTOR_2F *Vertex0; // rax

  v1 = *((_QWORD *)this + 15);
  Vertex0 = BamoEdgyControllerClientProxy::GetVertex0((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerVertex0Changed((Edges *)(v1 + 72), this, Vertex0);
}
