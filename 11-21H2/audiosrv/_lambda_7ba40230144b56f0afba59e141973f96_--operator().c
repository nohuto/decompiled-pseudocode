/*
 * XREFs of _lambda_7ba40230144b56f0afba59e141973f96_::operator() @ 0x180068A90
 * Callers:
 *     ?DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800484F0 (-DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffec.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800107D0 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18001D970 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_7ba40230144b56f0afba59e141973f96_::operator()(
        __int64 *a1,
        SystemEffectDescriptor *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  int DefaultEffectChainClsids; // eax
  void *v8; // rbx
  int v9; // r11d
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rdx
  int v17; // [rsp+20h] [rbp-60h]
  int v18; // [rsp+40h] [rbp-40h] BYREF
  int v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-28h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h] BYREF
  int v24; // [rsp+78h] [rbp-8h]
  int v25; // [rsp+7Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v27; // [rsp+C8h] [rbp+48h] BYREF

  pv = 0LL;
  v27 = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               a2,
                               (struct CAudioSignalProcessingModeArray *)&v23,
                               &v27,
                               (struct _GUID **)&pv);
  v8 = pv;
  if ( DefaultEffectChainClsids < 0
    || !v27
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(&v23, a3) == -1 )
  {
    goto LABEL_14;
  }
  v20 = 0LL;
  *(_QWORD *)&v22 = v8;
  LODWORD(a5) = v9;
  v27 = 0;
  v18 = 0;
  v19 = 1;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
          &v20,
          &v19,
          &v18,
          (int *)&v27,
          (unsigned int *)&a5,
          (_OWORD **)&v22);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = *v20;
    v14 = *((_DWORD *)a1 + 2);
    v15 = *a1;
    v22 = *(_OWORD *)a3;
    v17 = v14;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, _QWORD))(v13 + 24))(
            v20,
            *(_QWORD *)(v15 + 16),
            &v22,
            0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1829LL;
      goto LABEL_12;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
LABEL_14:
    v11 = 0;
    goto LABEL_15;
  }
  v12 = 1828LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v10,
    v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
LABEL_15:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v23);
  CoTaskMemFree(v8);
  return v11;
}
