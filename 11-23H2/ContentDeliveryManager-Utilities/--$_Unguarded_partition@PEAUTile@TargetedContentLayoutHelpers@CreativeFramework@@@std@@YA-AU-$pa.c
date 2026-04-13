/*
 * XREFs of ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800CEEC0
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800CEB64 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ??$_Median@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800CE220 (--$_Median@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$swap@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXAEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800CF170 (--$swap@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXAEAUTile@TargetedContentL.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800CF42C (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 */

unsigned __int64 *__fastcall std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  bool v14; // zf
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 *result; // rax

  v6 = (__int64)((unsigned __int128)((__int64)(a3 - a2) * (__int128)0x4924924924924925LL) >> 64) >> 5;
  v7 = a2 + 56 * ((v6 >> 63) + v6);
  std::_Median<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(a2, v7, a3 - 56);
  v8 = v7 + 56;
  if ( a2 < v7 )
  {
    do
    {
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7 - 56, v7) )
        break;
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7, v9) )
        break;
      v7 = v10;
    }
    while ( a2 < v10 );
  }
  while ( v8 < a3
       && !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v7)
       && !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7, v8) )
    v8 += 56LL;
  v11 = v8;
  v12 = v7;
  while ( 1 )
  {
    while ( v11 < a3 )
    {
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7, v11) )
        goto LABEL_15;
      if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v11, v7) )
        break;
      v13 = v8;
      v8 += 56LL;
      std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v13);
LABEL_15:
      v11 += 56LL;
    }
    v14 = v12 == a2;
    if ( v12 > a2 )
    {
      v15 = v12 - 56;
      do
      {
        if ( !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v15, v7) )
        {
          if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v7, v15) )
            break;
          v7 -= 56LL;
          std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v7);
        }
        v12 -= 56LL;
        v15 -= 56LL;
      }
      while ( a2 < v12 );
      v14 = v12 == a2;
    }
    if ( v14 )
      break;
    v12 -= 56LL;
    if ( v11 == a3 )
    {
      v7 -= 56LL;
      if ( v12 != v7 )
        std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v12);
      v8 -= 56LL;
      v16 = v7;
    }
    else
    {
      v16 = v11;
      v11 += 56LL;
    }
LABEL_33:
    std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v16);
  }
  if ( v11 != a3 )
  {
    if ( v8 != v11 )
      std::swap<CreativeFramework::TargetedContentLayoutHelpers::Tile>(v7);
    v8 += 56LL;
    v11 += 56LL;
    v16 = v7;
    v7 += 56LL;
    goto LABEL_33;
  }
  result = a1;
  *a1 = v7;
  a1[1] = v8;
  return result;
}
