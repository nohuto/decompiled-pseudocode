/*
 * XREFs of ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x1801B2F04
 * Callers:
 *     ?InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@PEAVCompositionEasingFunction@234@@Z @ 0x1801785A0 (-InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1801B2CE8 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x1801B3594 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 */

__int64 __fastcall CPathData::GetControlPointCount(CPathData *this)
{
  unsigned int v1; // esi
  char *v3; // rbx
  unsigned int v4; // ebp
  char *v5; // rdi
  gsl::details *ControlPoints; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-38h] BYREF
  char *v11; // [rsp+50h] [rbp-28h] BYREF
  char *v12; // [rsp+58h] [rbp-20h]
  unsigned int v13; // [rsp+60h] [rbp-18h]

  v1 = *((_DWORD *)this + 14);
  if ( !v1 )
  {
    v3 = (char *)*((_QWORD *)this + 2);
    v4 = 0;
    v5 = (char *)*((_QWORD *)this + 3);
    v11 = v3;
    v12 = v5;
    while ( v3 != v5 || v4 )
    {
      ControlPoints = (gsl::details *)Path::Segment::GetControlPoints(v3, v8);
      if ( (unsigned __int64)v4 >= *(_QWORD *)ControlPoints )
      {
        gsl::details::terminate(ControlPoints);
        JUMPOUT(0x1801B2FC9LL);
      }
      ++v1;
      if ( ++v4 == *(_DWORD *)Path::Segment::GetControlPoints(v3, v9) )
      {
        v13 = 0;
        do
        {
          Path::SegmentCollection::const_iterator::operator++(&v11);
          v3 = v11;
        }
        while ( v11 != v12 && !*(_QWORD *)Path::Segment::GetControlPoints(v11, v10) );
        v4 = v13;
      }
    }
    *((_DWORD *)this + 14) = v1;
  }
  return v1;
}
