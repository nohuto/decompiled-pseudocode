/*
 * XREFs of ??1?$__func@V_lambda_f597752f4ab951f1160aea92caa7c9ee_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x1801CF938
 * Callers:
 *     ??_E?$__func@V_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1801CF9C0 (--_E-$__func@V_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall wistd::__function::__func<_lambda_f597752f4ab951f1160aea92caa7c9ee_,long (unsigned long)>::~__func<_lambda_f597752f4ab951f1160aea92caa7c9ee_,long (unsigned long)>(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 1);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
