/*
 * XREFs of ?AddLines@CPathData@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x180077BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x180077CC8 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x180077EE4 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

void __fastcall CPathData::AddLines(CPathData *this, const struct D2D_POINT_2F *a2, unsigned int a3)
{
  CPathData *v3; // rsi
  __int64 v4; // rdi
  unsigned int Size; // eax
  FLOAT y; // xmm1_4
  char v8[8]; // [rsp+20h] [rbp-18h] BYREF
  FLOAT x; // [rsp+28h] [rbp-10h]
  FLOAT v10; // [rsp+2Ch] [rbp-Ch]

  v3 = this;
  v4 = a3;
  LOBYTE(this) = 2;
  Size = Path::Segment::GetSize(this);
  memset_0(v8, 0, Size);
  v8[0] = 2;
  if ( (_DWORD)v4 )
  {
    do
    {
      y = a2->y;
      x = a2->x;
      v10 = y;
      CPathData::AppendSegment(v3, (struct Path::Segment *)v8);
      ++a2;
      --v4;
    }
    while ( v4 );
  }
}
