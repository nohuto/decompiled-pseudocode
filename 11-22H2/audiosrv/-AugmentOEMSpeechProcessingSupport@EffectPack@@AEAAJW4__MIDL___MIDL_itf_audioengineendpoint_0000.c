/*
 * XREFs of ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18003FE74
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x18003FBCC (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x18002EB7C (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003064C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180052920 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005352C (-LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MI.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x1800545B4 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x180055350 (_lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_--operator().c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_cafd355bc8518bdbec11f1f0c823a855__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_cafd355bc8518bdbec11f1f0c823a855___ @ 0x1800740B8 (std--_Global_new_std--_Func_impl_no_alloc__lambda_cafd355bc8518bdbec11f1f0c823a855__ea_1800740B8.c)
 *     _lambda_7fbb2555f01c0941137ea12a577c6f73_::operator() @ 0x1800746B0 (_lambda_7fbb2555f01c0941137ea12a577c6f73_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ @ 0x18014E204 (-IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18014EB0C (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::AugmentOEMSpeechProcessingSupport(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3)
{
  unsigned __int64 v4; // r15
  struct _tagpropertykey *v6; // rcx
  __int64 v7; // rcx
  BOOL v8; // eax
  unsigned __int64 *v9; // r12
  struct SystemEffectDescriptor *v10; // rax
  struct IPropertyStore *v11; // rdx
  __int64 v12; // rcx
  int AECInsertionPolicy; // ebx
  __int64 v14; // rdx
  int v16; // ebx
  GUID *v17; // rax
  int OverridingChain; // r12d
  __int64 v19; // rdx
  SystemEffectDescriptor *v20; // rax
  int v21; // eax
  unsigned int v22; // r14d
  __int64 *v23; // rax
  SystemEffectDescriptor *v24; // rbx
  int IsConnectorModeSupported; // eax
  SystemEffectDescriptor *v26; // rbx
  __int64 *v27; // rax
  int v28; // eax
  SystemEffectDescriptor *v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34[7]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h]
  _BYTE v36[96]; // [rsp+90h] [rbp-70h]
  struct _GUID v37; // [rsp+F0h] [rbp-10h]
  _BYTE v38[72]; // [rsp+100h] [rbp+0h]
  _OWORD v39[11]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v40; // [rsp+200h] [rbp+100h]
  struct _GUID v41; // [rsp+210h] [rbp+110h] BYREF
  struct _tagpropertykey v42; // [rsp+220h] [rbp+120h] BYREF
  __m256i v43; // [rsp+238h] [rbp+138h] BYREF
  __m256i v44; // [rsp+258h] [rbp+158h] BYREF
  int v45[4]; // [rsp+280h] [rbp+180h] BYREF
  __int128 v46; // [rsp+290h] [rbp+190h]
  __m256i v47; // [rsp+2A0h] [rbp+1A0h]
  int v48; // [rsp+2C0h] [rbp+1C0h]
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  v4 = a2;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 56LL))(*((_QWORD *)this + 161)) == 1 )
  {
    if ( (_DWORD)v4 == 3 )
    {
      v6 = (struct _tagpropertykey *)&PKEY_KeywordSpeechAecPolicyResults;
    }
    else
    {
      v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1;
      if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 )
        v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4;
      v8 = v7 == 0;
      v6 = (struct _tagpropertykey *)&PKEY_SpeechAecPolicyResults;
      if ( !v8 )
        v6 = (struct _tagpropertykey *)&PKEY_CommunicationsAecPolicyResults;
    }
    v42 = *v6;
    v44.m256i_i64[0] = (__int64)this;
    v44.m256i_i32[2] = v4;
    *(struct _GUID *)((char *)&v44.m256i_u64[1] + 4) = *a3;
    v43.m256i_i32[0] = v4;
    *(_OWORD *)((char *)v43.m256i_i64 + 4) = *(_OWORD *)((char *)&v44.m256i_u64[1] + 4);
    v43.m256i_i64[3] = (__int64)this;
    memset_0(v45, 255, 0x44uLL);
    v45[0] = 5;
    v9 = (unsigned __int64 *)((char *)this + 1168);
    v10 = (struct SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                             (unsigned __int64 *)this + 146,
                                             v4);
    v41 = *a3;
    AECInsertionPolicy = EffectPolicy::GetAECInsertionPolicy(
                           this,
                           v11,
                           v10,
                           &v41,
                           (enum INBOX_AEC_INSERTION_POLICY *)v33,
                           (struct _AEC_POLICY_RESULTS *)v45);
    if ( AECInsertionPolicy < 0 )
    {
      v14 = 2926LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)AECInsertionPolicy);
      return (unsigned int)AECInsertionPolicy;
    }
    v16 = v33[0];
    if ( !v33[0] )
      goto LABEL_46;
    if ( v33[0] == 2 )
    {
      if ( (_DWORD)v4 != 3
        || (unsigned int)CEndpointCharacteristics::IsInterleavedLoopbackSupported(*((CEndpointCharacteristics **)this
                                                                                  + 161)) )
      {
        v17 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
      }
      else
      {
        v17 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
      }
    }
    else
    {
      v17 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    }
    v41 = *v17;
    if ( v4 >= *((_QWORD *)this + 164) )
    {
      _o_terminate(v12);
      __debugbreak();
    }
    else
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 165) + 4 * v4) )
      {
        v23 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, v4);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             v23,
                             &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1
          && v16 != 4 )
        {
          OverridingChain = lambda_7fbb2555f01c0941137ea12a577c6f73_::operator()(&v43);
          if ( OverridingChain < 0 )
          {
            v19 = 2945LL;
            goto LABEL_22;
          }
          v9 = (unsigned __int64 *)((char *)this + 1168);
        }
        if ( v16 != 1 && v16 != 2 )
        {
          if ( v16 != 3 )
          {
            if ( v16 != 4 )
            {
              AECInsertionPolicy = -2147418113;
              v14 = 3068LL;
              goto LABEL_10;
            }
            v24 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](v9, v4);
            *(_QWORD *)v33 = v34;
            *(_QWORD *)v36 = this;
            *(struct _tagpropertykey *)&v36[8] = v42;
            *(_OWORD *)&v36[28] = *(_OWORD *)v45;
            *(_OWORD *)&v36[44] = v46;
            *(__m256i *)&v36[60] = v47;
            *(_DWORD *)&v36[92] = v48;
            v37 = *a3;
            *(_DWORD *)v38 = v4;
            *(__m256i *)&v38[8] = v43;
            *(__m256i *)&v38[40] = v44;
            v39[0] = *(_OWORD *)v36;
            v39[1] = *(_OWORD *)&v36[16];
            v39[2] = *(_OWORD *)&v36[32];
            v39[3] = *(_OWORD *)&v36[48];
            v39[4] = *(_OWORD *)((char *)v47.m256i_i64 + 4);
            v39[5] = *(_OWORD *)&v36[80];
            v39[6] = v37;
            v39[7] = *(_OWORD *)v38;
            v39[8] = *(_OWORD *)&v43.m256i_u64[1];
            v39[9] = *(_OWORD *)&v38[32];
            v39[10] = *(_OWORD *)&v44.m256i_u64[1];
            v40 = v44.m256i_i64[3];
            v35 = 0LL;
            v35 = std::_Global_new_std::_Func_impl_no_alloc__lambda_cafd355bc8518bdbec11f1f0c823a855__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_cafd355bc8518bdbec11f1f0c823a855___(v39);
            v41 = *a3;
            IsConnectorModeSupported = EffectPack::IsConnectorModeSupported(this, v4, 0, (__int64)&v41);
            v41 = *a3;
            AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(
                                   v24,
                                   (__int64)&v41,
                                   0,
                                   0LL,
                                   1u,
                                   IsConnectorModeSupported != 0,
                                   v34);
            if ( AECInsertionPolicy < 0 )
            {
              v14 = 3064LL;
              goto LABEL_10;
            }
            goto LABEL_48;
          }
          v26 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](v9, v4);
          v35 = 0LL;
          v27 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, v4);
          *(struct _GUID *)v33 = *a3;
          v28 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v27, a3);
          AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(
                                 v26,
                                 (__int64)v33,
                                 1u,
                                 (__int64)&v41,
                                 1u,
                                 v28 != -1,
                                 v34);
          if ( AECInsertionPolicy < 0 )
          {
            v14 = 2952LL;
            goto LABEL_10;
          }
LABEL_47:
          *(_OWORD *)((char *)&v47.m256i_u64[1] + 4) = *(_OWORD *)lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator()(
                                                                    &v44,
                                                                    &v41);
LABEL_48:
          v41 = *a3;
          LogAecEffectPolicyInsertion(
            *((const struct _tlgProvider_t **)this + 219),
            (const struct _AEC_POLICY_RESULTS *)v45,
            *(const unsigned __int16 **)(*((_QWORD *)this + 161) + 48LL),
            &v41,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v4);
          AECInsertionPolicy = CEndpointCharacteristics::PersistAECPolicy(
                                 *((CEndpointCharacteristics **)this + 161),
                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v4,
                                 &v42,
                                 (const struct _AEC_POLICY_RESULTS *)v45);
          if ( AECInsertionPolicy < 0 )
          {
            v14 = 3083LL;
            goto LABEL_10;
          }
          return 0LL;
        }
        v29 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](v9, v4);
        v35 = 0LL;
        *(struct _GUID *)v33 = *a3;
        OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                            v29,
                            (__int64)v33,
                            1u,
                            (__int64)&v41,
                            2u,
                            0,
                            v34);
        if ( OverridingChain < 0 )
        {
          v19 = 2958LL;
          goto LABEL_22;
        }
        v30 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, v4);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v30, a3) != -1 )
        {
          v31 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 202, v4);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v31, a3) )
          {
            AECInsertionPolicy = -2147024882;
            v14 = 2962LL;
            goto LABEL_10;
          }
          v32 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, v4);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v32, a3);
        }
LABEL_46:
        if ( (v16 & 0xFFFFFFFB) == 0 )
          goto LABEL_48;
        goto LABEL_47;
      }
      OverridingChain = lambda_7fbb2555f01c0941137ea12a577c6f73_::operator()(&v43);
      if ( OverridingChain < 0 )
      {
        v19 = 2937LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain);
        return (unsigned int)OverridingChain;
      }
    }
    v20 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 146, v4);
    v35 = 0LL;
    *(struct _GUID *)v33 = *a3;
    v21 = SystemEffectDescriptor::CreateOverridingChain(v20, (__int64)v33, 1u, (__int64)&v41, 2u, 0, v34);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7A,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v21);
      return v22;
    }
    goto LABEL_46;
  }
  return 0LL;
}
