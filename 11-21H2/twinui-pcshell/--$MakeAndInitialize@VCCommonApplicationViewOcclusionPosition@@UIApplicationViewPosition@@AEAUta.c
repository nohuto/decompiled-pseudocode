/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x1804FA308
 * Callers:
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1804FCA40 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180018FA4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewOcclusionPosition@@@Z @ 0x1800567AC (-Attach@-$ComPtr@VCCommonApplicationViewOcclusionPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonAppli.c)
 *     ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x1800567E0 (--0CCommonApplicationViewOcclusionPosition@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x1804FD4D0 (-s_GetShowCommandFromState@CCommonApplicationViewOcclusionPositionImpl@@KAIW4ARRANGEMENT_BASED_V.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagRECT &,tagRECT &,int>(
        _QWORD *a1,
        __int128 *a2,
        __int128 *a3,
        int *a4)
{
  CCommonApplicationViewOcclusionPosition *v8; // rax
  unsigned int v9; // edi
  volatile signed __int32 *v10; // rax
  int v11; // eax
  volatile signed __int32 *v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CCommonApplicationViewOcclusionPosition *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile signed __int32 *)CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(v8);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewOcclusionPosition>::Attach((volatile signed __int32 **)&v17, v10);
    v11 = *a4;
    v12 = (volatile signed __int32 *)v17;
    v13 = *a2;
    v17 = -1LL;
    *((_DWORD *)v12 + 13) = v11;
    *((_OWORD *)v12 + 1) = v13;
    *((_DWORD *)v12 + 12) = 4;
    v14 = *a3;
    *((_DWORD *)v12 + 14) = 0;
    *(_OWORD *)(v12 + 15) = 0LL;
    *(_OWORD *)(v12 + 19) = 0LL;
    *((_OWORD *)v12 + 2) = v14;
    *(_QWORD *)(v12 + 23) = 0LL;
    *((_DWORD *)v12 + 15) = 0;
    v15 = *((_OWORD *)v12 + 2);
    *(_QWORD *)(v12 + 19) = v17;
    v17 = -1LL;
    *(_QWORD *)(v12 + 17) = -1LL;
    *(_OWORD *)(v12 + 21) = v15;
    *((_DWORD *)v12 + 16) = CCommonApplicationViewOcclusionPositionImpl::s_GetShowCommandFromState();
    v9 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>>(
           (__int64)v12,
           (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v9;
}
