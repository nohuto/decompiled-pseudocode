/*
 * XREFs of ??$_Insertion_sort1@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@U123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@00@Z @ 0x1800CDDD0
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800CEB64 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006E834 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z @ 0x1800C714C (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@$$QEAU012@@Z.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800CF42C (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 */

void __fastcall std::_Insertion_sort1<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r14
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int128 v8; // xmm0
  __int64 v9; // rsi
  __int64 i; // rdx
  __int128 v11; // xmm0
  _QWORD v12[4]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  char v14; // [rsp+50h] [rbp-10h]

  if ( a1 != a2 )
  {
    v2 = a1 + 56;
    if ( a1 + 56 != a2 )
    {
      v5 = a1;
      do
      {
        v6 = v2;
        CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile((__int64)v12, v2);
        if ( (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v12, a1) )
        {
          if ( v2 != a1 )
          {
            v7 = v5 + 152;
            do
            {
              v7 -= 56LL;
              std::wstring::operator=((_QWORD *)(v7 - 40), (_QWORD *)(v7 - 96));
              *(_QWORD *)(v7 - 8) = *(_QWORD *)(v7 - 64);
              *(_QWORD *)v7 = *(_QWORD *)(v7 - 56);
              *(_BYTE *)(v7 + 8) = *(_BYTE *)(v7 - 48);
            }
            while ( v7 - 96 != a1 );
          }
          std::wstring::operator=((_QWORD *)a1, v12);
          v8 = v13;
          *(_BYTE *)(a1 + 48) = v14;
          *(_OWORD *)(a1 + 32) = v8;
        }
        else
        {
          v9 = v5;
          for ( i = v5; (unsigned __int8)CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v12, i); i = v9 )
          {
            std::wstring::operator=((_QWORD *)v6, (_QWORD *)v9);
            *(_QWORD *)(v6 + 32) = *(_QWORD *)(v9 + 32);
            *(_QWORD *)(v6 + 40) = *(_QWORD *)(v9 + 40);
            *(_BYTE *)(v6 + 48) = *(_BYTE *)(v9 + 48);
            v6 = v9;
            v9 -= 56LL;
          }
          std::wstring::operator=((_QWORD *)v6, v12);
          v11 = v13;
          *(_BYTE *)(v6 + 48) = v14;
          *(_OWORD *)(v6 + 32) = v11;
        }
        std::wstring::_Tidy(v12, 1, 0LL);
        v2 += 56LL;
        v5 += 56LL;
      }
      while ( v2 != a2 );
    }
  }
}
