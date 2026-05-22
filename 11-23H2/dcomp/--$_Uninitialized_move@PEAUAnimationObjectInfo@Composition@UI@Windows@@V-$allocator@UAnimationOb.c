/*
 * XREFs of ??$_Uninitialized_move@PEAUAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@0PEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068B40
 * Callers:
 *     ??$_Emplace_reallocate@UAnimationObjectInfo@Composition@UI@Windows@@@?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@QEAAPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x1800689B0 (--$_Emplace_reallocate@UAnimationObjectInfo@Composition@UI@Windows@@@-$vector@UAnimationObjectIn.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4 (--$_Destroy_range@V-$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUA.c)
 */

Windows::UI::Composition::AnimationObjectInfo *__fastcall std::_Uninitialized_move<Windows::UI::Composition::AnimationObjectInfo *>(
        __int64 *a1,
        __int64 *a2,
        Windows::UI::Composition::AnimationObjectInfo *a3)
{
  Windows::UI::Composition::AnimationObjectInfo *v3; // rbx
  __int64 *v6; // r9
  char *v7; // r10
  char *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx

  v3 = a3;
  if ( a1 != a2 )
  {
    v6 = a1 + 3;
    v7 = (char *)(a3 - (Windows::UI::Composition::AnimationObjectInfo *)a1);
    do
    {
      v8 = &v7[(_QWORD)v6 - 16];
      *(_QWORD *)v3 = *(v6 - 3);
      *(v6 - 3) = 0LL;
      v9 = v6 - 2;
      *(_QWORD *)v8 = 0LL;
      if ( v8 != (char *)(v6 - 2) )
      {
        *(_QWORD *)v8 = *v9;
        *v9 = 0LL;
      }
      v10 = *(v6 - 1);
      v3 = (Windows::UI::Composition::AnimationObjectInfo *)((char *)v3 + 40);
      v11 = v6[1];
      v12 = *v6;
      v6[1] = 0LL;
      *v6 = 0LL;
      *(v6 - 1) = 0LL;
      *(__int64 *)((char *)v6 + (_QWORD)v7 - 8) = v10;
      *(_QWORD *)&v7[(_QWORD)v6] = v12;
      *(__int64 *)((char *)v6 + (_QWORD)v7 + 8) = v11;
      v6 += 5;
    }
    while ( v6 - 3 != a2 );
  }
  std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(v3);
  return v3;
}
