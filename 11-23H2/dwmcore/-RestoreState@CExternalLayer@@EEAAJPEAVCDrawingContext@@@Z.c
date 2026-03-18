/*
 * XREFs of ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800D8430
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180019300 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z @ 0x180019494 (-PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180075778 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(CExternalLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v17; // eax
  __int64 v18; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start);
  v4 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 32LL))(this, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xD3u, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)this + 5);
    if ( v7 )
      *((_QWORD *)a2 + 1009) = v7;
    if ( *((_BYTE *)this + 34) )
    {
      v8 = *((_DWORD *)a2 + 796);
      if ( v8 )
        *((_DWORD *)a2 + 796) = v8 - 1;
      --*(_QWORD *)(*((_QWORD *)a2 + 113) - 184LL);
      *((_BYTE *)a2 + 8169) = 1;
      *((_BYTE *)this + 34) = 0;
    }
    if ( *((_BYTE *)this + 33) && (v9 = CDrawingContext::PopRenderTargetInternal(a2, 0), v6 = v9, v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xE4u, 0LL);
    }
    else
    {
      if ( *((_BYTE *)this + 32) )
      {
        CDrawingContext::PopDeviceTransform(a2, (CExternalLayer *)((char *)this + 48));
        *((_BYTE *)this + 32) = 0;
      }
      v11 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 40LL))(this, a2);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xEDu, 0LL);
      }
      else
      {
        v13 = *(_QWORD *)this;
        if ( *((_BYTE *)a2 + 193) )
        {
          v17 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(v13 + 56))(this, a2);
          v6 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xF6u, 0LL);
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(v13 + 48))(this, a2);
          v6 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xFAu, 0LL);
        }
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
  return v6;
}
