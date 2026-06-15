/*
 * XREFs of ?RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180134AC0
 * Callers:
 *     ??$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x1801308F8 (--$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_Dynam.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddHead@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAUIAudioProcess@@@Z @ 0x18013117C (-AddHead@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AvoidEndpointPolicyRule::RuntimeClassInitialize(
        AvoidEndpointPolicyRule *this,
        struct IAudioProcess *a2,
        struct _DynamicRoutingRule *a3)
{
  struct _DynamicRoutingRule *v3; // rdi
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rsi
  HRESULT v10; // eax
  LPVOID v11; // rbx
  __int64 (__fastcall *v12)(LPVOID, char *, __int64 *); // r15
  __int64 v13; // rcx
  __int64 v14; // r8
  _OWORD *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  ppv = 0LL;
  v18 = 0LL;
  if ( *((_DWORD *)a3 + 2) != 1 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 20LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\avoidendpointpolicyrule.cpp",
      (const char *)v7);
    goto LABEL_16;
  }
  if ( *((_DWORD *)a3 + 1) > 1u )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 23LL;
    goto LABEL_9;
  }
  v9 = 2LL;
  if ( (*((_BYTE *)a3 + 16) & 2) != 0 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 24LL;
    goto LABEL_9;
  }
  ppv = 0LL;
  v10 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v6 = v10;
  if ( v10 < 0 )
  {
    v7 = (unsigned int)v10;
    v8 = 25LL;
    goto LABEL_9;
  }
  *((_WORD *)v3 + 137) = 0;
  v11 = ppv;
  v12 = *(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(*(_QWORD *)ppv + 40LL);
  v13 = v18;
  v18 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v6 = v12(v11, (char *)v3 + 20, &v18);
  if ( v6 >= 0 )
  {
    ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>>::AddHead(
      (__int64 *)this + 2,
      (__int64)a2,
      v14);
    v15 = (_OWORD *)((char *)this + 64);
    do
    {
      *v15 = *(_OWORD *)v3;
      v15[1] = *((_OWORD *)v3 + 1);
      v15[2] = *((_OWORD *)v3 + 2);
      v15[3] = *((_OWORD *)v3 + 3);
      v15[4] = *((_OWORD *)v3 + 4);
      v15[5] = *((_OWORD *)v3 + 5);
      v15[6] = *((_OWORD *)v3 + 6);
      v15 += 8;
      *(v15 - 1) = *((_OWORD *)v3 + 7);
      v3 = (struct _DynamicRoutingRule *)((char *)v3 + 128);
      --v9;
    }
    while ( v9 );
    *v15 = *(_OWORD *)v3;
    *((_DWORD *)v15 + 4) = *((_DWORD *)v3 + 4);
    v6 = 0;
  }
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v6;
}
