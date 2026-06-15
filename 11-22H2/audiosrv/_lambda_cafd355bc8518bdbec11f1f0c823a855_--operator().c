/*
 * XREFs of _lambda_cafd355bc8518bdbec11f1f0c823a855_::operator() @ 0x180075148
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cafd355bc8518bdbec11f1f0c823a855__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180075840 (std--_Func_impl_no_alloc__lambda_cafd355bc8518bdbec11f1f0c823a855__long_SystemEffec_ea_180075840.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18002CDB8 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005352C (-LogAecEffectPolicyInsertion@@YAXPEBU_tlgProvider_t@@AEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MI.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x1800545B4 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x180055350 (_lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_--operator().c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _lambda_7fbb2555f01c0941137ea12a577c6f73_::operator() @ 0x1800746B0 (_lambda_7fbb2555f01c0941137ea12a577c6f73_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ @ 0x18014E204 (-IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18014EB0C (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801575B0 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 */

__int64 __fastcall lambda_cafd355bc8518bdbec11f1f0c823a855_::operator()(
        __int64 *a1,
        int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  __int64 v4; // rax
  int DelayedAECInsertionPolicy; // ebx
  struct _AEC_POLICY_RESULTS *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  struct EffectPack *v10; // rcx
  int v11; // ebx
  GUID *v12; // rax
  unsigned __int64 v13; // rdx
  __int64 *v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  int v18; // ebx
  int v19; // ebx
  unsigned __int64 v20; // rdi
  __int64 *v21; // rax
  int v22; // eax
  struct EffectPack *v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct EffectPack *v27; // rbx
  unsigned __int64 *v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  struct _GUID *v33; // rax
  struct EffectPack *v34; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v35; // edi
  struct _GUID v36; // xmm0
  int v37[2]; // [rsp+30h] [rbp-50h] BYREF
  struct CAudioSignalProcessingModeArray *v38; // [rsp+38h] [rbp-48h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-40h] BYREF
  struct _AEC_POLICY_RESULTS *v40; // [rsp+50h] [rbp-30h]
  struct _GUID v41; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v38 = a3;
  v40 = 0LL;
  v4 = *a1;
  *(_OWORD *)pvar = 0LL;
  DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, __int64 *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)(v4 + 1288) + 72LL)
                                                                                          + 40LL))(
                                *(_QWORD *)(*(_QWORD *)(v4 + 1288) + 72LL),
                                a1 + 1,
                                pvar);
  if ( DelayedAECInsertionPolicy < 0 )
    goto LABEL_36;
  v7 = v40;
  if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 68 || *(_DWORD *)v40 != 5 )
    goto LABEL_35;
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 1288);
  v10 = (struct EffectPack *)*a1;
  v41 = (struct _GUID)*((_OWORD *)a1 + 6);
  DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                v10,
                                *(struct IPropertyStore **)(v9 + 72),
                                (struct SystemEffectDescriptor *)a2,
                                &v41,
                                (enum INBOX_AEC_INSERTION_POLICY *)v37,
                                v40);
  if ( DelayedAECInsertionPolicy < 0 )
  {
LABEL_6:
    PropVariantClear(pvar);
    goto LABEL_36;
  }
  v11 = v37[0];
  if ( v37[0] == 2 )
  {
    if ( *((_DWORD *)a1 + 28) != 3
      || (unsigned int)CEndpointCharacteristics::IsInterleavedLoopbackSupported(*(CEndpointCharacteristics **)(v8 + 1288)) )
    {
      v12 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    }
    else
    {
      v12 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
    }
  }
  else
  {
    v12 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
  }
  v13 = *((int *)a1 + 28);
  v41 = *v12;
  v14 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(v8 + 1392), v13);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v14,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
  {
    if ( !v11 )
      goto LABEL_33;
    v15 = lambda_7fbb2555f01c0941137ea12a577c6f73_::operator()((int *)a1 + 30);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBF8,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
  }
  if ( v11 )
  {
    v18 = v11 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          v20 = *((int *)a1 + 28);
          *(_QWORD *)v37 = *a1 + 1392;
          v21 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](*(unsigned __int64 **)v37, v20);
          v22 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v21, a1 + 12);
          DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                        (SystemEffectDescriptor *)a2,
                                        v38,
                                        1u,
                                        (__int64)&v41,
                                        1u,
                                        v22 != -1);
          if ( DelayedAECInsertionPolicy < 0 )
            goto LABEL_6;
          v23 = (struct EffectPack *)*a1;
          v24 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                             (unsigned __int64 *)(*a1 + 1616),
                             v20);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v24, a1 + 12) != -1 )
          {
            v25 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](*(unsigned __int64 **)v37, v20);
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v25, (_OWORD *)a1 + 6) )
            {
LABEL_24:
              DelayedAECInsertionPolicy = -2147024882;
              goto LABEL_36;
            }
            v26 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v23 + 202, v20);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v26, a1 + 12);
          }
          goto LABEL_33;
        }
LABEL_35:
        PropVariantClear(pvar);
        DelayedAECInsertionPolicy = -2147418113;
        goto LABEL_36;
      }
    }
    DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                  (SystemEffectDescriptor *)a2,
                                  v38,
                                  1u,
                                  (__int64)&v41,
                                  2u,
                                  0);
    if ( DelayedAECInsertionPolicy < 0 )
      goto LABEL_6;
    v27 = (struct EffectPack *)*a1;
    v28 = (unsigned __int64 *)(*a1 + 1392);
    v29 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v28, a2[12]);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v29, a1 + 12) != -1 )
    {
      v30 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)v27 + 202, *((int *)a1 + 28));
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v30, (_OWORD *)a1 + 6) )
        goto LABEL_24;
      v31 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v28, a2[12]);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v31, a1 + 12);
    }
    if ( *((_DWORD *)v7 + 16) == 8 )
    {
      v32 = *((_DWORD *)v27 + 436);
      if ( v32 )
      {
        *((_DWORD *)v27 + 436) = v32 - 1;
        *((_DWORD *)v38 + 4) = 1;
      }
    }
  }
LABEL_33:
  v33 = lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator()((__int64)(a1 + 19), &v41);
  v34 = (struct EffectPack *)*a1;
  v35 = *((_DWORD *)a1 + 28);
  v36 = *v33;
  v41 = (struct _GUID)*((_OWORD *)a1 + 6);
  *(struct _GUID *)((char *)v7 + 44) = v36;
  LogAecEffectPolicyInsertion(
    *((const struct _tlgProvider_t **)v34 + 219),
    v7,
    *(const unsigned __int16 **)(*((_QWORD *)v34 + 161) + 48LL),
    &v41,
    v35);
  DelayedAECInsertionPolicy = CEndpointCharacteristics::PersistAECPolicy(
                                *((CEndpointCharacteristics **)v34 + 161),
                                v35,
                                (const struct _tagpropertykey *)(a1 + 1),
                                v7);
  PropVariantClear(pvar);
  if ( DelayedAECInsertionPolicy >= 0 )
    return 0LL;
LABEL_36:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBF8,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DelayedAECInsertionPolicy);
  return (unsigned int)DelayedAECInsertionPolicy;
}
