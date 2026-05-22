/*
 * XREFs of ?DestroySharedDeviceAndSignalClients@SharedD3DDevicePool@Internal@Composition@UI@Windows@@CAXV?$unique_ptr@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$default_delete@USharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@std@@@Z @ 0x1800A5CF4
 * Callers:
 *     _lambda_eee7116e10b79d37d834622fcd258a1d_::_lambda_invoker_cdecl_ @ 0x1800A3F10 (_lambda_eee7116e10b79d37d834622fcd258a1d_--_lambda_invoker_cdecl_.c)
 *     ?OnDeviceRemoved@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXU_LUID@@PEAUID3D11Device@@@Z @ 0x1800A61E8 (-OnDeviceRemoved@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAXU_LUID@@PEAUID3D11Dev.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$DoInvoke@V_lambda_f0ecde786bfd99c7c172d48e37e5501d_@@@?$EventSource@U?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_f0ecde786bfd99c7c172d48e37e5501d_@@@Z @ 0x1800A4284 (--$DoInvoke@V_lambda_f0ecde786bfd99c7c172d48e37e5501d_@@@-$EventSource@U-$IEventHandler@PEAVShar.c)
 *     ??$MakeAndInitialize@VSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Z @ 0x1800A449C (--$MakeAndInitialize@VSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@V12345@$$.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::DestroySharedDeviceAndSignalClients(
        _QWORD *a1)
{
  __int64 *v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( (int)Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs,Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs,>(&v8) >= 0 )
  {
    v2 = *(__int64 **)(*a1 + 24LL);
    v3 = *(__int64 **)(*a1 + 16LL);
    if ( v3 != v2 )
    {
      v4 = v8;
      do
      {
        v5 = *v3;
        v9 = 0LL;
        *(_QWORD *)&v7 = &v9;
        v10 = v4;
        *((_QWORD *)&v7 + 1) = &v10;
        Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_f0ecde786bfd99c7c172d48e37e5501d_>(
          v5 + 32,
          &v7);
        ++v3;
      }
      while ( v3 != v2 );
    }
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v8);
  return std::unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::~unique_ptr<Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>(a1);
}
