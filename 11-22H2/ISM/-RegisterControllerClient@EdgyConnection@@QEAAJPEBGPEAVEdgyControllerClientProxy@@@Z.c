/*
 * XREFs of ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801D58D8
 * Callers:
 *     ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18017A230 (-RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x180178F50 (-GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetGestureDistance@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x180178F80 (-GetGestureDistance@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x180178FC0 (-GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x180179000 (-GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?GetVertex0@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x180179040 (-GetVertex0@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?GetVertex1@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x180179070 (-GetVertex1@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801D6E74 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801D77BC (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z @ 0x1801D78AC (-OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x1801D78F4 (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x1801D796C (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801D79D4 (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801D7A60 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall EdgyConnection::RegisterControllerClient(
        EdgyConnection *this,
        const unsigned __int16 *a2,
        struct EdgyControllerClientProxy *a3)
{
  Edges *v3; // rbp
  int v5; // eax
  unsigned int v6; // edi
  const struct D2D_VECTOR_2F *GestureDirection; // rax
  unsigned int Routing; // eax
  unsigned int RunState; // eax
  const struct D2D_VECTOR_2F *Vertex0; // rax
  const struct D2D_VECTOR_2F *Vertex1; // rax
  unsigned int GestureDistance; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (EdgyConnection *)((char *)this + 72);
  v5 = Edges::AddOrUpdate((EdgyConnection *)((char *)this + 72), a2, a3);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xC1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v5,
      v14);
  GestureDirection = BamoEdgyControllerClientProxy::GetGestureDirection((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerGestureDirectionChanged(v3, a3, GestureDirection);
  Routing = BamoEdgyControllerClientProxy::GetRouting((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerRoutingChanged(v3, a3, Routing);
  RunState = BamoEdgyControllerClientProxy::GetRunState((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerRunStateChanged(v3, a3, RunState);
  Vertex0 = BamoEdgyControllerClientProxy::GetVertex0((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerVertex0Changed(v3, a3, Vertex0);
  Vertex1 = BamoEdgyControllerClientProxy::GetVertex1((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerVertex1Changed(v3, a3, Vertex1);
  GestureDistance = BamoEdgyControllerClientProxy::GetGestureDistance((struct EdgyControllerClientProxy *)((char *)a3 + 8));
  Edges::OnControllerGestureDistanceChanged(v3, a3, GestureDistance);
  return v6;
}
