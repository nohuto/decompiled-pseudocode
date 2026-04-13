/*
 * XREFs of ??$_Median@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800CE270
 * Callers:
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800CEF10 (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 * Callees:
 *     ??$_Med3@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800CE204 (--$_Med3@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAUTile@TargetedCont.c)
 */

__int64 __fastcall std::_Median<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbp

  v5 = 0x6DB6DB6DB6DB6DB7LL * ((a3 - a1) >> 3);
  if ( v5 <= 40 )
  {
    v9 = a1;
    v10 = a3;
  }
  else
  {
    v6 = (v5 + 1) / 8;
    v7 = 56 * v6;
    v8 = 112 * v6;
    v9 = 56 * v6 + a1;
    std::_Med3<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(a1, v9, 112 * v6 + a1);
    std::_Med3<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(a2 - v7, a2, v7 + a2);
    v10 = a3 - v7;
    std::_Med3<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(a3 - v8, a3 - v7, a3);
  }
  return std::_Med3<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(v9, a2, v10);
}
