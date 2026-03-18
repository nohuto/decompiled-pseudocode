/*
 * XREFs of ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x18002E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18002EB70 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x180031E2C (-GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_.c)
 *     ??4?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionSurfaceInfo@@@Z @ 0x180031E6C (--4-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18012D0D6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z @ 0x1801B7098 (-GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessSurfaceUpdates(CGlobalSurfaceManager *this)
{
  unsigned int v2; // r15d
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v5; // ecx
  int SurfaceUpdates; // ebx
  __int64 v7; // rcx
  int FrameSurfaceUpdates; // eax
  CGlobalSurfaceManager *v9; // rcx
  unsigned int i; // esi
  __int64 v12; // r14
  struct CCompositionSurfaceInfo *CompositionSurfaceInfoByLuid; // rax
  int v14; // eax
  unsigned int v15; // ecx
  void *v16; // rcx
  unsigned int v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v19[2]; // [rsp+38h] [rbp-18h] BYREF

  v17 = 0;
  v2 = 0;
  v18 = 0;
  v3 = 0;
  v4 = CGlobalSurfaceManager::ProcessLegacyTokens(this);
  SurfaceUpdates = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x8Fu, 0LL);
    return (unsigned int)SurfaceUpdates;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start);
  v7 = 0LL;
  if ( g_pComposition )
    v7 = *((_QWORD *)g_pComposition + 62);
  v19[0] = v7;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(v19, &v17, &v18);
  if ( FrameSurfaceUpdates >= 0 )
  {
    SurfaceUpdates = 0;
    goto LABEL_8;
  }
  SurfaceUpdates = FrameSurfaceUpdates | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)v9,
    &dword_18033BE90,
    3u,
    FrameSurfaceUpdates | 0x10000000,
    0x7Fu,
    0LL);
  for ( ; SurfaceUpdates >= 0; SurfaceUpdates = CGlobalSurfaceManager::GetSurfaceUpdates(v9, &v17, &v18) )
  {
LABEL_8:
    for ( i = 0; i < v17; ++i )
    {
      v19[0] = 0LL;
      v12 = *((_QWORD *)this + 13) + 224LL * i;
      CompositionSurfaceInfoByLuid = CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(
                                       (CGlobalSurfaceManager *)((char *)this + 16),
                                       *(struct _LUID *)(v12 + 4));
      wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::operator=(v19, CompositionSurfaceInfoByLuid);
      if ( v19[0] )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19[0] + 120LL))(v19[0], v12);
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xAAu, 0LL);
        ++v3;
      }
      v16 = *(void **)(v12 + 32);
      if ( (unsigned __int64)v16 >= 2 )
        DeleteObject(v16);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v19);
    }
    if ( !v18 )
      break;
    ++v2;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
      v3,
      v2);
  dword_1803E5A9C += v3;
  return (unsigned int)SurfaceUpdates;
}
