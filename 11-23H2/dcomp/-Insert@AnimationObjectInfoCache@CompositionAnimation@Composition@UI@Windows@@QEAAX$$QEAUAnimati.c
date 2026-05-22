/*
 * XREFs of ?Insert@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAX$$QEAUAnimationObjectInfo@345@W4AnimationObjectInfoType@2345@@Z @ 0x180068904
 * Callers:
 *     ?TryPopulateAnimationObjectParametersInfo@CompositionAnimation@Composition@UI@Windows@@QEAAX_N@Z @ 0x180015408 (-TryPopulateAnimationObjectParametersInfo@CompositionAnimation@Composition@UI@Windows@@QEAAX_N@Z.c)
 *     ?ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004DF00 (-ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimati.c)
 * Callees:
 *     ??$_Emplace_reallocate@UAnimationObjectInfo@Composition@UI@Windows@@@?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@QEAAPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x1800689B0 (--$_Emplace_reallocate@UAnimationObjectInfo@Composition@UI@Windows@@@-$vector@UAnimationObjectIn.c)
 */

char __fastcall Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Insert(
        __int64 a1,
        _QWORD *a2,
        int a3)
{
  _QWORD *v3; // r9
  char result; // al
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 == *(_QWORD **)(a1 + 16) )
  {
    std::vector<Windows::UI::Composition::AnimationObjectInfo>::_Emplace_reallocate<Windows::UI::Composition::AnimationObjectInfo>(
      a1,
      *(_QWORD *)(a1 + 8),
      a2);
  }
  else
  {
    v8 = a2 + 1;
    *v3 = *a2;
    *a2 = 0LL;
    v3[1] = 0LL;
    if ( v3 + 1 != a2 + 1 )
    {
      v3[1] = *v8;
      *v8 = 0LL;
    }
    v9 = a2[4];
    v10 = a2[3];
    v11 = a2[2];
    a2[4] = 0LL;
    a2[3] = 0LL;
    a2[2] = 0LL;
    v3[2] = v11;
    v3[3] = v10;
    v3[4] = v9;
    *(_QWORD *)(a1 + 8) += 40LL;
  }
  result = (*(_BYTE *)(a1 + 24) | (a3 == 0)) ^ ((*(_BYTE *)(a1 + 24) | (a3 == 0)) ^ (*(_BYTE *)(a1 + 24) | (a3 == 0) | (a3 != 1 ? 0 : 2))) & 2;
  ++*(_DWORD *)(a1 + 28);
  *(_BYTE *)(a1 + 24) = result;
  return result;
}
