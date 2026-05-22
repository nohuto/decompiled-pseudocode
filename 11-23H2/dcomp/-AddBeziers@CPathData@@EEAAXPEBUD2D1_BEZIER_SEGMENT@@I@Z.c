/*
 * XREFs of ?AddBeziers@CPathData@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x180077C40
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z @ 0x180077CC8 (-AppendSegment@CPathData@@AEAAXPEAUSegment@Path@@@Z.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x180077EE4 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

void __fastcall CPathData::AddBeziers(CPathData *this, const struct D2D1_BEZIER_SEGMENT *a2, unsigned int a3)
{
  CPathData *v3; // rsi
  __int64 v4; // rdi
  unsigned int Size; // eax
  FLOAT *p_y; // rbx
  int v8; // xmm1_4
  char v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  v3 = this;
  v4 = a3;
  LOBYTE(this) = 5;
  Size = Path::Segment::GetSize(this);
  memset_0(v9, 0, Size);
  v9[0] = 5;
  if ( (_DWORD)v4 )
  {
    p_y = &a2->point3.y;
    do
    {
      v8 = *(_DWORD *)p_y;
      v10 = *(_OWORD *)(p_y - 5);
      v11 = *((_DWORD *)p_y - 1);
      v12 = v8;
      CPathData::AppendSegment(v3, (struct Path::Segment *)v9);
      p_y += 6;
      --v4;
    }
    while ( v4 );
  }
}
