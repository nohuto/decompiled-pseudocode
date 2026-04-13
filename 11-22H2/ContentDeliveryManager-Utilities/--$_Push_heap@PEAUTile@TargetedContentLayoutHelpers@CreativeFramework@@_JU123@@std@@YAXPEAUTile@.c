/*
 * XREFs of ??$_Push_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800CEA10
 * Callers:
 *     ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800CD05C (--$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTil.c)
 * Callees:
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006E884 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800CF47C (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 */

char __fastcall std::_Push_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r10
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rbx
  char result; // al

  v6 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v8 = (v6 - 1) / 2;
      v9 = a1 + 56 * v8;
      if ( !(unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v9, a4) )
        break;
      v10 = a1 + 56 * v6;
      std::wstring::operator=((_QWORD *)v10, (_QWORD *)v9);
      v6 = v8;
      *(_QWORD *)(v10 + 32) = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v10 + 40) = *(_QWORD *)(v9 + 40);
      *(_BYTE *)(v10 + 48) = *(_BYTE *)(v9 + 48);
    }
    while ( a3 < v8 );
  }
  v11 = a1 + 56 * v6;
  std::wstring::operator=((_QWORD *)v11, (_QWORD *)a4);
  *(_QWORD *)(v11 + 32) = *(_QWORD *)(a4 + 32);
  *(_QWORD *)(v11 + 40) = *(_QWORD *)(a4 + 40);
  result = *(_BYTE *)(a4 + 48);
  *(_BYTE *)(v11 + 48) = result;
  return result;
}
