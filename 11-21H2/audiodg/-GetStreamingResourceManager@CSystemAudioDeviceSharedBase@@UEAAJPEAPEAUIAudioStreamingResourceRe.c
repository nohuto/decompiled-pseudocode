/*
 * XREFs of ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400253E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14002564C (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6@@3U__s_.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetStreamingResourceManager(
        CSystemAudioDeviceSharedBase *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  CSystemAudioDeviceSharedBase *v3; // rbx
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+28h] [rbp-30h]
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  v3 = this;
  v6 = *(_OWORD *)((char *)this - 56);
  v7 = v6;
  EtwEventActivityIdControl(4LL, &v7);
  *a2 = 0LL;
  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6>(
    &v5,
    *((_QWORD *)v3 + 3));
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v5 + 72LL))(
                  v5,
                  a2);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v5);
  EtwEventActivityIdControl(4LL, &v7);
  return (unsigned int)v3;
}
