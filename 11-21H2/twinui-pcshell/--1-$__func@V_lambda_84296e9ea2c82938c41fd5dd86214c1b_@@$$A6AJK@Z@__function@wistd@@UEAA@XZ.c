/*
 * XREFs of ??1?$__func@V_lambda_84296e9ea2c82938c41fd5dd86214c1b_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x180191E0C
 * Callers:
 *     ??_G?$__func@V_lambda_84296e9ea2c82938c41fd5dd86214c1b_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1801924E0 (--_G-$__func@V_lambda_84296e9ea2c82938c41fd5dd86214c1b_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall wistd::__function::__func<_lambda_84296e9ea2c82938c41fd5dd86214c1b_,long (unsigned long)>::~__func<_lambda_84296e9ea2c82938c41fd5dd86214c1b_,long (unsigned long)>(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 1);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
