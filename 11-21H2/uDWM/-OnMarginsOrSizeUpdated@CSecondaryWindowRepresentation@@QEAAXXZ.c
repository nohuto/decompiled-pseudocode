/*
 * XREFs of ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002190C
 * Callers:
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18001EF48 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002130C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D62C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D6B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x1800307B0 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(
        CSecondaryWindowRepresentation *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CWindowData *v4; // rsi
  CWindowData *v6; // rdi
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r8d
  _DWORD *v11; // rdx
  struct _MARGINS v12; // xmm0
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rdi
  int v16[2]; // [rsp+30h] [rbp-28h] BYREF
  struct _MARGINS v17; // [rsp+38h] [rbp-20h] BYREF

  v4 = (CWindowData *)*((_QWORD *)this + 8);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 18) - 1;
  if ( v7 )
  {
    v14 = v7 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
        goto LABEL_3;
      if ( !CWindowData::IsImmersiveWindow(v4) )
      {
        v6 = *(CWindowData **)(*((_QWORD *)v4 + 61) + 80LL);
        goto LABEL_3;
      }
    }
    else
    {
      v15 = *((_QWORD *)v4 + 60);
      if ( v15 )
      {
        v6 = *(CWindowData **)(v15 + 32);
        goto LABEL_3;
      }
    }
  }
  v6 = v4;
LABEL_3:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_MSARTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    1u,
    v8,
    v9);
  if ( !*((_BYTE *)this + 417) )
  {
    LOBYTE(v10) = *((_QWORD *)this + 6) != 0LL;
    if ( (unsigned __int8)CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
                            (int)v6,
                            *((_DWORD *)this + 10),
                            v10,
                            (int)v16,
                            &v17) )
    {
      if ( v16[0] != *((_DWORD *)this + 20)
        || v16[1] != *((_DWORD *)this + 21)
        || *((_DWORD *)this + 22) != v17.cxLeftWidth
        || *((_DWORD *)this + 23) != v17.cxRightWidth
        || *((_DWORD *)this + 24) != v17.cyTopHeight
        || *((_DWORD *)this + 25) != v17.cyBottomHeight
        || (v11 = (_DWORD *)*((_QWORD *)v6 + 55), *((_DWORD *)this + 26) != v11[157])
        || *((_DWORD *)this + 27) != v11[158]
        || *((_DWORD *)this + 28) != v11[159]
        || *((_DWORD *)this + 29) != v11[160] )
      {
        v12 = v17;
        v13 = *((_QWORD *)this + 21);
        *((_QWORD *)this + 10) = *(_QWORD *)v16;
        *(struct _MARGINS *)((char *)this + 88) = v12;
        *(_OWORD *)((char *)this + 104) = *(_OWORD *)(*((_QWORD *)v6 + 55) + 628LL);
        (*(void (__fastcall **)(__int64, CSecondaryWindowRepresentation *))(*(_QWORD *)v13 + 8LL))(v13, this);
      }
    }
  }
}
