/*
 * XREFs of ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18003CEE4
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002BDD0 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180052930 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     _lambda_508286948f9241bf53db8f8ecb0f45ed_::operator() @ 0x180074498 (_lambda_508286948f9241bf53db8f8ecb0f45ed_--operator().c)
 *     _lambda_abb61ebb95f9f74c760f57157f67c392_::operator() @ 0x180074E28 (_lambda_abb61ebb95f9f74c760f57157f67c392_--operator().c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180157560 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 * Callees:
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800295A0 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18003CE44 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetDefaultEffectChainClsids(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  __int64 v8; // rdx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rbx
  const void **v13; // rbx
  unsigned int *v14; // rdi
  __int64 v15; // rdx
  const void *v16; // rdx
  struct _GUID *v17; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a2);
  *a3 = 0;
  v8 = *((_QWORD *)this + 2);
  if ( !v8 )
    return 0LL;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=((__int64)a2, v8);
  v10 = *((_QWORD *)this + 2);
  v11 = *(_DWORD *)(v10 + 8);
  if ( *((_DWORD *)a2 + 2) == v11 )
  {
    v12 = 40LL;
    if ( v11 <= 0 )
      v12 = 56LL;
    v13 = (const void **)(v10 + v12);
    v14 = (unsigned int *)(v13 + 1);
    if ( !a4 )
      goto LABEL_7;
    v15 = (int)*v14;
    pv = 0LL;
    if ( ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(&pv, v15) )
    {
      v16 = *v13;
      v17 = (struct _GUID *)pv;
      memcpy_0(pv, v16, 16LL * (int)*v14);
      *a4 = v17;
      CoTaskMemFree(0LL);
LABEL_7:
      *a3 = *v14;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    CoTaskMemFree(pv);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
  }
  return 2147942414LL;
}
