/*
 * XREFs of ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180048800
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x180047A10 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049EB8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x18004B068 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C9494 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C9554 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800F1588 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x1800F1700 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAAPEAPEAVCRenderTarget@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800F9620 (--$_Emplace_reallocate@AEBQEAVCRenderTarget@@@-$vector@PEAVCRenderTarget@@V-$allocator@PEAVCRend.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memmove_0 @ 0x18011B674 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CRenderTargetManager::CheckOcclusionState(CRenderTargetManager *this)
{
  struct CRenderTarget **v1; // rsi
  struct CRenderTarget **v2; // rbx
  __int64 v3; // r13
  __int64 v5; // rcx
  CVisualGroup ***v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rbx
  int v9; // esi
  CVisualGroup *v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // r14d
  struct CRenderTarget **v15; // r14
  struct CRenderTarget **i; // rbx
  __int64 *v17; // r14
  __int64 *j; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // r14
  CVisualGroup **v23; // rbx
  __int64 v24; // rcx
  CVisualGroup **v25; // r15
  CVisualGroup **k; // rbx
  CVisualGroup *v27; // rcx
  __int64 v28; // rdx
  CVisualGroup *v29; // rcx
  CVisualGroup *v30; // r14
  size_t v31; // r8
  char *v32; // rcx
  CVisualGroup **v33; // rbx
  void *v34; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-28h]
  CVisualGroup *v36; // [rsp+40h] [rbp-20h] BYREF

  v1 = (struct CRenderTarget **)*((_QWORD *)this + 5);
  v2 = (struct CRenderTarget **)*((_QWORD *)this + 4);
  v3 = 0LL;
  v35 = 0;
  while ( v2 != v1 )
    CRenderTargetManager::AddRenderTarget(this, *v2++);
  v5 = 0LL;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 62);
  *((_QWORD *)this + 71) = v5;
  *((_BYTE *)this + 581) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
  v6 = (CVisualGroup ***)((char *)this + 8);
  *((_BYTE *)this + 576) = 1;
  v7 = *((_QWORD *)this + 2);
  v8 = *((_QWORD *)this + 1);
  if ( v8 != v7 )
  {
    v9 = 0;
    do
    {
      v10 = *(CVisualGroup **)v8;
      v11 = *(_QWORD *)v8 + *(int *)(*(_QWORD *)(*(_QWORD *)v8 + 80LL) + 12LL) + 80LL;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
      v14 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x32u, 0LL);
        if ( v9 >= 0 )
          v9 = v14;
      }
      else if ( v12 == 142213121 )
      {
        v34 = 0LL;
        if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v10, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v34) >= 0 )
          v3 ^= (unsigned __int64)v10;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
      }
      else
      {
        *((_BYTE *)this + 581) = 0;
      }
      v8 += 8LL;
    }
    while ( v8 != v7 );
    v35 = v9;
    v6 = (CVisualGroup ***)((char *)this + 8);
  }
  *((_BYTE *)this + 576) = 0;
  v15 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  for ( i = (struct CRenderTarget **)*((_QWORD *)this + 7); i != v15; ++i )
    CRenderTargetManager::RemoveRenderTarget(this, *i);
  v17 = (__int64 *)*((_QWORD *)this + 8);
  for ( j = (__int64 *)*((_QWORD *)this + 7); j != v17; ++j )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(j);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  v19 = *(_QWORD *)this;
  v20 = *(_QWORD *)(*(_QWORD *)this + 216LL);
  v21 = (!*(_BYTE *)(v20 + 581) || *(_BYTE *)(v20 + 582))
     && (*(_DWORD *)(v19 + 1228) || CSuperWetInkManager::HasActiveInk(*(CSuperWetInkManager **)(v19 + 256)));
  if ( v21 != *((_BYTE *)this + 583) )
  {
    *((_BYTE *)this + 576) = 1;
    v25 = v6[1];
    for ( k = *v6; k != v25; ++k )
    {
      v27 = *k;
      v34 = 0LL;
      if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v27, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v34) >= 0 )
      {
        LOBYTE(v28) = v21;
        (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v34 + 112LL))(v34, v28);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
    }
    CRenderTargetManager::EndTargetEnumeration(this);
    *((_BYTE *)this + 583) = v21;
  }
  if ( *((_BYTE *)this + 578) || *((_BYTE *)this + 579) )
  {
    v23 = *v6;
    if ( (unsigned __int64)(v6[1] - *v6) > 1 )
    {
      while ( v23 != *((CVisualGroup ***)this + 2) )
      {
        v29 = *v23;
        v34 = 0LL;
        if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(v29, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v34) >= 0
          && (**(unsigned __int8 (__fastcall ***)(void *))v34)(v34) )
        {
          if ( v23 != *v6 )
          {
            v30 = *v23;
            v31 = *((_QWORD *)this + 2) - (_QWORD)(v23 + 1);
            v36 = *v23;
            memmove_0(v23, v23 + 1, v31);
            *((_QWORD *)this + 2) -= 8LL;
            v32 = (char *)v6[1];
            v33 = *v6;
            if ( v32 == (char *)v6[2] )
            {
              std::vector<CRenderTarget *>::_Emplace_reallocate<CRenderTarget * const &>(v6, *v6, &v36);
            }
            else if ( v33 == (CVisualGroup **)v32 )
            {
              *(_QWORD *)v32 = v30;
              ++v6[1];
            }
            else
            {
              *(_QWORD *)v32 = *((_QWORD *)v32 - 1);
              ++v6[1];
              memmove_0(v33 + 1, v33, v32 - (char *)v33 - 8);
              *v33 = v30;
            }
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
          break;
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
        ++v23;
      }
    }
    v24 = *(_QWORD *)(*(_QWORD *)this + 488LL);
    if ( v24 )
      *(_BYTE *)(v24 + 16) = 1;
    *((_BYTE *)this + 579) = 0;
  }
  if ( v3 != *((_QWORD *)this + 67) )
  {
    *((_QWORD *)this + 67) = v3;
    CRenderTargetManager::NotifyTargetsOfOcclusionChange(this);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
  return v35;
}
