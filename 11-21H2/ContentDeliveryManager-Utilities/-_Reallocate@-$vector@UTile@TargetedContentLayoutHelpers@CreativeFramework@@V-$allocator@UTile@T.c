/*
 * XREFs of ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800E4088
 * Callers:
 *     ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800E437C (-_Reserve@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Targ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@U123@@std@@YAPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@00AEAU?$_Wrap_alloc@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800DBA00 (--$_Uninit_move@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@V-$allocator@UT.c)
 */

__int64 __fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reallocate(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  void *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 result; // rax
  void *v11; // [rsp+68h] [rbp+10h]

  v4 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x492492492492492LL || (v5 = operator new(56 * a2), v4 = (__int64)v5, (v11 = v5) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *,std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
      *a1,
      a1[1],
      v4);
    v7 = a1[1];
    v8 = *a1;
    v9 = 0x6DB6DB6DB6DB6DB7LL * ((v7 - *a1) >> 3);
    if ( *a1 )
    {
      if ( v8 != v7 )
      {
        do
        {
          if ( *(_QWORD *)(v8 + 24) >= 8uLL )
            operator delete(*(void **)v8);
          *(_QWORD *)(v8 + 24) = 7LL;
          *(_QWORD *)(v8 + 16) = 0LL;
          *(_WORD *)v8 = 0;
          v8 += 56LL;
        }
        while ( v8 != v7 );
        v8 = *a1;
      }
      operator delete((void *)v8);
    }
    a1[2] = v4 + 56 * a2;
    result = v4 + 56 * v9;
    a1[1] = result;
    *a1 = v4;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<CreativeFramework::TargetedContentLayoutHelpers::Tile>>::deallocate(v6, v11);
    throw;
  }
  return result;
}
