/*
 * XREFs of ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180237380
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$SwitchItemLoadError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z @ 0x1804B4A48 (--$SwitchItemLoadError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z.c)
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C8180 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804CF918 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SwitchItemThumbnailElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, __int64, unsigned __int64 *, _QWORD, GUID *, __int64); // rbx
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v14[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15[2]; // [rsp+68h] [rbp-18h] BYREF

  v15[0] = *(_QWORD *)(a1 + 240);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v14, v15, &GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
  CShrinkButtonElement::v_LayoutChildren(a1, a2, a3);
  v6 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  v7 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  v13 = __PAIR64__(v6, v7);
  if ( *(_BYTE *)(a1 + 72) && (!*(_QWORD *)(a1 + 592) || v7 != *(_DWORD *)(a1 + 612) || v6 != *(_DWORD *)(a1 + 616)) )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 592));
    v8 = *(_QWORD *)(a1 + 240);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, unsigned __int64 *, _QWORD, GUID *, __int64))(*(_QWORD *)v8 + 64LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 592));
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 576) + 40LL))(*(_QWORD *)(a1 + 576));
    LODWORD(v15[0]) = v9(
                        v8,
                        *(_QWORD *)(a1 + 248),
                        *v10,
                        0x40000000LL,
                        &v13,
                        0LL,
                        &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                        a1 + 592);
    if ( SLODWORD(v15[0]) >= 0 )
    {
      *(_QWORD *)(a1 + 612) = v13;
      SwitchItemThumbnailElement::UpdateThumbnailBorder((SwitchItemThumbnailElement *)a1);
    }
    else
    {
      MultitaskingViewTelemetry::SwitchItemLoadError<long &>(v15);
    }
  }
  v11 = *(__int64 **)(a1 + 592);
  if ( v11 )
  {
    v12 = *v11;
    v15[0] = 0LL;
    v15[1] = v13;
    (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v12 + 24))(v11, v15, 0LL, 0LL);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v14);
}
