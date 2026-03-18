/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800ADCA4
 * Callers:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801224D0 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceText.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180123670 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801239D0 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18013588A (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 *     ?GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B1D64 (-GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802B1D84 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800ADF80 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  char *v4; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  int BitmapInternal; // eax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  struct IDeviceTexture *v14; // rcx
  char *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  int v19; // ebx
  char *v20; // rcx
  char *v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, struct IDeviceTexture **); // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF
  char v30; // [rsp+70h] [rbp+18h] BYREF

  v4 = (char *)this - 240;
  *a3 = 0LL;
  if ( !*((_QWORD *)this - 13) )
  {
    v26 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x1A4u, 0LL);
    goto LABEL_20;
  }
  if ( !v4[144] )
    goto LABEL_3;
  v16 = &v4[*(int *)(*((_QWORD *)v4 + 2) + 12LL) + 16];
  v17 = (_QWORD *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v16 + 32LL))(v16, &v30);
  v18 = *(unsigned int *)v17;
  if ( *(_QWORD *)a2 != *v17
    || (v19 = *((_DWORD *)a2 + 2),
        v20 = &v4[*(int *)(*((_QWORD *)v4 + 2) + 20LL) + 16],
        v18 = *(unsigned int *)(*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v20 + 16LL))(v20, &v29),
        (_DWORD)v18 != DisplayId::None)
    && (_DWORD)v18 != v19
    && v19 != DisplayId::All )
  {
    v26 = -2003304287;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003304287, 0x199u, 0LL);
LABEL_20:
    v12 = v26;
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x8Au, 0LL);
    return (unsigned int)v12;
  }
  v21 = &v4[*(int *)(*((_QWORD *)v4 + 2) + 12LL) + 16];
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v21 + 24LL))(v21) && !*((_BYTE *)a2 + 20) )
  {
    v26 = -2147024891;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2147024891, 0x19Eu, 0LL);
    goto LABEL_20;
  }
LABEL_3:
  if ( *((_BYTE *)this - 96) )
  {
    v23 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDeviceTexture **))(*((_QWORD *)this - 13)
                                                                             + 8LL
                                                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this - 13)
                                                                                                  + 8LL)
                                                                                      + 4LL));
    v24 = (**v23)(v23, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, a3);
    v12 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x92u, 0LL);
  }
  else
  {
    *a3 = 0LL;
    LOBYTE(a4) = *((_BYTE *)a2 + 20);
    v8 = *((unsigned int *)a2 + 2);
    v9 = *(_QWORD *)a2;
    v29 = 0LL;
    BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v4, v9, v8, a4, &v29);
    v12 = BitmapInternal;
    if ( BitmapInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, BitmapInternal, 0x60u, 0LL);
      v13 = v29;
    }
    else
    {
      v13 = 0LL;
      if ( v29 )
        v14 = (struct IDeviceTexture *)(*(int *)(*(_QWORD *)(v29 + 8) + 20LL) + v29 + 8);
      else
        v14 = 0LL;
      *a3 = v14;
    }
    if ( v13 )
    {
      v28 = *(int *)(*(_QWORD *)(v13 + 8) + 4LL) + v13 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v12, 0x8Eu, 0LL);
  }
  return (unsigned int)v12;
}
