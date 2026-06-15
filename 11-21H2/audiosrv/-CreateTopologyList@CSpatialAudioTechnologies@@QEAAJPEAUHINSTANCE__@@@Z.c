/*
 * XREFs of ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004F4BC
 * Callers:
 *     ?Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18004EF4C (-Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004F174 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004F258 (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004F314 (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004F400 (--0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DtsxHdmiEnabled@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004F74C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DtsxHdmiEnabled@@@details@wil@@QEAAX_NW4R.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800506D4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180050744 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18005439C (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180057A28 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180057B00 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x18013F82C (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CSpatialAudioTechnologies::CreateTopologyList(CSpatialAudioTechnologies *this, HINSTANCE a2)
{
  unsigned int v2; // edi
  CSpatialAudioMSHRTF *v3; // rax
  CSpatialAudioMSHRTF *v4; // rcx
  CSpatialAudioDolbyHeadphones *v5; // rax
  CSpatialAudioDolbyHeadphones *v6; // rcx
  CSpatialAudioDolbyStereo *v7; // rax
  CSpatialAudioDolbyStereo *v8; // rcx
  CSpatialAudioDolbyAtmosMAT *v9; // rax
  CSpatialAudioDolbyAtmosMAT *v10; // rcx
  CSpatialAudioDtsxHeadphones *v11; // rax
  CSpatialAudioDtsxHeadphones *v12; // rcx
  CSpatialAudioDtsxStereo *v13; // rax
  __int64 v14; // rdx
  CSpatialAudioDtsxStereo *v15; // rcx
  char v16; // bl
  __int64 v17; // rcx
  struct wil::details::IFunctorHost *v19; // r8
  _QWORD v20[2]; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-29h] BYREF
  struct DiagnosticsInfo v22; // [rsp+48h] [rbp-19h] BYREF
  const char *v23; // [rsp+50h] [rbp-11h]
  __int64 v24; // [rsp+58h] [rbp-9h]
  __int16 v25; // [rsp+60h] [rbp-1h]
  char v26[8]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v27; // [rsp+70h] [rbp+Fh]
  int v28; // [rsp+7Ch] [rbp+1Bh]
  struct DiagnosticsInfo retaddr; // [rsp+C0h] [rbp+5Fh]
  HINSTANCE v30; // [rsp+D0h] [rbp+6Fh] BYREF
  CSpatialAudioMSHRTF *v31; // [rsp+D8h] [rbp+77h]

  v30 = a2;
  v2 = -2147024882;
  CSpatialAudioTechnologies::RegistryGates();
  EnterCriticalSection(&CriticalSection);
  if ( ++dword_1801C2E08 == 1 )
  {
    v3 = (CSpatialAudioMSHRTF *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v3;
    if ( v3 )
      v4 = CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(v3, v30);
    else
      v4 = 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v4;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v5 = (CSpatialAudioDolbyHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v5;
    v6 = v5 ? CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(v5, v30) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v6;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v7 = (CSpatialAudioDolbyStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v7;
    v8 = v7 ? CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(v7, v30) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v8;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v9 = (CSpatialAudioDolbyAtmosMAT *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v9;
    v10 = v9 ? CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(v9, v30) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v10;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v11 = (CSpatialAudioDtsxHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v11;
    v12 = v11 ? CSpatialAudioDtsxHeadphones::CSpatialAudioDtsxHeadphones(v11, v30) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v12;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8]
      || ((++g_ListOfSpatialTech[0],
           v13 = (CSpatialAudioDtsxStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow),
           (v31 = v13) == 0LL)
        ? (v15 = 0LL)
        : (v15 = CSpatialAudioDtsxStereo::CSpatialAudioDtsxStereo(v13, v30)),
          (*(_QWORD *)&g_ListOfSpatialTech[8 * (unsigned __int8)g_ListOfSpatialTech[0] + 8] = v15) == 0LL) )
    {
LABEL_28:
      LeaveCriticalSection(&CriticalSection);
LABEL_26:
      CSpatialAudioTechnologies::FreeTopologyList((CSpatialAudioTechnologies *)v17);
      return v2;
    }
    ++g_ListOfSpatialTech[0];
    v20[0] = g_ListOfSpatialTech;
    v20[1] = &v30;
    v22 = retaddr;
    v23 = "avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialproviders.cpp";
    v24 = 0LL;
    v25 = 1737;
    LOBYTE(v14) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DtsxHdmiEnabled>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DtsxHdmiEnabled>::GetImpl'::`2'::impl,
      v14);
    v21[0] = off_1801784A0;
    v21[1] = v20;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v26, 0x166D82Fu, &v22);
    wil::details::RunFunctor((wil::details *)v21, (struct wil::details::IFunctor *)v26, v19);
    if ( v27 )
      *(_DWORD *)(v27 + 16) = v28;
  }
  v16 = g_ListOfSpatialTech[0];
  LeaveCriticalSection(&CriticalSection);
  v17 = 0LL;
  if ( !v16 )
    v17 = 2147942414LL;
  v2 = v17;
  if ( !v16 )
    goto LABEL_26;
  return v2;
}
