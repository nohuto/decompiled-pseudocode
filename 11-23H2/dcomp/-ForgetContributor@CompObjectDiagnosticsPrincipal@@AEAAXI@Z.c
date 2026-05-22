/*
 * XREFs of ?ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z @ 0x18019D6D4
 * Callers:
 *     ??1Contributor@CompObjectDiagnosticsPrincipal@@QEAA@XZ @ 0x18019C8BC (--1Contributor@CompObjectDiagnosticsPrincipal@@QEAA@XZ.c)
 * Callees:
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z @ 0x180029F08 (-UnregisterDebugPropertyForObject@AnimationLoggingManager@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U?$less@I@std@@V?$allocator@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800E6460 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@I$$CBUSuperWetInkBallpointPenPoint@@U-$less@I@std.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU?$_Tree_node@UObjectPropertyPair@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E71BC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@UObjectPropertyPair@@@std@@@std@@QEAAPEAU-$_Tree_nod.c)
 *     ??1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ @ 0x18019CA68 (--1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ.c)
 */

void __fastcall CompObjectDiagnosticsPrincipal::ForgetContributor(
        CompObjectDiagnosticsPrincipal *this,
        unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rbx
  Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  std::_Tree<std::_Tmap_traits<unsigned int,SuperWetInkBallpointPenPoint const,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)this + 7,
    (__int64)&v12,
    &v14);
  v7 = v13;
  if ( !*(_BYTE *)(v13 + 25) && v6 >= *(_DWORD *)(v13 + 32) && v13 != *v5 && (*(_DWORD *)(v13 + 48))-- == 1 )
  {
    v9 = std::_Tree_val<std::_Tree_simple_types<ObjectPropertyPair>>::_Extract(v5, v7, v3, v4);
    CompObjectDiagnosticsPrincipal::PropInfo::~PropInfo((CompObjectDiagnosticsPrincipal::PropInfo *)(v9 + 5));
    std::_Deallocate<16,0>(v9, 0x60uLL);
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 56LL) + 8LL);
    if ( v10 )
    {
      AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(
                                  *((Windows::UI::Composition::CompositorCommon **)this + 9),
                                  0);
      Windows::UI::Composition::AnimationLoggingManager::UnregisterDebugPropertyForObject(
        AnimationLoggingManager,
        *(_DWORD *)(v10 + 128));
    }
  }
}
