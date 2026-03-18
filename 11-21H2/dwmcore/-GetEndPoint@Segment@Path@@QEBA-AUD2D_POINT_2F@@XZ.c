/*
 * XREFs of ?GetEndPoint@Segment@Path@@QEBA?AUD2D_POINT_2F@@XZ @ 0x180115E5E
 * Callers:
 *     ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x1801160CA (-UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z.c)
 * Callees:
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1800CA834 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

struct D2D_POINT_2F __fastcall Path::Segment::GetEndPoint(Path::Segment *this, _QWORD *a2)
{
  struct D2D_POINT_2F result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  Path::Segment::GetControlPoints(this, v4);
  if ( !v4[0] )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  result = (struct D2D_POINT_2F)a2;
  *a2 = *(_QWORD *)(v4[1] + 8 * (v4[0] - 1LL));
  return result;
}
