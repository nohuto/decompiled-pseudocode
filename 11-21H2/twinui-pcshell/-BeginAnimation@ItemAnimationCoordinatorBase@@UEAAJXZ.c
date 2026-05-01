/*
 * XREFs of ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x1804DBE80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___ @ 0x1804DB864 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x1804DB934 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--ComponentInfo_CSimpleArrayStandardCompareHelper.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____ @ 0x1804DBB2C (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArraySt_ea_1804DBB2C.c)
 *     ??0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804DBC94 (--0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804DBCD8 (--0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804DBD18 (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     _lambda_88032d98673c75c82401aed8ec27639f_::operator() @ 0x1804DBDB0 (_lambda_88032d98673c75c82401aed8ec27639f_--operator().c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall ItemAnimationCoordinatorBase::BeginAnimation(ItemAnimationCoordinatorBase *this)
{
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v2; // rdi
  const struct ItemAnimationCoordinatorBase::ComponentInfo *i; // r14
  bool v4; // bl
  ItemAnimationCoordinatorBase *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  int AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f; // edi
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v9; // r14
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v10; // rdi
  int v11; // eax
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v12; // r15
  const struct ItemAnimationCoordinatorBase::ComponentInfo *j; // r14
  bool v14; // di
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v15; // r15
  const struct ItemAnimationCoordinatorBase::ComponentInfo *k; // r14
  bool v17; // di
  __int128 v18; // xmm0
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v19; // r15
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v20; // r14
  bool v21; // di
  bool v22; // r12
  __int64 *v23; // rdi
  __int64 *v24; // r15
  __int128 *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct IUnknown **v29; // [rsp+38h] [rbp-D0h] BYREF
  ItemAnimationCoordinatorBase *v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int128 *v32; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  ItemAnimationCoordinatorBase *v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+78h] [rbp-90h] BYREF
  __int128 v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+98h] [rbp-70h]
  int v39; // [rsp+A0h] [rbp-68h]
  _BYTE v40[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-38h]
  _OWORD v45[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v46; // [rsp+100h] [rbp-8h]
  int v47; // [rsp+108h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v30 = (ItemAnimationCoordinatorBase *)*((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(&v35, (__int64 *)&v30, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v30);
  *((_BYTE *)this + 232) = 0;
  v2 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 3);
  for ( i = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v2 + 32 * *((_QWORD *)this + 4));
        v2 != i;
        v2 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v2 + 32) )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)v40, v2);
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0;
    v29 = (struct IUnknown **)v40;
    v4 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                (_QWORD *)this + 19,
                (__int64)&v29,
                (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v36,
                (unsigned __int64 *)&v30) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36);
    if ( v4 )
    {
      ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
        (ItemAnimationCoordinatorBase::ComponentInfo *)&v36,
        (const struct ItemAnimationCoordinatorBase::ComponentInfo *)v40);
      v37 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v30 + 28);
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int128 *))(*(_QWORD *)this + 128LL))(this, &v36);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36 + 1);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
  }
  v31 = 0LL;
  v34 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
  v5 = this;
  v30 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  v29 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
  v31 = 0LL;
  v29 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
  LOBYTE(v6) = 0;
  AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___(v6, (__int64 *)&v29, v7, &v31);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  if ( AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f >= 0 )
  {
    v9 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)*((_QWORD *)this + 7);
    v10 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v9 + 16 * *((_QWORD *)this + 8));
    while ( v9 != v10 )
    {
      ItemAnimationCoordinatorBase::ItemRemovedInfo::ItemRemovedInfo(
        (ItemAnimationCoordinatorBase::ItemRemovedInfo *)&v32,
        v9);
      v11 = (*(__int64 (__fastcall **)(ItemAnimationCoordinatorBase *, __int128 **, __int64))(*(_QWORD *)this + 136LL))(
              this,
              &v32,
              v31);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x91,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v11);
        (*(void (__fastcall **)(__int128 *))(*(_QWORD *)v32 + 80LL))(v32);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
      v9 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v9 + 16);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f);
    lambda_88032d98673c75c82401aed8ec27639f_::operator()((__int64 *)&v30);
    v5 = v30;
  }
  v12 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 11);
  for ( j = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v12 + 32 * *((_QWORD *)this + 12));
        v12 != j;
        v12 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v12 + 32) )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)v40, v12);
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0;
    v29 = (struct IUnknown **)v40;
    v14 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                 (_QWORD *)this + 19,
                 (__int64)&v29,
                 (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v36,
                 (unsigned __int64 *)&v32) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36);
    if ( v14 )
    {
      ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
        (ItemAnimationCoordinatorBase::ComponentInfo *)&v36,
        (const struct ItemAnimationCoordinatorBase::ComponentInfo *)v40);
      v37 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v32 + 28);
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int128 *))(*(_QWORD *)this + 144LL))(this, &v36);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36 + 1);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
  }
  v15 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 15);
  for ( k = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v15 + 32 * *((_QWORD *)this + 16));
        v15 != k;
        v15 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v15 + 32) )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)&v36, v15);
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
      (ItemAnimationCoordinatorBase::ComponentInfo *)v40,
      (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v36);
    memset(v45, 0, sizeof(v45));
    v46 = 0LL;
    v47 = 0;
    v32 = &v36;
    v17 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                 (_QWORD *)this + 19,
                 (__int64)&v32,
                 (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v45,
                 (unsigned __int64 *)&v29) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v45);
    if ( v17 )
      v18 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v29 + 12);
    else
      v18 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)&v36 + 1) + 88LL))(
                         *((_QWORD *)&v36 + 1),
                         &v43);
    v42 = v18;
    (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(*(_QWORD *)this + 152LL))(this, v40);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36 + 1);
  }
  v19 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)*((_QWORD *)this + 19);
  v20 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v19 + 48 * *((_QWORD *)this + 20));
  if ( v19 != v20 )
  {
    do
    {
      ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
        (ItemAnimationCoordinatorBase::PositionChangedInfo *)v45,
        v19);
      v29 = (struct IUnknown **)v45;
      v36 = 0uLL;
      v37 = 0LL;
      v21 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                   (_QWORD *)this + 3,
                   &v29,
                   (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v36,
                   (unsigned __int64 *)&v32) >= 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36 + 1);
      v36 = 0uLL;
      v37 = 0LL;
      v22 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                   (_QWORD *)this + 11,
                   &v29,
                   (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v36,
                   (unsigned __int64 *)&v32) >= 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36 + 1);
      if ( !v21 && !v22 )
        (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _OWORD *))(*(_QWORD *)this + 160LL))(this, v45);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v45);
      v19 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v19 + 48);
    }
    while ( v19 != v20 );
    v5 = v30;
  }
  v23 = (__int64 *)*((_QWORD *)this + 23);
  v24 = &v23[3 * *((_QWORD *)this + 24)];
  if ( v23 != v24 )
  {
    v25 = (__int128 *)(v23 + 1);
    do
    {
      v26 = *v23;
      v43 = v26;
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      v44 = *v25;
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(*(_QWORD *)this + 168LL))(this, &v43);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
      v23 += 3;
      v25 = (__int128 *)((char *)v25 + 24);
    }
    while ( v23 != v24 );
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 27);
  v27 = *((_QWORD *)this + 28);
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 28);
  }
  if ( v5 )
    (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)v5 + 16LL))(v5);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)&v35);
  return 0LL;
}
