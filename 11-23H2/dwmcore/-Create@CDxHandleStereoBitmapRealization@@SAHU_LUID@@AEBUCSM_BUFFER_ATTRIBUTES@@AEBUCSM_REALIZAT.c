/*
 * XREFs of ?Create@CDxHandleStereoBitmapRealization@@SAHU_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B2C34
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x18009F0D4 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007769C (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18009F2AC (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802B28EC (--0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::Create(
        struct _LUID a1,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3,
        struct ISwapChainRealization **a4)
{
  CDxHandleStereoBitmapRealization *v8; // rax
  __int64 v9; // rcx
  CDxHandleStereoBitmapRealization *v10; // rax
  CDxHandleStereoBitmapRealization *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi

  v8 = (CDxHandleStereoBitmapRealization *)operator new(0x260uLL);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_7;
  }
  v10 = CDxHandleStereoBitmapRealization::CDxHandleStereoBitmapRealization(v8, a1, a2, a3);
  v11 = v10;
  if ( !v10 )
  {
LABEL_7:
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x18u, 0LL);
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CDxHandleStereoBitmapRealization *)((char *)v10 + 8));
  v12 = CDxHandleBitmapRealization::Initialize(v11);
  v14 = v12;
  if ( v12 >= 0 )
  {
    *a4 = (CDxHandleStereoBitmapRealization *)((char *)v11 + 360);
    return v14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Au, 0LL);
  *((_QWORD *)v11 + 31) = 0LL;
LABEL_8:
  *a4 = 0LL;
  if ( v11 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v11);
  return v14;
}
