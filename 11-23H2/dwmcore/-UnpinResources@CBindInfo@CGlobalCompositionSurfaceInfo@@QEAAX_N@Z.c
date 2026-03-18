/*
 * XREFs of ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18025B97C
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800942C4 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x18025A660 (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18025A8DC (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180103C6C (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x18012DC60 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV?$span@PEAUIDXGIResource@@$0?0@gsl@@@Z @ 0x18028FE88 (-DelayUnpinResources@CD3DDevice@@QEAAXPEAVCCompositionSurfaceInfo@@U_LUID@@IV-$span@PEAUIDXGIRes.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  __int64 **v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 *v7; // rsi
  gsl::details *v8; // rcx
  int v9; // r9d
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 **)((char *)this + 112);
  if ( (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3 )
  {
    v5 = **((_QWORD **)this + 9) + 8LL + *(int *)(*(_QWORD *)(**((_QWORD **)this + 9) + 8LL) + 8LL);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McTemplateU0xx_EventWriteTransfer(*(_QWORD *)this, (__int64)&Pinning_CompSurfInfoUnpin);
    if ( !v6 || a2 )
    {
      v12 = (__int64 *)**v2;
      v13 = *v12;
      v15 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))(v13 + 56))(
             v12,
             &GUID_fef19e0a_40c0_472b_ae40_59ef97af3529,
             &v15) >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
          McTemplateU0q_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&Pinning_D3DUnpinStart);
        (*(void (__fastcall **)(__int64, __int64 *, signed __int64))(*(_QWORD *)v15 + 32LL))(v15, *v2, v2[1] - *v2);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
          McTemplateU0q_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&Pinning_D3DUnpinStop);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    }
    else
    {
      v7 = *v2;
      gsl::details::extent_type<-1>::extent_type<-1>(
        (gsl::details *)v14,
        (__int64)(*((_QWORD *)this + 15) - (_QWORD)*v2) >> 3);
      if ( v14[0] == -1LL || !v7 && v14[0] )
      {
        gsl::details::terminate(v8);
        __debugbreak();
      }
      v9 = *((_DWORD *)this + 54);
      v10 = *((_QWORD *)this + 26);
      v11 = *(_QWORD **)this;
      v14[1] = v7;
      CD3DDevice::DelayUnpinResources(v6, (_DWORD)v11, v10, v9, (__int64)v14);
    }
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::clear(v2);
}
