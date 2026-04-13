/*
 * XREFs of ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800CD00C
 * Callers:
 *     ??$_Make_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0PEA_J0@Z @ 0x1800CE100 (--$_Make_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@.c)
 *     ??$_Pop_heap_0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800CE90C (--$_Pop_heap_0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@T.c)
 * Callees:
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006E834 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800CF42C (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 */

__int64 __fastcall std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r10
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdi

  v6 = 2 * a2 + 2;
  v7 = a2;
  while ( v6 < a3 )
  {
    v10 = CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a1 + 56 * v6, a1 + 56 * v6 - 56);
    v13 = v11 - 1;
    if ( !v10 )
      v13 = v11;
    v14 = a1 + 56 * v13;
    v15 = a1 + 56 * v12;
    std::wstring::operator=((_QWORD *)v15, (_QWORD *)v14);
    v6 = 2 * v13 + 2;
    *(_QWORD *)(v15 + 32) = *(_QWORD *)(v14 + 32);
    v7 = v13;
    *(_QWORD *)(v15 + 40) = *(_QWORD *)(v14 + 40);
    *(_BYTE *)(v15 + 48) = *(_BYTE *)(v14 + 48);
  }
  if ( v6 == a3 )
  {
    v16 = a1 + 56 * a3;
    v17 = a1 + 56 * v7;
    std::wstring::operator=((_QWORD *)v17, (_QWORD *)(v16 - 56));
    v7 = a3 - 1;
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(v16 - 24);
    *(_QWORD *)(v17 + 40) = *(_QWORD *)(v16 - 16);
    *(_BYTE *)(v17 + 48) = *(_BYTE *)(v16 - 8);
  }
  return std::_Push_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
           a1,
           v7,
           a2,
           a4);
}
