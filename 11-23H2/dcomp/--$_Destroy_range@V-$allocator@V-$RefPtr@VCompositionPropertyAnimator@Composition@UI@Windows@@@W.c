/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122498
 * Callers:
 *     ?SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x18004D960 (-SetInitialValueExpressions@CompositionPropertyAnimator@Composition@UI@Windows@@IEAAJPEAVComposi.c)
 *     ??_GExpressionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18007BEA0 (--_GExpressionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180122E6C (--1CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ @ 0x180161958 (--1CompositionPropertyAnimator@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180186B28 (--$_Uninitialized_move@PEAV-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@M.c)
 *     ?_Change_array@?$vector@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@AEAAXQEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@_K1@Z @ 0x1801876F0 (-_Change_array@-$vector@V-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Mic.c)
 *     ?Destroy@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAXXZ @ 0x1801905E0 (-Destroy@CompositionPropertyAnimator@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v2; // rdi
  volatile signed __int32 **v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v2 = a2;
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (unsigned int)_InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          LOBYTE(a2) = 1;
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *, volatile signed __int32 **))(*(_QWORD *)v4 + 64LL))(
                     v4,
                     a2);
        }
      }
      ++v3;
    }
    while ( v3 != v2 );
  }
  return result;
}
