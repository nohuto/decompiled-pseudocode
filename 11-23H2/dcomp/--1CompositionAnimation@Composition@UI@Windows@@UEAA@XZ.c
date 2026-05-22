/*
 * XREFs of ??1CompositionAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x1800603E4
 * Callers:
 *     ??_EBooleanKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180060F10 (--_EBooleanKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_ECompositionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18011CA90 (--_ECompositionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GConditionalExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18011CAE0 (--_GConditionalExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1PathKeyFrameAnimation@Composition@UI@Windows@@UEAA@XZ @ 0x18012318C (--1PathKeyFrameAnimation@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??_EBounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801234B0 (--_EBounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EBounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123500 (--_EBounceVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123550 (--_EBounceVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EInjectionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124160 (--_EInjectionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124260 (--_EKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_ENaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801242C0 (--_ENaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_EQuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801243C0 (--_EQuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801244B0 (--_GScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801245D0 (--_GSpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124620 (--_GSpringVector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??_GVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180124700 (--_GVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z @ 0x18003FD0C (-RemoveElement@-$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4 (--$_Destroy_range@V-$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUA.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimation::~CompositionAnimation(
        Windows::UI::Composition::CompositionAnimation *this)
{
  Windows::UI::Composition::AnimationObjectInfo *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  ParameterEntry *v4; // rax
  __int64 v5; // rdx
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::AnimationObjectInfo *)*((_QWORD *)this + 39);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(v2);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 39),
      8 * ((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 39)) >> 3));
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock((char *)this + 272);
  v3 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 33);
  if ( v3 )
  {
    *((_QWORD *)this + 33) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v4 = (ParameterEntry *)RtlEnumerateGenericTableWithoutSplaying(
                             (PRTL_GENERIC_TABLE)((char *)this + 192),
                             &RestartKey);
    if ( !v4 )
      break;
    CGenericTableMap<HSTRING__ *,ParameterEntry>::RemoveElement((PRTL_GENERIC_TABLE)((char *)this + 192), v4);
  }
  CSparseStorage::~CSparseStorage((Windows::UI::Composition::CompositionAnimation *)((char *)this + 112));
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v5);
}
