/*
 * XREFs of ?InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ @ 0x180586B88
 * Callers:
 *     ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___::Run @ 0x180586DA0 (ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___--Run.c)
 *     ?ThumbnailSizeChanged@SwitchItemThumbnailElement@@UEAAXPEAX@Z @ 0x180587110 (-ThumbnailSizeChanged@SwitchItemThumbnailElement@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SwitchItemThumbnailElement::InvalidateThumbnailVisual(SwitchItemThumbnailElement *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF
  int v12; // [rsp+60h] [rbp+30h] BYREF
  int v13; // [rsp+64h] [rbp+34h]

  v10 = 0LL;
  v12 = 0;
  v13 = 0;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 10);
  if ( v2 )
  {
    v3 = **v2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    v4 = v3(v2, &GUID_201ffda2_74a1_4fc8_a4a6_a65a1636d3fe, &v10);
    v5 = retaddr;
    if ( v4 >= 0 )
    {
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 72) + 40LL))(*((_QWORD *)this + 72));
      v4 = DwmpQueryWindowThumbnailSourceSize(*v7, 0LL, &v12);
      v5 = retaddr;
      if ( v4 >= 0 )
      {
        v11 = *((_QWORD *)this + 30);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
        DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v8, &v11, (__int64)&GUID_NULL, 0LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 74);
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 80LL))(v10, &v12);
        DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v8);
        goto LABEL_8;
      }
      v6 = 345LL;
    }
    else
    {
      v6 = 344LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v5,
      (void *)v6,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
}
