/*
 * XREFs of ??1?$__func@V_lambda_02a66194befb27fdfff14c6cb3957445_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x1801D07E4
 * Callers:
 *     ??_G?$__func@V_lambda_d5ea8598adbc90e6d4f0fd3372e2a930_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1801D0D00 (--_G-$__func@V_lambda_d5ea8598adbc90e6d4f0fd3372e2a930_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall wistd::__function::__func<_lambda_02a66194befb27fdfff14c6cb3957445_,long (unsigned long)>::~__func<_lambda_02a66194befb27fdfff14c6cb3957445_,long (unsigned long)>(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 1);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
