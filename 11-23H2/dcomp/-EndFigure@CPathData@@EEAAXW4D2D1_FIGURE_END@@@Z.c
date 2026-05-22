/*
 * XREFs of ?EndFigure@CPathData@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180077AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x180077B84 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x180077CC8 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 */

void __fastcall CPathData::EndFigure(CPathData *this, __int64 a2)
{
  int v2; // ebx
  char v4; // [rsp+40h] [rbp+18h] BYREF
  bool v5; // [rsp+42h] [rbp+1Ah]

  v2 = a2;
  LOBYTE(a2) = 1;
  Path::Segment::Segment(&v4, a2);
  v5 = v2 == 1;
  CPathData::AppendSegment(this, (struct Path::Segment *)&v4);
}
