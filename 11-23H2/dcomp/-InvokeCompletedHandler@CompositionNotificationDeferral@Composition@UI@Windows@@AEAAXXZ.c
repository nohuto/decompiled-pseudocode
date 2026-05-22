/*
 * XREFs of ?InvokeCompletedHandler@CompositionNotificationDeferral@Composition@UI@Windows@@AEAAXXZ @ 0x180187FC0
 * Callers:
 *     ??1CompositionNotificationDeferral@Composition@UI@Windows@@EEAA@XZ @ 0x180187DC8 (--1CompositionNotificationDeferral@Composition@UI@Windows@@EEAA@XZ.c)
 *     ?Complete@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAJXZ @ 0x180187E50 (-Complete@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionNotificationDeferral::InvokeCompletedHandler(
        Windows::UI::Composition::CompositionNotificationDeferral *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 24LL))(v1, *((unsigned int *)this + 17));
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
