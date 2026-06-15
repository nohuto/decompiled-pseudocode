/*
 * XREFs of ?RemovePipeFromLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140059BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140020CFC (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3@@3U__s_.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::RemovePipeFromLoopbackConnection(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h]
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF

  v7 = *(_OWORD *)((char *)this - 56);
  v8 = v7;
  EtwEventActivityIdControl(4LL, &v8);
  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3>(
    &v6,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 3));
  if ( v6 )
    v4 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v6 + 88LL))(v6, a2);
  else
    v4 = -2147467262;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v6);
  EtwEventActivityIdControl(4LL, &v8);
  return v4;
}
