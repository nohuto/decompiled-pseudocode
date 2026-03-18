/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180068640
 * Callers:
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010B830 (-GetDeviceTexture@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDev.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010B850 (-GetDeviceTexture@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDe.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802A3984 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800686F0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  struct IDeviceTexture *v3; // rbx
  char *v4; // r14
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 result; // rax
  unsigned int v14; // ecx
  unsigned int v15; // esi
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (char *)this - 464;
  *a3 = 0LL;
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 58) + 64LL))((char *)this - 464);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xAEu, 0LL);
    return v9;
  }
  else
  {
    *a3 = 0LL;
    v10 = *((unsigned __int8 *)a2 + 20);
    v11 = *((unsigned int *)a2 + 2);
    v12 = *(_QWORD *)a2;
    v18 = 0LL;
    LODWORD(result) = CD2DBitmapCache::GetBitmapInternal(v4, v12, v11, v10, &v18);
    v15 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, result, 0x60u, 0LL);
      if ( v18 )
      {
        v17 = *(int *)(*(_QWORD *)(v18 + 8) + 4LL) + v18 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB0u, 0LL);
      return v15;
    }
    else
    {
      if ( v18 )
        v3 = (struct IDeviceTexture *)(*(int *)(*(_QWORD *)(v18 + 8) + 20LL) + v18 + 8);
      *a3 = v3;
      return (unsigned int)result;
    }
  }
}
