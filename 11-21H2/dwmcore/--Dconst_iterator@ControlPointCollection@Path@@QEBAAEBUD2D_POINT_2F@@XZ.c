/*
 * XREFs of ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x1800CA798
 * Callers:
 *     ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x1800CA6C0 (-IsEmpty@CPathSegmentsShape@@UEBA_NXZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802A038C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1800CA834 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Path::ControlPointCollection::const_iterator::operator*(__int64 a1)
{
  unsigned __int64 *ControlPoints; // rax
  unsigned __int64 v3; // rcx
  char v5[24]; // [rsp+20h] [rbp-18h] BYREF

  ControlPoints = (unsigned __int64 *)Path::Segment::GetControlPoints(*(_QWORD *)a1, v5);
  v3 = *(unsigned int *)(a1 + 16);
  if ( v3 >= *ControlPoints )
  {
    gsl::details::terminate((gsl::details *)v3);
    JUMPOUT(0x1800CA7CALL);
  }
  return ControlPoints[1] + 8 * v3;
}
