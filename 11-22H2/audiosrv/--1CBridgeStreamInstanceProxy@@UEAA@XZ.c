/*
 * XREFs of ??1CBridgeStreamInstanceProxy@@UEAA@XZ @ 0x1801048A8
 * Callers:
 *     ??_ECBridgeStreamInstanceProxy@@UEAAPEAXI@Z @ 0x1800D8C80 (--_ECBridgeStreamInstanceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180045710 (-DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x180106F60 (-DisconnectFromRightSubmix@CBridgeStreamInstanceProxy@@UEAAJXZ.c)
 */

void __fastcall CBridgeStreamInstanceProxy::~CBridgeStreamInstanceProxy(CBridgeStreamInstanceProxy *this)
{
  CBridgeStreamInstanceProxy *v2; // rcx
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
  v2 = (CBridgeStreamInstanceProxy *)((char *)this + 40);
  *(_QWORD *)v2 = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBridgeStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
  if ( *((_QWORD *)this + 3) )
  {
    v3 = CBridgeStreamInstanceProxy::DisconnectFromRightSubmix(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x105E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v3);
    v4 = CStreamInstanceProxyImpl::DestroyStream(this);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x105F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v4);
  }
  *((_DWORD *)this + 13) = -1073741823;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 2);
}
