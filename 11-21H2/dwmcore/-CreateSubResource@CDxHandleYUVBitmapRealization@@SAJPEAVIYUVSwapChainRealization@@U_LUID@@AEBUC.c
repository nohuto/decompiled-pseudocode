/*
 * XREFs of ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802A53C0
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180066C1C (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x1801161D2 (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802A4DA8 (--0CDxHandleYUVBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1802A5EB0 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::CreateSubResource(
        struct IYUVSwapChainRealization *a1,
        struct _LUID a2,
        const struct CSM_BUFFER_ATTRIBUTES *a3,
        const struct CSM_REALIZATION_INFO *a4,
        struct CDecodeBitmap *a5,
        struct ISwapChainRealization **a6)
{
  CDxHandleYUVBitmapRealization *v6; // rbx
  volatile signed __int32 *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  CDxHandleYUVBitmapRealization *v16; // rdx
  struct ISwapChainRealization *v17; // rcx
  CDxHandleYUVBitmapRealization *v19; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v19 = 0LL;
  if ( !a1 || (**(unsigned int (__fastcall ***)(struct IYUVSwapChainRealization *))a1)(a1) || !*((_DWORD *)a4 + 8) )
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024809, 0x55u);
LABEL_13:
    if ( v6 )
      *((_QWORD *)v6 + 31) = 0LL;
    goto LABEL_15;
  }
  v11 = (volatile signed __int32 *)operator new(0x210uLL);
  if ( v11 )
    v11 = (volatile signed __int32 *)CDxHandleYUVBitmapRealization::CDxHandleYUVBitmapRealization(
                                       (__int64)v11,
                                       *((unsigned int *)a1 - 70),
                                       *(_QWORD *)&a2,
                                       (__int64)a3,
                                       (__int64)a4,
                                       (__int64)a5);
  wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(
    (volatile signed __int32 **)&v19,
    v11);
  v6 = v19;
  if ( !v19 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, -2147024882, 0x4Fu);
    goto LABEL_15;
  }
  v14 = CDxHandleYUVBitmapRealization::Initialize(v19, a1);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x51u);
    goto LABEL_13;
  }
  v16 = v6;
  v6 = 0LL;
  if ( v16 )
  {
    v17 = (CDxHandleYUVBitmapRealization *)((char *)v16 + *(int *)(*((_QWORD *)v16 + 2) + 24LL) + 16);
    goto LABEL_16;
  }
LABEL_15:
  v17 = 0LL;
LABEL_16:
  *a6 = v17;
  if ( v6 )
    CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v6);
  return v13;
}
