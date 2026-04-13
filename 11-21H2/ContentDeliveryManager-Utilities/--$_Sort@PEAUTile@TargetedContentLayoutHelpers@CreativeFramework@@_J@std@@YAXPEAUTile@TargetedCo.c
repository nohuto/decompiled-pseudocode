/*
 * XREFs of ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800E64D4
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800E64D4 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800E7604 (-SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV-$vector@V-.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800E4840 (--$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTil.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800E64D4 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800E69F4 (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 *     ??4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800E71A8 (--4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800E721C (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 */

void __fastcall std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 i; // rcx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 j; // rsi
  __int64 v10; // r15
  __int128 v11; // xmm0
  __int64 k; // r14
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r15
  __int128 v17; // xmm0
  __int64 v18; // rsi
  __int128 v19; // xmm0
  __int64 m; // r14
  __int64 v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+28h] [rbp-48h]
  void *v23[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+40h] [rbp-30h]
  unsigned __int64 v25; // [rsp+48h] [rbp-28h]
  __int128 v26; // [rsp+50h] [rbp-20h]
  char v27; // [rsp+60h] [rbp-10h]

  v3 = a1;
  v5 = a2;
  for ( i = 0x6DB6DB6DB6DB6DB7LL * ((a2 - a1) >> 3); ; i = 0x6DB6DB6DB6DB6DB7LL * ((v5 - v3) >> 3) )
  {
    if ( i <= 32 )
    {
      if ( i > 1 && v3 != v5 )
      {
        for ( j = v3 + 56; j != v5; j += 56LL )
        {
          v25 = 7LL;
          v24 = 0LL;
          v10 = j;
          LOWORD(v23[0]) = 0;
          std::wstring::_Assign_rv(v23, (_QWORD *)j);
          v11 = *(_OWORD *)(j + 32);
          v27 = *(_BYTE *)(j + 48);
          v26 = v11;
          if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v23, v3) )
          {
            for ( k = j; k != v3; CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v13, k) )
            {
              v13 = k;
              k -= 56LL;
            }
            v10 = v3;
          }
          else
          {
            for ( m = j - 56;
                  (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v23, m);
                  m -= 56LL )
            {
              CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v10, m);
              v10 = m;
            }
          }
          CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v10, v23);
          if ( v25 >= 8 )
            operator delete(v23[0]);
        }
      }
      return;
    }
    if ( a3 <= 0 )
      break;
    std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(&v21, v3, v5);
    v7 = v21;
    v8 = v22;
    a3 = a3 / 2 / 2 + a3 / 2;
    if ( 0x6DB6DB6DB6DB6DB7LL * ((v21 - v3) >> 3) >= 0x6DB6DB6DB6DB6DB7LL * ((v5 - v22) >> 3) )
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v22, v5, a3);
      v5 = v7;
    }
    else
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v3, v21, a3);
      v3 = v8;
    }
  }
  v14 = 0x6DB6DB6DB6DB6DB7LL * ((v5 - v3) >> 3);
  if ( v14 > 1 )
  {
    v15 = v14 / 2;
    if ( v14 / 2 > 0 )
    {
      v16 = v3 + 56 * v15 - 24;
      do
      {
        v25 = 7LL;
        v24 = 0LL;
        LOWORD(v23[0]) = 0;
        std::wstring::_Assign_rv(v23, (_QWORD *)(v16 - 32));
        v17 = *(_OWORD *)v16;
        --v15;
        v27 = *(_BYTE *)(v16 + 16);
        v26 = v17;
        std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
          v3,
          v15,
          v14,
          (__int64)v23);
        if ( v25 >= 8 )
          operator delete(v23[0]);
        v16 -= 56LL;
      }
      while ( v15 > 0 );
    }
    v18 = v5 - 16;
    do
    {
      v25 = 7LL;
      v24 = 0LL;
      LOWORD(v23[0]) = 0;
      std::wstring::_Assign_rv(v23, (_QWORD *)(v18 - 40));
      v19 = *(_OWORD *)(v18 - 8);
      v27 = *(_BYTE *)(v18 + 8);
      v26 = v19;
      CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v18 - 40, v3);
      std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        v3,
        0LL,
        0x6DB6DB6DB6DB6DB7LL * ((-40 - v3 + v18) >> 3),
        (__int64)v23);
      if ( v25 >= 8 )
        operator delete(v23[0]);
      v18 -= 56LL;
    }
    while ( 0x6DB6DB6DB6DB6DB7LL * ((16 - v3 + v18) >> 3) > 1 );
  }
}
