/*
 * XREFs of ?InsertKeyFrame@Api@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUICompositionPath@345@@Z @ 0x1801783E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::PathKeyFrameAnimation::Api::InsertKeyFrame(
        Windows::UI::Composition::PathKeyFrameAnimation::Api *this,
        float a2,
        struct Windows::UI::Composition::ICompositionPath *a3)
{
  __int64 v3; // rdx

  return (*(__int64 (__fastcall **)(Windows::UI::Composition::PathKeyFrameAnimation::Api *, __int64, struct Windows::UI::Composition::ICompositionPath *, _QWORD))(*(_QWORD *)this + 56LL))(
           this,
           v3,
           a3,
           0LL);
}
