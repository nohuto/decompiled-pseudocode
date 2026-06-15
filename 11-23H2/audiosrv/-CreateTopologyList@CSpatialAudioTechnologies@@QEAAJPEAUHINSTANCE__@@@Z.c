/*
 * XREFs of ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180021A10
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18002146C (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180005768 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CADC (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CBD0 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CCB4 (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CD70 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CE2C (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CF10 (--0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DtsxHdmiEnabled@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061B9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DtsxHdmiEnabled@@@details@wil@@QEAAX_NW4R.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18006567C (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180065D00 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CSpatialAudioTechnologies::CreateTopologyList(CSpatialAudioTechnologies *this, HINSTANCE a2)
{
  unsigned int v2; // edi
  char v3; // bl
  __int64 v4; // rcx
  CSpatialAudioMSHRTF *v6; // rax
  CSpatialAudioMSHRTF *v7; // rcx
  CSpatialAudioDolbyHeadphones *v8; // rax
  CSpatialAudioDolbyHeadphones *v9; // rcx
  CSpatialAudioDolbyStereo *v10; // rax
  CSpatialAudioDolbyStereo *v11; // rcx
  CSpatialAudioDolbyAtmosMAT *v12; // rax
  CSpatialAudioDolbyAtmosMAT *v13; // rcx
  CSpatialAudioDtsxHeadphones *v14; // rax
  CSpatialAudioDtsxHeadphones *v15; // rcx
  CSpatialAudioDtsxStereo *v16; // rax
  __int64 v17; // rdx
  CSpatialAudioDtsxStereo *v18; // rcx
  struct wil::details::IFunctorHost *v19; // r8
  _QWORD v20[2]; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-29h] BYREF
  DiagnosticsInfo v22; // [rsp+48h] [rbp-19h] BYREF
  const char *v23; // [rsp+50h] [rbp-11h]
  __int64 v24; // [rsp+58h] [rbp-9h]
  __int16 v25; // [rsp+60h] [rbp-1h]
  char v26[8]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v27; // [rsp+70h] [rbp+Fh]
  int v28; // [rsp+7Ch] [rbp+1Bh]
  DiagnosticsInfo retaddr; // [rsp+C0h] [rbp+5Fh]
  HINSTANCE v30; // [rsp+D0h] [rbp+6Fh] BYREF
  CSpatialAudioMSHRTF *v31; // [rsp+D8h] [rbp+77h]

  v30 = a2;
  v2 = -2147024882;
  EnterCriticalSection(&CriticalSection);
  if ( ++dword_1801D0128 == 1 )
  {
    v6 = (CSpatialAudioMSHRTF *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v6;
    if ( v6 )
      v7 = CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(v6, v30);
    else
      v7 = 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v7;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v8 = (CSpatialAudioDolbyHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v8;
    v9 = v8 ? CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(v8, v30) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v9;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v10 = (CSpatialAudioDolbyStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v10;
    v11 = v10 ? CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(v10, v30) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v11;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v12 = (CSpatialAudioDolbyAtmosMAT *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v12;
    v13 = v12 ? CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(v12, v30) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v13;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v14 = (CSpatialAudioDtsxHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v14;
    v15 = v14 ? CSpatialAudioDtsxHeadphones::CSpatialAudioDtsxHeadphones(v14, v30) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v15;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8]
      || ((++g_ListOfSpatialTech[0],
           v16 = (CSpatialAudioDtsxStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow),
           (v31 = v16) == 0LL)
        ? (v18 = 0LL)
        : (v18 = CSpatialAudioDtsxStereo::CSpatialAudioDtsxStereo(v16, v30)),
          (*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v18) == 0LL) )
    {
LABEL_28:
      LeaveCriticalSection(&CriticalSection);
LABEL_29:
      CSpatialAudioTechnologies::FreeTopologyList((CSpatialAudioTechnologies *)v4);
      return v2;
    }
    ++g_ListOfSpatialTech[0];
    v20[0] = g_ListOfSpatialTech;
    v20[1] = &v30;
    v22 = retaddr;
    v23 = "avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialproviders.cpp";
    v24 = 0LL;
    v25 = 1731;
    LOBYTE(v17) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DtsxHdmiEnabled>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DtsxHdmiEnabled>::GetImpl'::`2'::impl,
      v17);
    v21[0] = &off_18017D6A0;
    v21[1] = v20;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v26, 0x166D82Fu, &v22);
    wil::details::RunFunctor((wil::details *)v21, (struct wil::details::IFunctor *)v26, v19);
    if ( v27 )
      *(_DWORD *)(v27 + 16) = v28;
  }
  v3 = g_ListOfSpatialTech[0];
  LeaveCriticalSection(&CriticalSection);
  v4 = 0LL;
  if ( !v3 )
    v4 = 2147942414LL;
  v2 = v4;
  if ( !v3 )
    goto LABEL_29;
  return v2;
}
