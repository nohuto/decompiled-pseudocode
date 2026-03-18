/*
 * XREFs of ??0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802A44F0
 * Callers:
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A4834 (-Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180067A38 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ??0CD2DBitmapCache@@IEAA@XZ @ 0x180068108 (--0CD2DBitmapCache@@IEAA@XZ.c)
 *     ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x180192F60 (-AdjustStereoEntityCount@CComposition@@QEAAX_N@Z.c)
 */

CDxHandleStereoBitmapRealization *__fastcall CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(
        CDxHandleStereoBitmapRealization *this,
        struct _LUID a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CComposition *v10; // rcx

  *((_QWORD *)this + 2) = &CDxHandleStereoBitmapRealization::`vbtable';
  *((_QWORD *)this + 41) = &CDxHandleStereoBitmapRealization::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 46) = &CDxHandleStereoBitmapRealization::`vbtable'{for `ISwapChainRealization'};
  *((_QWORD *)this + 69) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 72) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 75) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IDeviceResource'};
  CDxHandleBitmapRealization::CDxHandleBitmapRealization(
    (__int64)this,
    0LL,
    *(_QWORD *)&a2,
    (__int64)a3,
    (__int64)a4,
    1,
    1,
    0LL,
    0);
  *(_QWORD *)this = &CDxHandleStereoBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 40) = &CDxHandleStereoBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 45) = &CDxHandleStereoBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleStereoBitmapRealization::`vftable'{for `IDeviceResource'};
  v5 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 496;
  v6 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 512;
  v7 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 528;
  v8 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 552;
  v9 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + v9 + 12) = v9 - 576;
  *((_QWORD *)this + 50) = 0LL;
  CD2DBitmapCache::CD2DBitmapCache((CDxHandleStereoBitmapRealization *)((char *)this + 408), 1);
  CComposition::AdjustStereoEntityCount(v10, 1);
  return this;
}
