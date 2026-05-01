/*
 * XREFs of ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1802E57E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$SwitchItemLoadError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z @ 0x180571E18 (--$SwitchItemLoadError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z.c)
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180582AE0 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x180587158 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SwitchItemThumbnailElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  int v7; // ecx
  unsigned __int64 *v8; // r14
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, unsigned __int64 *, _QWORD, GUID *, __int64); // rbx
  _QWORD *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v15[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16[2]; // [rsp+68h] [rbp-18h] BYREF

  v16[0] = *(_QWORD *)(a1 + 240);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v15, v16, &GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v16);
  CShrinkButtonElement::v_LayoutChildren(a1, a2, a3);
  v6 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  v7 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  v14 = __PAIR64__(v6, v7);
  if ( *(_BYTE *)(a1 + 72) )
  {
    v8 = (unsigned __int64 *)(a1 + 612);
    if ( !*(_QWORD *)(a1 + 592) || v7 != *(_DWORD *)v8 || v6 != *(_DWORD *)(a1 + 616) )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 592));
      v9 = *(_QWORD *)(a1 + 240);
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, unsigned __int64 *, _QWORD, GUID *, __int64))(*(_QWORD *)v9 + 64LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 592));
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 576) + 40LL))(*(_QWORD *)(a1 + 576));
      LODWORD(v16[0]) = v10(
                          v9,
                          *(_QWORD *)(a1 + 248),
                          *v11,
                          0x40000000LL,
                          &v14,
                          0LL,
                          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                          a1 + 592);
      if ( SLODWORD(v16[0]) >= 0 )
      {
        *v8 = v14;
        SwitchItemThumbnailElement::UpdateThumbnailBorder((SwitchItemThumbnailElement *)a1);
      }
      else
      {
        MultitaskingViewTelemetry::SwitchItemLoadError<long &>(v16);
      }
    }
  }
  v12 = *(__int64 **)(a1 + 592);
  if ( v12 )
  {
    v13 = *v12;
    v16[0] = 0LL;
    v16[1] = v14;
    (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD))(v13 + 24))(v12, v16, 0LL, 0LL);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v15);
}
