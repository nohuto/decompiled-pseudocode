/*
 * XREFs of ?evaluate@_tip_LoadCustomVDWallpaperWithGesturePerfTest@@QEAAXXZ @ 0x180612C34
 * Callers:
 *     ?evaluate@?$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@EEAAXXZ @ 0x180612C20 (-evaluate@-$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@EEAAX.c)
 * Callees:
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_LoadCustomVDWallpaperWithGesturePerfTest::evaluate(
        _tip_LoadCustomVDWallpaperWithGesturePerfTest *this,
        const char *a2)
{
  __int64 v2; // r9
  __int16 v3; // ax
  int v4; // ecx
  int v5; // ecx
  const char *v6; // rax
  __int64 v7; // r9
  char v8; // r10
  __int16 v9; // cx
  const char *v10; // rax
  __int64 v11; // r9
  char v12; // r10
  char v13; // r10

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL) != *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    if ( *(_BYTE *)(v2 + 72) )
      return;
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)v2 & 0x200) != 0 )
  {
    v4 = *((_DWORD *)this + 2);
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
      {
        v10 = tip::details::reason_string((tip::details *)"reason::fromDisk_loaded", a2);
        if ( *(_BYTE *)(v11 + 72) == v12 )
        {
          *(_QWORD *)(v11 + 80) = v10;
          *(_BYTE *)(v11 + 72) = 1;
          *(_WORD *)(v11 + 74) = 3;
        }
        return;
      }
      if ( v5 != 1 )
        return;
      v6 = tip::details::reason_string((tip::details *)"reason::sourceUnknown", a2);
      if ( *(_BYTE *)(v7 + 72) != v8 )
        return;
      *(_BYTE *)(v7 + 72) = 4;
      v9 = 5;
    }
    else
    {
      v6 = tip::details::reason_string((tip::details *)"reason::thumbnailCache_loaded", a2);
      if ( *(_BYTE *)(v7 + 72) != v13 )
        return;
      v9 = 1;
      *(_BYTE *)(v7 + 72) = 1;
    }
    *(_QWORD *)(v7 + 80) = v6;
    *(_WORD *)(v7 + 74) = v9;
    return;
  }
  if ( !*(_BYTE *)(v2 + 72) )
  {
    *(_BYTE *)(v2 + 72) = 3;
    v3 = 16385;
LABEL_4:
    *(_WORD *)(v2 + 74) = v3;
    *(_QWORD *)(v2 + 80) = 0LL;
  }
}
