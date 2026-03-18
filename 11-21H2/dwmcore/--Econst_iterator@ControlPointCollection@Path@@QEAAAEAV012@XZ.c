/*
 * XREFs of ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x1800CA7D4
 * Callers:
 *     ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x1800CA6C0 (-IsEmpty@CPathSegmentsShape@@UEBA_NXZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802A038C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1800CA834 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1800CAA30 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

_QWORD *__fastcall Path::ControlPointCollection::const_iterator::operator++(_QWORD *a1)
{
  int v1; // ebx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = ++*((_DWORD *)a1 + 4);
  if ( v1 == *(_DWORD *)Path::Segment::GetControlPoints(*a1, v4) )
  {
    *((_DWORD *)a1 + 4) = 0;
    do
      Path::SegmentCollection::const_iterator::operator++(a1);
    while ( *a1 != a1[1] && !*(_QWORD *)Path::Segment::GetControlPoints(*a1, v4) );
  }
  return a1;
}
