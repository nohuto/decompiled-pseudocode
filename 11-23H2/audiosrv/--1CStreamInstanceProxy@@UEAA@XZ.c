/*
 * XREFs of ??1CStreamInstanceProxy@@UEAA@XZ @ 0x180016930
 * Callers:
 *     ??_GCStreamInstanceProxy@@UEAAPEAXI@Z @ 0x180014890 (--_GCStreamInstanceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStreamInstanceProxy::~CStreamInstanceProxy(CStreamInstanceProxy *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
  *((_QWORD *)this + 5) = &CStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
  v2 = (__int64 *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v3 = *v2;
    v6 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v3 + 88))(v2, &v6) >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 80LL))(*((_QWORD *)this + 2), v6);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF56,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v4);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v6);
  }
  *((_DWORD *)this + 13) = -1073741823;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 2);
}
