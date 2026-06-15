/*
 * XREFs of ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800107D0
 * Callers:
 *     _lambda_7ba40230144b56f0afba59e141973f96_::operator() @ 0x180068A90 (_lambda_7ba40230144b56f0afba59e141973f96_--operator().c)
 *     _lambda_e6f097a164894528a3d2285fefe0cca7_::operator() @ 0x180069720 (_lambda_e6f097a164894528a3d2285fefe0cca7_--operator().c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18014FFA0 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSy.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18015017C (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800483F0 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18014EF90 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetDefaultEffectChainClsids(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  struct _GUID *v13; // rbx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a2);
  *a3 = 0;
  if ( !*((_QWORD *)this + 2) )
    return 0LL;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a2);
  v9 = *((_QWORD *)this + 2);
  v10 = *(_DWORD *)(v9 + 8);
  if ( *((_DWORD *)a2 + 2) == v10 )
  {
    v11 = 40LL;
    if ( v10 <= 0 )
      v11 = 56LL;
    if ( !a4 )
      goto LABEL_7;
    v12 = *(int *)(v11 + v9 + 8);
    pv = 0LL;
    if ( (unsigned __int8)ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(&pv, v12) )
    {
      v13 = (struct _GUID *)pv;
      memcpy_0(pv, *(const void **)(v11 + v9), 16LL * *(int *)(v11 + v9 + 8));
      *a4 = v13;
      CoTaskMemFree(0LL);
LABEL_7:
      *a3 = *(_DWORD *)(v11 + v9 + 8);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v14);
    CoTaskMemFree(pv);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v14);
  }
  return 2147942414LL;
}
