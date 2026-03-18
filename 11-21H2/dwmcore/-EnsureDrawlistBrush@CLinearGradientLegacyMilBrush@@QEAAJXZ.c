/*
 * XREFs of ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1802087CC
 * Callers:
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18020827C (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x180040E2C (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??$_Emplace_reallocate@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAPEAPEAVCColorGradientStop@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1800413BC (--$_Emplace_reallocate@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PE.c)
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x180043988 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1802081AC (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 *     ??4?$com_ptr_t@VCLinearGradientBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCLinearGradientBrush@@@Z @ 0x180208214 (--4-$com_ptr_t@VCLinearGradientBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCLinearGr.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(CLinearGradientLegacyMilBrush *this)
{
  __int64 *v1; // rsi
  unsigned int v3; // edi
  CLinearGradientBrush *v4; // rax
  CLinearGradientBrush *v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct CResource ***v20; // r14
  void *v21; // rsi
  gsl::details *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-30h]
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF

  v1 = (__int64 *)((char *)this + 264);
  v3 = 0;
  if ( *((_QWORD *)this + 33) )
    return v3;
  v4 = (CLinearGradientBrush *)DefaultHeap::AllocClear(0x120uLL);
  if ( v4 )
    v5 = CLinearGradientBrush::CLinearGradientBrush(v4, *((struct CComposition **)this + 2));
  else
    v5 = 0LL;
  wil::com_ptr_t<CLinearGradientBrush,wil::err_returncode_policy>::operator=(v1, (__int64)v5);
  if ( !*v1 )
  {
    v23 = 116;
LABEL_17:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024882, v23);
    v12 = *v1;
    *v1 = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = *((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = *((_QWORD *)this + 35);
    *((_QWORD *)this + 35) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    return v3;
  }
  v7 = DefaultHeap::AllocClear(0x58uLL);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 2);
    v7[2] = 0;
    *((_QWORD *)v7 + 2) = v8;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    v7[8] = 0;
    *(_QWORD *)v7 = &CColorGradientStop::`vftable';
    *((_QWORD *)v7 + 8) = 0LL;
    *((_QWORD *)v7 + 9) = 0LL;
    v7[20] = 0;
  }
  else
  {
    v7 = 0LL;
  }
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 34, (__int64)v7);
  if ( !*((_QWORD *)this + 34) )
  {
    v23 = 118;
    goto LABEL_17;
  }
  v9 = DefaultHeap::AllocClear(0x58uLL);
  if ( v9 )
  {
    v10 = *((_QWORD *)this + 2);
    v9[2] = 0;
    *((_QWORD *)v9 + 2) = v10;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 5) = 0LL;
    v9[8] = 0;
    *(_QWORD *)v9 = &CColorGradientStop::`vftable';
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    v9[20] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v11 = (__int64 *)((char *)this + 280);
  wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 35, (__int64)v9);
  if ( !*((_QWORD *)this + 35) )
  {
    v23 = 120;
    goto LABEL_17;
  }
  v26 = *((_QWORD *)this + 34);
  v25 = 0LL;
  v24 = 0LL;
  std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v24, 0LL, &v26);
  v16 = *((_QWORD *)&v24 + 1);
  v17 = v25;
  v18 = *v11;
  v26 = *v11;
  if ( *((_QWORD *)&v24 + 1) == v25 )
  {
    std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v24, *((_BYTE **)&v24 + 1), &v26);
    v19 = *((_QWORD *)&v24 + 1);
    v17 = v25;
  }
  else
  {
    **((_QWORD **)&v24 + 1) = v18;
    v19 = v16 + 8;
  }
  v20 = (struct CResource ***)*v1;
  v21 = (void *)v24;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v24, (int)((v19 - (__int64)v24) >> 3));
  *((_QWORD *)&v24 + 1) = v21;
  if ( (_QWORD)v24 == -1LL || !v21 && (_QWORD)v24 )
  {
    gsl::details::terminate(v22);
    JUMPOUT(0x180208A7BLL);
  }
  CGradientBrush::SetStops(v20, (__int64 *)&v24, 0);
  if ( v21 )
    std::_Deallocate<16,0>(v21, (v17 - (_QWORD)v21) & 0xFFFFFFFFFFFFFFF8uLL);
  return v3;
}
