/*
 * XREFs of ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801AB44C
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AB22C (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AB324 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801AB41C (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801ABB54 (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z @ 0x1801ABC44 (-OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x1801ABC8C (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x1801ABD04 (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801ABD6C (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801ABDF8 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ABE84 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AC004 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801ABB24 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

__int64 __fastcall Edges::FindEdge(Edges *this, const unsigned __int16 *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)this;
  v5 = 0;
  if ( (int)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 7) <= 0 )
    return 0xFFFFFFFFLL;
  while ( !Edge::IsEdge((Edge *)(v4 + ((__int64)(int)v5 << 7)), a2) )
  {
    v4 = *(_QWORD *)this;
    if ( (int)++v5 >= (int)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 7) )
      return 0xFFFFFFFFLL;
  }
  return v5;
}
