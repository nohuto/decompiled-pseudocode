/*
 * XREFs of ??1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ @ 0x18060AC38
 * Callers:
 *     _lambda_52bfc6edea7729ed62f4f356328b854f_::operator() @ 0x1802173FC (_lambda_52bfc6edea7729ed62f4f356328b854f_--operator().c)
 *     __lambda_52bfc6edea7729ed62f4f356328b854f_::operator()_::_1_::dtor$1 @ 0x180217580 (__lambda_52bfc6edea7729ed62f4f356328b854f_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
