/*
 * XREFs of ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805F06F8
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1805EDC20 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x1805EE380 (-SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z.c)
 *     ?SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1805EE4F0 (-SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatc.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1805EE540 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1805EE7F0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ @ 0x1805EEB90 (-ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IDCompThumbnail@@$BBI@AA @ 0x1802A82A0 (--_9IDCompThumbnail@@$BBI@AA.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x1805EBD1C (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x1805EBD74 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d0.c)
 */

void __fastcall CDragVisual::_UpdateThumbnail(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5)
{
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  float v12; // xmm0_4
  int v13; // r8d
  float v14; // xmm0_4
  int v15; // eax
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // rbx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27[2]; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+58h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(a1 + 112) )
    return;
  v24 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v27, &v24, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  if ( (a3 & 5) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 288);
    rc = *(struct tagRECT *)(a1 + 240);
    if ( v9 )
    {
      v10 = (int)(float)((float)(*(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192)) * 0.052000001);
      v11 = *(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 240);
      v12 = (float)(*(_DWORD *)(a1 + 252) - *(_DWORD *)(a1 + 244));
      if ( v9 == 3 )
      {
        v13 = (int)(float)(v12 * -0.025000006);
        v14 = (float)v11 * -0.025000006;
      }
      else if ( v9 == 4 )
      {
        v13 = (int)(float)(v12 * -0.050000012);
        v14 = (float)v11 * -0.050000012;
      }
      else
      {
        v13 = (int)(float)(v12 * 0.050000001);
        v14 = (float)v11 * 0.050000001;
      }
      InflateRect(&rc, (int)v14, v13);
      v15 = *(_DWORD *)(a1 + 288);
      if ( v15 == 1 )
      {
        v10 = -v10;
LABEL_12:
        rc.left += v10;
        rc.right += v10;
        goto LABEL_13;
      }
      if ( v15 == 2 )
        goto LABEL_12;
    }
LABEL_13:
    v16 = *(_QWORD *)(a1 + 112);
    v24 = 0LL;
    v17 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v24, &v26);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v17);
    if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
                0LL,
                0LL,
                a5,
                v17) >= 0 )
       IDCompThumbnail::`vcall'{24,{flat}}(v16);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  }
  v25 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 112);
    v18 = v26;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
    v19 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v25, &rc);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
    v24 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
    if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___(
                &v24,
                v20,
                v19) < 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v18 + 40LL))(v18, 0LL, 0LL, 0LL);
      a3 &= ~8u;
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
  }
  if ( (a3 & 8) != 0
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 48LL))(*(_QWORD *)(a1 + 112))
    && *(_DWORD *)(a1 + 148) != 4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 112) + 40LL))(
      *(_QWORD *)(a1 + 112),
      a1 + 240,
      a2,
      v25);
  }
  if ( (a3 & 2) != 0 )
  {
    v22 = *(__int64 **)(a1 + 112);
    v23 = *v22;
    if ( *(_DWORD *)(a1 + 148) == 2 )
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v23 + 32))(v22, *(_QWORD *)(v23 + 32), a2, 0LL);
    else
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v23 + 32))(v22, v21, a2, 0LL);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v27);
}
