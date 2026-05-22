/*
 * XREFs of ?OnVertex1Changed@EdgyControllerClientProxy@@MEAAJXZ @ 0x18016B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVertex1@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x18016ADF0 (-GetVertex1@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnVertex1Changed(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  const struct D2D_VECTOR_2F *Vertex1; // rax

  v1 = *((_QWORD *)this + 15);
  Vertex1 = BamoEdgyControllerClientProxy::GetVertex1((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerVertex1Changed((Edges *)(v1 + 72), this, Vertex1);
}
