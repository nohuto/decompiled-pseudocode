/*
 * XREFs of ??1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ @ 0x18054F49C
 * Callers:
 *     _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::operator() @ 0x1801B6B30 (_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--operator().c)
 *     __lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::operator()_::_1_::dtor$1 @ 0x1801B6CB4 (__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ImageLoaders::CDCompVisualImageLoader::~CDCompVisualImageLoader(
        ImageLoaders::CDCompVisualImageLoader *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 2);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this);
}
