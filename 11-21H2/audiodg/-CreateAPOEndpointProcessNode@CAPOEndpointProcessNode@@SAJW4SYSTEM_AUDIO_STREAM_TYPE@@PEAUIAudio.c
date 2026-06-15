/*
 * XREFs of ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14005A5C4
 * Callers:
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005944C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140013204 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ??0?$CComQIPtr@UIApoAuxiliaryInputConfiguration@@$1?_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140017CDC (--0-$CComQIPtr@UIApoAuxiliaryInputConfiguration@@$1-_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x140031A14 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComPtrBase@UIAudioMediaType@@@ATL@@IEAA@PEAUIAudioMediaType@@@Z @ 0x14005A394 (--0-$CComPtrBase@UIAudioMediaType@@@ATL@@IEAA@PEAUIAudioMediaType@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAPOEndpointProcessNode::CreateAPOEndpointProcessNode(
        int a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        const WAVEFORMATEX *a3,
        _QWORD *a4)
{
  HRESULT v7; // edi
  int v8; // esi
  __int64 *v9; // rdx
  char v10; // bl
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+28h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  ppIAudioMediaType = 0LL;
  v15 = 0LL;
  ATL::CComQIPtr<IApoAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>::CComQIPtr<IApoAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>(
    &v17,
    a2);
  if ( !v17 )
  {
    v7 = -2147467262;
LABEL_25:
    AudDGTraceLoggingErrorHelper("CAPOEndpointProcessNode::CreateAPOEndpointProcessNode", 0x337u, v7);
    goto LABEL_26;
  }
  v7 = CreateAudioMediaType(a3, a3->cbSize + 18, &ppIAudioMediaType);
  if ( v7 < 0 )
    goto LABEL_25;
  v8 = (*(__int64 (__fastcall **)(__int64, IAudioMediaType *, __int64 *))(*(_QWORD *)v17 + 40LL))(
         v17,
         ppIAudioMediaType,
         &v18);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v21, v18);
      v11 = v21;
      v10 = 10;
    }
    else
    {
      v19 = 0LL;
      v11 = 0LL;
      v10 = 12;
    }
    ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v20, v11);
    v9 = &v20;
  }
  else
  {
    ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(&v22, (__int64)ppIAudioMediaType);
    v9 = &v22;
    v10 = 1;
  }
  ATL::CComPtr<IAudioMediaType>::operator=(&v15, v9);
  if ( (v10 & 8) != 0 )
  {
    v10 &= ~8u;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v20);
  }
  if ( (v10 & 4) != 0 )
  {
    v10 &= ~4u;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v19);
  }
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
  }
  if ( (v10 & 1) != 0 )
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
  if ( v8 < 0 )
  {
    v7 = v8;
    goto LABEL_25;
  }
  if ( !v15 )
  {
    v7 = -2005073917;
    goto LABEL_25;
  }
  v12 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  v19 = v12;
  if ( !v12 )
  {
    v7 = -2147024882;
    goto LABEL_25;
  }
  v12[1] = 0LL;
  v12[2] = 0LL;
  *((_DWORD *)v12 + 6) = a1 != 0;
  v12[4] = 0LL;
  *((_DWORD *)v12 + 10) = 5;
  *v12 = &CAPOEndpointProcessNode::`vftable';
  v12[6] = 0LL;
  *((_DWORD *)v12 + 14) = 0;
  *((_DWORD *)v12 + 15) = a1;
  ATL::CComPtr<IAudioMediaType>::operator=(v12 + 6, &v15);
  ATL::CComPtr<IAudioMediaType>::operator=(v13 + 1, &v15);
  ATL::CComPtr<IAudioMediaType>::operator=(v13 + 2, &v15);
  *a4 = v13;
LABEL_26:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v17);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
  return (unsigned int)v7;
}
