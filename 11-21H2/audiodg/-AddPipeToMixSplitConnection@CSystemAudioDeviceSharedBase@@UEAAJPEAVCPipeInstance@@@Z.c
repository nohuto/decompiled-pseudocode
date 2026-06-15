/*
 * XREFs of ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140025570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14002564C (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6@@3U__s_.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(
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
  (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 64LL))(this);
  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6>(
    &v6,
    *((_QWORD *)this + 3));
  if ( v6 )
    v4 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v6 + 24LL))(v6, a2);
  else
    v4 = -2147467262;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v6);
  EtwEventActivityIdControl(4LL, &v8);
  return v4;
}
