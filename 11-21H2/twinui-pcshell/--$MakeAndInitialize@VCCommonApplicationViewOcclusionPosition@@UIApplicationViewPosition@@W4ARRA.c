/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1804FA420
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1804FA524 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1804FA524.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180018FA4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x1800567AC (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x1800567E0 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x1804FD4D0 (-s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_V.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
        _QWORD *a1,
        int *a2,
        __int128 *a3)
{
  CCommonApplicationViewOcclusionPosition *v6; // rax
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rax
  int v9; // ecx
  volatile signed __int32 *v10; // rbx
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (volatile signed __int32 *)CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v6);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach((volatile signed __int32 **)&v14, v8);
    v9 = *a2;
    v10 = (volatile signed __int32 *)v14;
    v14 = -1LL;
    *((_DWORD *)v10 + 13) = 0;
    *((_OWORD *)v10 + 1) = 0LL;
    *((_DWORD *)v10 + 12) = v9;
    v11 = *a3;
    *((_DWORD *)v10 + 14) = 0;
    *(_OWORD *)(v10 + 15) = 0LL;
    *(_OWORD *)(v10 + 19) = 0LL;
    *((_OWORD *)v10 + 2) = v11;
    *(_QWORD *)(v10 + 23) = 0LL;
    *((_DWORD *)v10 + 15) = 0;
    v12 = *((_OWORD *)v10 + 2);
    *(_QWORD *)(v10 + 19) = v14;
    v14 = -1LL;
    *(_QWORD *)(v10 + 17) = -1LL;
    *(_OWORD *)(v10 + 21) = v12;
    *((_DWORD *)v10 + 16) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState();
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>>(
           (__int64)v10,
           (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
