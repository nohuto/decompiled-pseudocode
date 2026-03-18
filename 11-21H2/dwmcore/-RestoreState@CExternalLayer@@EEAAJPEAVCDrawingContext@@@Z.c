/*
 * XREFs of ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800D1AB0
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801D8060 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18007F044 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z @ 0x1801B2D8C (-PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CExternalLayer::RestoreState(CExternalLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // eax
  __int64 v21; // rcx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Start,
      a3,
      1u,
      &v22);
  v5 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 32LL))(this, a2);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0xD3u);
  }
  else
  {
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
      *((_QWORD *)a2 + 993) = v8;
    if ( *((_BYTE *)this + 34) )
    {
      v9 = *((_DWORD *)a2 + 732);
      if ( v9 )
        *((_DWORD *)a2 + 732) = v9 - 1;
      v10 = 88LL * (unsigned int)(*((_DWORD *)a2 + 222) - 1);
      --*(_DWORD *)(v10 + *((_QWORD *)a2 + 108));
      *((_BYTE *)a2 + 8041) = 1;
      *((_BYTE *)this + 34) = 0;
    }
    if ( *((_BYTE *)this + 33) && (v11 = CDrawingContext::PopRenderTargetInternal(a2, 0), v7 = v11, v11 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0xE4u);
    }
    else
    {
      if ( *((_BYTE *)this + 32) )
      {
        CDrawingContext::PopDeviceTransform(a2, (CExternalLayer *)((char *)this + 48));
        *((_BYTE *)this + 32) = 0;
      }
      v13 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 40LL))(this, a2);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0xEDu);
      }
      else
      {
        v15 = *(_QWORD *)this;
        if ( *((_BYTE *)a2 + 176) )
        {
          v20 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(v15 + 56))(this, a2);
          v7 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0xF6u);
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(v15 + 48))(this, a2);
          v7 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0xFAu);
        }
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop,
      v18,
      1u,
      &v22);
  return v7;
}
