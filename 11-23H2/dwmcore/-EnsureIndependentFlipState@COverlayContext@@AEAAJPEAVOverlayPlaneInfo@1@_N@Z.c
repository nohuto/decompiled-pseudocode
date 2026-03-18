/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801DCD24
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x180079320 (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800FDFD8 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x18012DB80 (McTemplateU0qqq_EventWriteTransfer.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x18012E508 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18012F728 (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0tu_EventWriteTransfer @ 0x1801DECB4 (McTemplateU0tu_EventWriteTransfer.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3)
{
  int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // rbp
  __int64 v9; // r14
  unsigned int v10; // ebp
  char v11; // al
  __int64 v12; // r8
  char v13; // r12
  __int64 v14; // rdx
  unsigned __int8 (__fastcall *v15)(__int64); // rax
  unsigned int v16; // ebx
  __int64 (__fastcall *v17)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, int); // rdi
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // edi
  unsigned int v30; // [rsp+20h] [rbp-78h]
  int v31; // [rsp+28h] [rbp-70h]
  unsigned int v32; // [rsp+30h] [rbp-68h] BYREF
  __int64 v33; // [rsp+38h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+40h] [rbp-58h] BYREF

  v6 = 0;
  v7 = 0;
  v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
  v8 = v33;
  if ( a3 && (!*((_BYTE *)this + 11308) || !*((_BYTE *)a2 + 177)) )
    a3 = 0;
  v9 = *((_QWORD *)a2 + 2);
  if ( a3 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 96LL))(*((_QWORD *)a2 + 2));
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 104LL))(v9, &v32);
    v12 = 0LL;
    v13 = v11;
    if ( CCommonRegistryData::m_customRefreshRateMode && v10 )
    {
      v14 = *(unsigned __int8 *)(*((_QWORD *)g_pComposition + 27) + 577LL);
      if ( !(_BYTE)v14
        || -1227133513 * (unsigned int)((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5) != 1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
          McTemplateU0tu_EventWriteTransfer(
            0x6DB6DB6DB6DB6DB7LL,
            v14,
            *(unsigned __int8 *)(*((_QWORD *)g_pComposition + 27) + 577LL),
            0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 914) - *((_QWORD *)this + 913)) >> 5));
        goto LABEL_29;
      }
      if ( *((_BYTE *)this + 11301) )
      {
        if ( !COverlayContext::IsFullscreen((__int64 **)this, a2) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
          {
            v31 = *((_DWORD *)a2 + 20);
            v30 = *((_DWORD *)a2 + 19);
            McTemplateU0qqqq_EventWriteTransfer(
              (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
              (__int64)&CustomDurationRejectPlaneFullscreenTest);
          }
          goto LABEL_29;
        }
      }
      else if ( *((_BYTE *)this + 11024) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &CustomDurationRejectDesktopPlaneEnabledTest,
            0LL,
            1u,
            &v34);
        goto LABEL_29;
      }
      if ( v10 == *((_DWORD *)a2 + 49) && v32 == *((_DWORD *)a2 + 50) && v13 == *((_BYTE *)a2 + 204) )
      {
        v7 = *((_DWORD *)a2 + 48);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
        {
          v30 = *((_DWORD *)a2 + 48);
          McTemplateU0qqq_EventWriteTransfer(v32, (__int64)&CustomDurationUseCachedDuration);
        }
      }
      else
      {
        LOBYTE(v12) = v13;
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v33 + 168LL))(v33, v10, v12, v32);
        v7 = v22;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000000) != 0 )
        {
          v30 = v22;
          McTemplateU0qqq_EventWriteTransfer(v23, (__int64)&CustomDurationComputeSupportedDuration);
        }
        *((_DWORD *)a2 + 50) = v32;
        *((_DWORD *)a2 + 49) = v10;
        *((_BYTE *)a2 + 204) = v13;
        *((_DWORD *)a2 + 48) = v7;
      }
      goto LABEL_20;
    }
LABEL_29:
    *((_DWORD *)a2 + 49) = 0;
    *((_DWORD *)a2 + 50) = 0;
    *((_BYTE *)a2 + 204) = 0;
    *((_DWORD *)a2 + 48) = 0;
LABEL_20:
    v8 = v33;
  }
  v15 = *(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 320LL);
  if ( a3 )
  {
    if ( !v15(v9) )
    {
      v16 = *((_DWORD *)a2 + 52);
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, int))(*(_QWORD *)v9 + 352LL);
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
      v19 = v17(v9, *((_QWORD *)a2 + 3), v18, v16, v30, v31);
      v6 = v19;
      if ( v19 >= 0 )
      {
        if ( !*((_BYTE *)a2 + 183) )
        {
          LOBYTE(v21) = 1;
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 408LL))(v9, 3LL, v21);
        }
        *((_BYTE *)a2 + 183) = 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xC25u, 0LL);
      }
    }
  }
  else if ( v15(v9) )
  {
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 376LL))(v9, *((_QWORD *)a2 + 3));
    v6 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xC3Au, 0LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 408LL))(v9, 3LL);
    *((_BYTE *)a2 + 183) = 0;
  }
  if ( *((_BYTE *)a2 + 183) )
  {
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 368LL))(v9, *((_QWORD *)a2 + 3), v7);
    v28 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xC4Cu, 0LL);
    if ( !v6 || v6 >= 0 && v28 < 0 )
      return (unsigned int)v28;
  }
  return (unsigned int)v6;
}
