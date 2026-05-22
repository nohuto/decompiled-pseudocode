/*
 * XREFs of ?SetSparse_AnimationScenarioGUID@CompositionAnimation@Composition@UI@Windows@@IEAAXU_GUID@@@Z @ 0x1800844B8
 * Callers:
 *     ?TelemetrySetAnimationScenarioGUID@Internal@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEBU_GUID@@@Z @ 0x180084450 (-TelemetrySetAnimationScenarioGUID@Internal@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEBU_.c)
 *     ?TelemetrySetAnimationScenarioGUID@Internal@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEBU_GUID@@@Z @ 0x180188F70 (-TelemetrySetAnimationScenarioGUID@Internal@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18005DC0C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _Init_thread_footer @ 0x180096330 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180096398 (_Init_thread_header.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimation::SetSparse_AnimationScenarioGUID(
        Windows::UI::Composition::CompositionAnimation *this,
        struct _GUID *a2)
{
  CSparseStorage *v4; // rcx
  __int64 v5; // rax

  if ( __TSS0__1__SetSparse_AnimationScenarioGUID_CompositionAnimation_Composition_UI_Windows__IEAAXU_GUID___Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__SetSparse_AnimationScenarioGUID_CompositionAnimation_Composition_UI_Windows__IEAAXU_GUID___Z_4HA);
    if ( __TSS0__1__SetSparse_AnimationScenarioGUID_CompositionAnimation_Composition_UI_Windows__IEAAXU_GUID___Z_4HA == -1 )
    {
      `Windows::UI::Composition::CompositionAnimation::SetSparse_AnimationScenarioGUID'::`2'::sc_defaultValue = 0LL;
      Init_thread_footer(&__TSS0__1__SetSparse_AnimationScenarioGUID_CompositionAnimation_Composition_UI_Windows__IEAAXU_GUID___Z_4HA);
    }
  }
  v4 = (Windows::UI::Composition::CompositionAnimation *)((char *)this + 112);
  v5 = *(_QWORD *)&a2->Data1
     - *(_QWORD *)&`Windows::UI::Composition::CompositionAnimation::SetSparse_AnimationScenarioGUID'::`2'::sc_defaultValue.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&`Windows::UI::Composition::CompositionAnimation::SetSparse_AnimationScenarioGUID'::`2'::sc_defaultValue.Data1 )
    v5 = *(_QWORD *)a2->Data4
       - *(_QWORD *)`Windows::UI::Composition::CompositionAnimation::SetSparse_AnimationScenarioGUID'::`2'::sc_defaultValue.Data4;
  if ( v5 )
    CSparseStorage::SetData(v4, 21, 0x10u, a2);
  else
    *(_DWORD *)(*(_QWORD *)v4 + 4LL) &= ~0x800u;
}
