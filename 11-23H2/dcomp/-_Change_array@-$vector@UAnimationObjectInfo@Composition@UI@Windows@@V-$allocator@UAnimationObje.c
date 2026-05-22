/*
 * XREFs of ?_Change_array@?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUAnimationObjectInfo@Composition@UI@Windows@@_K1@Z @ 0x180068BE0
 * Callers:
 *     ??$_Emplace_reallocate@UAnimationObjectInfo@Composition@UI@Windows@@@?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@QEAAPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x1800689B0 (--$_Emplace_reallocate@UAnimationObjectInfo@Composition@UI@Windows@@@-$vector@UAnimationObjectIn.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4 (--$_Destroy_range@V-$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUA.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::UI::Composition::AnimationObjectInfo>::_Change_array(
        Windows::UI::Composition::AnimationObjectInfo **a1,
        Windows::UI::Composition::AnimationObjectInfo *a2,
        __int64 a3,
        __int64 a4)
{
  Windows::UI::Composition::AnimationObjectInfo *v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(v6);
    std::_Deallocate<16,0>(*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = a2;
  a1[1] = (Windows::UI::Composition::AnimationObjectInfo *)((char *)a2 + 40 * a3);
  result = 5 * a4;
  a1[2] = (Windows::UI::Composition::AnimationObjectInfo *)((char *)a2 + 40 * a4);
  return result;
}
