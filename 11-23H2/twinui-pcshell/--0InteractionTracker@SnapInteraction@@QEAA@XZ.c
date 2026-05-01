/*
 * XREFs of ??0InteractionTracker@SnapInteraction@@QEAA@XZ @ 0x1801099E4
 * Callers:
 *     ??0CShellSnapComponent@@QEAA@XZ @ 0x180109480 (--0CShellSnapComponent@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
SnapInteraction::InteractionTracker *__fastcall SnapInteraction::InteractionTracker::InteractionTracker(
        SnapInteraction::InteractionTracker *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  *((_QWORD *)this + 2) = &winrt::impl::produce<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable>::`vftable';
  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)this + 1) = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &SnapInteraction::InteractionTracker::`vftable'{for `winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 1) = &SnapInteraction::InteractionTracker::`vftable'{for `winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>'};
  *((_QWORD *)this + 3) = &SnapInteraction::InteractionTracker::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v2 = (_QWORD *)((char *)this + 88);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v3 = operator new(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *v2 = v3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
