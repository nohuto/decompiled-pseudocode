/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x180066804
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006B800 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??0CDecodeBitmap@@QEAA@XZ @ 0x180014730 (--0CDecodeBitmap@@QEAA@XZ.c)
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180016038 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180066C1C (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x180066F98 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E3A9C (--$_Resize@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_REALIZATION_.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ??4?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180104B40 (--4-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?swap@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV12@@Z @ 0x180104E68 (-swap@-$vector@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 *     ??$?8VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x180247F74 (--$-8VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VISwapChainRe.c)
 *     ??1?$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180248110 (--1-$com_ptr_t@VCDecodeBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@QEAA@XZ @ 0x180248130 (--1-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180248184 (--1-$vector@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        unsigned int a3)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // r12d
  __int64 v10; // r13
  struct ISwapChainRealization *v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  CDecodeBitmap *v14; // rax
  unsigned int v15; // ecx
  CDecodeBitmap *v16; // rdi
  CDecodeBitmap *v17; // rax
  CDecodeBitmap *v18; // rdi
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  char *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int i; // edi
  void *v27; // rcx
  unsigned __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h] BYREF
  __int128 v31; // [rsp+40h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-28h]
  __int128 v33; // [rsp+58h] [rbp-20h] BYREF
  __int64 v34; // [rsp+68h] [rbp-10h]
  bool v35; // [rsp+C0h] [rbp+48h]
  unsigned int v37; // [rsp+D0h] [rbp+58h] BYREF
  struct ISwapChainRealization *v38; // [rsp+D8h] [rbp+60h] BYREF

  v37 = a3;
  v35 = 1;
  v32 = 0LL;
  v4 = 0;
  v31 = 0LL;
  std::vector<CSM_REALIZATION_INFO>::_Resize<std::_Value_init_tag>(&v31, a3);
  v34 = 0LL;
  v33 = 0LL;
  std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::swap(&v33, (char *)this + 80);
  v5 = *(_QWORD *)this;
  v6 = v31;
  *((_BYTE *)this + 104) = 0;
  v29 = 0LL;
  v7 = NtOpenCompositionSurfaceRealizationInfo(*(_QWORD *)(v5 + 32), (char *)this + 24, &v37, v6);
  if ( v7 < 0 )
  {
    v4 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1803464F0, 4u, v7 | 0x10000000, 0x4DBu, 0LL);
    goto LABEL_38;
  }
  if ( v37 <= 1 && *((_DWORD *)this + 9) != 3 )
  {
    v35 = 0;
LABEL_6:
    v9 = 0;
    if ( v37 )
    {
      v10 = v33;
      do
      {
        v11 = 0LL;
        v38 = 0LL;
        v12 = v6 + 40LL * v9;
        if ( *(_QWORD *)(v12 + 24) )
        {
          v13 = (*((_QWORD *)&v33 + 1) - v10) >> 3;
          while ( v29 < v13 )
          {
            v21 = *(_QWORD *)(v10 + 8 * v29);
            *(_QWORD *)(v10 + 8 * v29++) = 0LL;
            v30 = v21;
            if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 176LL))(v21) == *(_QWORD *)(v12 + 24) )
            {
              wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::operator=(&v38, &v30);
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
                McTemplateU0x_EventWriteTransfer(v22, &CompSurfInfo_ReuseRealization, *(_QWORD *)(v12 + 24));
              v11 = v38;
              (*(void (__fastcall **)(struct ISwapChainRealization *, __int64))(*(_QWORD *)v38 + 8LL))(v38, v12);
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
              break;
            }
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
          }
          v6 = v31;
        }
        if ( (unsigned __int8)wil::operator==<ISwapChainRealization,wil::err_returncode_policy>(&v38) )
        {
          v38 = 0LL;
          if ( v11 )
          {
            v23 = (char *)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v23 + 16LL))(v23);
          }
          v24 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(
                  this,
                  a2,
                  (const struct CSM_REALIZATION_INFO *)v12,
                  v35,
                  &v38);
          v4 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_1803464F0, 4u, v24, 0x519u, 0LL);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v38);
            goto LABEL_34;
          }
          *(_QWORD *)(v12 + 8) = 0LL;
          v11 = v38;
        }
        CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(this, v11);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v38);
        ++v9;
      }
      while ( v9 < v37 );
    }
    if ( v37 > 1 )
      CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(this);
    goto LABEL_34;
  }
  if ( *((_QWORD *)this + 1) )
    goto LABEL_6;
  *((_QWORD *)this + 1) = 0LL;
  v14 = (CDecodeBitmap *)operator new(0x108uLL);
  v16 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x108uLL);
    v17 = CDecodeBitmap::CDecodeBitmap(v16);
    v18 = v17;
    if ( v17 )
    {
      CMILRefCountImpl::AddReference((CDecodeBitmap *)((char *)v17 + 8));
      goto LABEL_16;
    }
  }
  else
  {
    v18 = 0LL;
  }
  v4 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x13u, 0LL);
LABEL_16:
  v38 = 0LL;
  *((_QWORD *)this + 1) = v18;
  wil::com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>::~com_ptr_t<CDecodeBitmap,wil::err_returncode_policy>(&v38);
  if ( v4 >= 0 )
    goto LABEL_6;
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v4, 0x623u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1803464F0, 4u, v4, 0x4E2u, 0LL);
LABEL_34:
  for ( i = 0; i < v37; ++i )
  {
    v27 = *(void **)(v6 + 40LL * i + 8);
    if ( v27 )
      CloseHandle(v27);
  }
LABEL_38:
  std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>(&v33);
  std::vector<CSM_REALIZATION_INFO>::~vector<CSM_REALIZATION_INFO>(&v31);
  return (unsigned int)v4;
}
