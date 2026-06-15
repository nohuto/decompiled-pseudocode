/*
 * XREFs of ?GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400209D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140020CFC (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3@@3U__s_.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetInputFormat(
        CSystemAudioDeviceSharedBase *this,
        struct tWAVEFORMATEX **a2)
{
  CSystemAudioDeviceSharedBase *v3; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  v3 = this;
  v6 = *(_OWORD *)((char *)this - 56);
  v7 = v6;
  EtwEventActivityIdControl(4LL, &v7);
  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_1a06063b_0ec8_4ab1_9c8d_a19bde6941f3>(
    &v5,
    *((_QWORD *)v3 + 3));
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, struct tWAVEFORMATEX **))(*(_QWORD *)v5 + 64LL))(v5, a2);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v5);
  EtwEventActivityIdControl(4LL, &v7);
  return (unsigned int)v3;
}
