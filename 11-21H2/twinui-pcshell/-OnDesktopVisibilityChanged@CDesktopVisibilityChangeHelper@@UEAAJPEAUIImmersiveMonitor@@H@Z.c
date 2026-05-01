/*
 * XREFs of ?OnDesktopVisibilityChanged@CDesktopVisibilityChangeHelper@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x1802ECC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopVisibilityChangeHelper::OnDesktopVisibilityChanged(
        CDesktopVisibilityChangeHelper *this,
        struct IImmersiveMonitor *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor *))(**((_QWORD **)this + 2) + 24LL))(
           *((_QWORD *)this + 2),
           a2);
}
