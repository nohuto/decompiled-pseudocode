/*
 * XREFs of ?GetInterruptPeriodicity@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x1400592A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140020CFC (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3@@3U__s_.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetInterruptPeriodicity(CSystemAudioDeviceSharedBase *this)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+38h] [rbp-20h] BYREF

  v5 = *(_OWORD *)((char *)this - 56);
  v6 = v5;
  EtwEventActivityIdControl(4LL, &v6);
  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3>(
    &v4,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 3));
  v2 = 0LL;
  if ( v4 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v4);
  EtwEventActivityIdControl(4LL, &v6);
  return v2;
}
