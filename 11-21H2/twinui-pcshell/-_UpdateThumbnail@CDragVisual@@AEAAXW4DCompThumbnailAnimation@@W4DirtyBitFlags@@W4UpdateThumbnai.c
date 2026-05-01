/*
 * XREFs of ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180535948
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180532EC0 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x180533610 (-SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z.c)
 *     ?SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180533780 (-SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatc.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1805337D0 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x180533A80 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ @ 0x180533E10 (-ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IDCompThumbnail@@$BBI@AA @ 0x18020C4C0 (--_9IDCompThumbnail@@$BBI@AA.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x180530FDC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x180531034 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d0.c)
 */

void __fastcall CDragVisual::_UpdateThumbnail(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5)
{
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // r8d
  float v13; // xmm0_4
  __m128i v14; // xmm0
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  __int64 v18; // rdi
  __int64 *v19; // rbx
  __int64 v20; // rbx
  __int64 *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29[2]; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(a1 + 112) )
    return;
  v26 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v29, &v26, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  if ( (a3 & 5) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 288);
    rc = *(struct tagRECT *)(a1 + 240);
    if ( v9 )
    {
      v10 = *(_DWORD *)(a1 + 252);
      v11 = (int)(float)((float)(*(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192)) * 0.052000001);
      if ( v9 == 3 )
      {
        v12 = (int)(float)((float)(v10 - *(_DWORD *)(a1 + 244)) * -0.025000006);
        v13 = (float)(*(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 240)) * -0.025000006;
      }
      else
      {
        v14 = _mm_cvtsi32_si128(v10 - *(_DWORD *)(a1 + 244));
        v15 = *(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 240);
        LODWORD(v16) = _mm_cvtepi32_ps(v14).m128_u32[0];
        if ( v9 == 4 )
        {
          v12 = (int)(float)(v16 * -0.050000012);
          v13 = (float)v15 * -0.050000012;
        }
        else
        {
          v12 = (int)(float)(v16 * 0.050000001);
          v13 = (float)v15 * 0.050000001;
        }
      }
      InflateRect(&rc, (int)v13, v12);
      v17 = *(_DWORD *)(a1 + 288);
      if ( v17 == 1 )
      {
        v11 = -v11;
LABEL_12:
        rc.left += v11;
        rc.right += v11;
        goto LABEL_13;
      }
      if ( v17 == 2 )
        goto LABEL_12;
    }
LABEL_13:
    v18 = *(_QWORD *)(a1 + 112);
    v26 = 0LL;
    v19 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v26, &v28);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
    if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
                0LL,
                0LL,
                a5,
                v19) >= 0 )
       IDCompThumbnail::`vcall'{24,{flat}}(v18);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  }
  v27 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    v28 = *(_QWORD *)(a1 + 112);
    v20 = v28;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
    v21 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v27, &rc);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v21);
    v26 = v20;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
    if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___(
                &v26,
                v22,
                v21) < 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v20 + 40LL))(v20, 0LL, 0LL, 0LL);
      a3 &= ~8u;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v28);
  }
  if ( (a3 & 8) != 0
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 48LL))(*(_QWORD *)(a1 + 112))
    && *(_DWORD *)(a1 + 148) != 4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 112) + 40LL))(
      *(_QWORD *)(a1 + 112),
      a1 + 240,
      a2,
      v27);
  }
  if ( (a3 & 2) != 0 )
  {
    v24 = *(__int64 **)(a1 + 112);
    v25 = *v24;
    if ( *(_DWORD *)(a1 + 148) == 2 )
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v25 + 32))(v24, *(_QWORD *)(v25 + 32), a2, 0LL);
    else
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v25 + 32))(v24, v23, a2, 0LL);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v29);
}
