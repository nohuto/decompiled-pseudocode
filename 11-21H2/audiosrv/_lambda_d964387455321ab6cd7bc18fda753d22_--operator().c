/*
 * XREFs of _lambda_d964387455321ab6cd7bc18fda753d22_::operator() @ 0x1800692D8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18006A370 (std--_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffec_ea_18006A370.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180048610 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180048F04 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _lambda_52b218abed3a9faf511895c4c218b272_::operator() @ 0x1800688A0 (_lambda_52b218abed3a9faf511895c4c218b272_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_9db93a4360823e3555de44b3b523347b_::operator() @ 0x180144968 (_lambda_9db93a4360823e3555de44b3b523347b_--operator().c)
 *     ?IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ @ 0x18014B05C (-IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014B63C (-LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MI.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18014B808 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18014BF28 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18015017C (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d964387455321ab6cd7bc18fda753d22_::operator()(
        __int64 *a1,
        int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DelayedAECInsertionPolicy; // ebx
  struct _AEC_POLICY_RESULTS *v6; // r13
  __int64 v7; // rdi
  int v8; // ebx
  int v9; // esi
  GUID *v10; // rax
  __int64 *v11; // rax
  int updated; // edi
  const struct _tlgProvider_t **v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 *v16; // rax
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned __int64 *v22; // rsi
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  const struct _tlgProvider_t **v27; // rsi
  __int64 v28; // rdi
  void (__fastcall *v29)(__int64, unsigned __int16 **); // rbx
  int v30; // [rsp+20h] [rbp-60h]
  int v31; // [rsp+20h] [rbp-60h]
  unsigned __int16 *v32; // [rsp+30h] [rbp-50h] BYREF
  int v33; // [rsp+38h] [rbp-48h] BYREF
  struct CAudioSignalProcessingModeArray *v34; // [rsp+40h] [rbp-40h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-38h] BYREF
  struct _AEC_POLICY_RESULTS *v36; // [rsp+58h] [rbp-28h]
  struct _GUID v37; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v34 = a3;
  *(_OWORD *)pvar = 0LL;
  v36 = 0LL;
  DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, __int64 *, PROPVARIANT *))(**(_QWORD **)(*a1 + 40)
                                                                                          + 40LL))(
                                *(_QWORD *)(*a1 + 40),
                                a1 + 1,
                                pvar);
  if ( DelayedAECInsertionPolicy < 0 )
    goto LABEL_39;
  v6 = v36;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 68 || *(_DWORD *)v36 != 5 )
    goto LABEL_38;
  v7 = *a1;
  v37 = (struct _GUID)*((_OWORD *)a1 + 6);
  DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                (struct CEndpointCharacteristics *)v7,
                                *(struct IPropertyStore **)(v7 + 40),
                                (struct SystemEffectDescriptor *)a2,
                                &v37,
                                (enum INBOX_AEC_INSERTION_POLICY *)&v33,
                                v36);
  if ( DelayedAECInsertionPolicy >= 0 )
  {
    v8 = v33;
    v9 = *((_DWORD *)a1 + 28);
    if ( v33 == 2 )
    {
      if ( v9 != 3
        || (unsigned int)CEndpointCharacteristics::IsInterleavedLoopbackSupported((CEndpointCharacteristics *)v7) )
      {
        v10 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
      }
      else
      {
        v10 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
      }
    }
    else
    {
      v10 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    }
    v37 = *v10;
    v11 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(v7 + 152), v9);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v11,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      if ( !v8 )
        goto LABEL_34;
      updated = lambda_52b218abed3a9faf511895c4c218b272_::operator()((int *)a1 + 30);
      if ( updated < 0 )
      {
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x92D,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)updated,
          v30);
        return (unsigned int)updated;
      }
    }
    if ( !v8 )
      goto LABEL_34;
    if ( v8 > 0 )
    {
      if ( v8 <= 2 )
      {
        DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                      (SystemEffectDescriptor *)a2,
                                      v34,
                                      1u,
                                      (__int64)&v37,
                                      2u,
                                      0);
        if ( DelayedAECInsertionPolicy < 0 )
          goto LABEL_6;
        v21 = *a1;
        v22 = (unsigned __int64 *)(*a1 + 152);
        v23 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v22, a2[12]);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v23, a1 + 12) != -1 )
        {
          v24 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(v21 + 1872),
                  *((int *)a1 + 28));
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v24, (_OWORD *)a1 + 6) )
            goto LABEL_25;
          v25 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v22, a2[12]);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v25, a1 + 12);
        }
        if ( *((_DWORD *)v6 + 16) == 8 )
        {
          v26 = *(_DWORD *)(v21 + 9720);
          if ( v26 )
          {
            *(_DWORD *)(v21 + 9720) = v26 - 1;
            *((_DWORD *)v34 + 4) = 1;
          }
        }
LABEL_34:
        *(_OWORD *)((char *)v6 + 44) = *(_OWORD *)lambda_9db93a4360823e3555de44b3b523347b_::operator()(a1 + 19, &v37);
        v32 = 0LL;
        v27 = (const struct _tlgProvider_t **)*a1;
        v28 = *(_QWORD *)(*a1 + 16);
        v29 = *(void (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v28 + 40LL);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v32,
          0LL);
        v29(v28, &v32);
        LODWORD(v29) = *((_DWORD *)a1 + 28);
        v37 = (struct _GUID)*((_OWORD *)a1 + 6);
        LogAecEffectPolicyInsertion(
          v27[1223],
          v6,
          v32,
          &v37,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v29);
        DelayedAECInsertionPolicy = CEndpointCharacteristics::PersistAECPolicy(
                                      (CEndpointCharacteristics *)v27,
                                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v29,
                                      (const struct _tagpropertykey *)(a1 + 1),
                                      v6);
        PropVariantClear(pvar);
        if ( DelayedAECInsertionPolicy >= 0 )
          DelayedAECInsertionPolicy = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x92D,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)DelayedAECInsertionPolicy,
            v31);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v32);
        return (unsigned int)DelayedAECInsertionPolicy;
      }
      if ( v8 == 3 )
      {
        v14 = (const struct _tlgProvider_t **)*a1;
        v15 = *((int *)a1 + 28);
        v16 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(*a1 + 152), v15);
        v17 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v16, a1 + 12);
        updated = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                    (SystemEffectDescriptor *)a2,
                    v34,
                    1u,
                    (__int64)&v37,
                    1u,
                    v17 != -1);
        if ( updated < 0 )
        {
          PropVariantClear(pvar);
          goto LABEL_16;
        }
        v18 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v14 + 234, v15);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v18, a1 + 12) != -1 )
        {
          v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v14 + 19, v15);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v19, (_OWORD *)a1 + 6) )
          {
LABEL_25:
            DelayedAECInsertionPolicy = -2147024882;
            goto LABEL_39;
          }
          v20 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v14 + 234, v15);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v20, a1 + 12);
        }
        goto LABEL_34;
      }
    }
LABEL_38:
    PropVariantClear(pvar);
    DelayedAECInsertionPolicy = -2147418113;
    goto LABEL_39;
  }
LABEL_6:
  PropVariantClear(pvar);
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92D,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DelayedAECInsertionPolicy,
    v30);
  return (unsigned int)DelayedAECInsertionPolicy;
}
