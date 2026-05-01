/*
 * XREFs of ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x180593C70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___ @ 0x180593654 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x180593724 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--ComponentInfo_CSimpleArrayStandardCompareHelper.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____ @ 0x18059391C (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArraySt_ea_18059391C.c)
 *     ??0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x180593A84 (--0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x180593AC8 (--0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x180593B08 (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 *     _lambda_88032d98673c75c82401aed8ec27639f_::operator() @ 0x180593BA0 (_lambda_88032d98673c75c82401aed8ec27639f_--operator().c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall ItemAnimationCoordinatorBase::BeginAnimation(ItemAnimationCoordinatorBase *this)
{
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v2; // rsi
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v3; // r14
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo **v4; // r15
  bool v5; // bl
  ItemAnimationCoordinatorBase *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  int AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f; // ebx
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v10; // rsi
  const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *v11; // rbx
  int v12; // eax
  _QWORD *v13; // r13
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v14; // r14
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v15; // rsi
  bool v16; // bl
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v17; // r14
  const struct ItemAnimationCoordinatorBase::ComponentInfo *v18; // rsi
  bool v19; // bl
  __int128 v20; // xmm0
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v21; // r14
  __int64 v22; // rsi
  bool v23; // bl
  bool v24; // r15
  __int64 *v25; // rbx
  __int64 *v26; // r14
  __int128 *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct IUnknown **v31; // [rsp+38h] [rbp-D0h] BYREF
  ItemAnimationCoordinatorBase *v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int128 *v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  ItemAnimationCoordinatorBase *v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+78h] [rbp-90h] BYREF
  __int128 v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  int v41; // [rsp+A0h] [rbp-68h]
  _BYTE v42[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v46; // [rsp+D0h] [rbp-38h]
  _OWORD v47[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v48; // [rsp+100h] [rbp-8h]
  int v49; // [rsp+108h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v32 = (ItemAnimationCoordinatorBase *)*((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(&v37, (__int64 *)&v32, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
  *((_BYTE *)this + 232) = 0;
  v2 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 3);
  v3 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v2 + 32 * *((_QWORD *)this + 4));
  v4 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo **)((char *)this + 152);
  while ( v2 != v3 )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)v42, v2);
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0;
    v31 = (struct IUnknown **)v42;
    v5 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                (_QWORD *)this + 19,
                (__int64)&v31,
                (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v38,
                (unsigned __int64 *)&v32) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
    if ( v5 )
    {
      ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
        (ItemAnimationCoordinatorBase::ComponentInfo *)&v38,
        (const struct ItemAnimationCoordinatorBase::ComponentInfo *)v42);
      v39 = *(_OWORD *)((char *)*v4 + 48 * (_QWORD)v32 + 28);
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int128 *))(*(_QWORD *)this + 128LL))(this, &v38);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38 + 1);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
    v2 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v2 + 32);
  }
  v33 = 0LL;
  v36 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
  v6 = this;
  v32 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
  v31 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
  v33 = 0LL;
  v31 = (struct IUnknown **)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
  LOBYTE(v7) = 0;
  AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f___(v7, (__int64 *)&v31, v8, &v33);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  if ( AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f >= 0 )
  {
    v10 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)*((_QWORD *)this + 7);
    v11 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v10 + 16 * *((_QWORD *)this + 8));
    while ( v10 != v11 )
    {
      ItemAnimationCoordinatorBase::ItemRemovedInfo::ItemRemovedInfo(
        (ItemAnimationCoordinatorBase::ItemRemovedInfo *)&v34,
        v10);
      v12 = (*(__int64 (__fastcall **)(ItemAnimationCoordinatorBase *, __int128 **, __int64))(*(_QWORD *)this + 136LL))(
              this,
              &v34,
              v33);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x91,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
          (const char *)(unsigned int)v12);
        (*(void (__fastcall **)(__int128 *))(*(_QWORD *)v34 + 80LL))(v34);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v35);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v34);
      v10 = (const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *)((char *)v10 + 16);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)AnimationHandler__lambda_3f14cb8a0624f11503591536414ec36d___lambda_88032d98673c75c82401aed8ec27639f);
    lambda_88032d98673c75c82401aed8ec27639f_::operator()((__int64 *)&v32);
    v6 = v32;
  }
  v13 = (_QWORD *)((char *)this + 88);
  v14 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 11);
  v15 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v14 + 32 * *((_QWORD *)this + 12));
  if ( v14 != v15 )
  {
    do
    {
      ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
        (ItemAnimationCoordinatorBase::ComponentInfo *)v42,
        v14);
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0LL;
      v41 = 0;
      v31 = (struct IUnknown **)v42;
      v16 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                   (_QWORD *)this + 19,
                   (__int64)&v31,
                   (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v38,
                   (unsigned __int64 *)&v34) >= 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
      if ( v16 )
      {
        ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
          (ItemAnimationCoordinatorBase::ComponentInfo *)&v38,
          (const struct ItemAnimationCoordinatorBase::ComponentInfo *)v42);
        v39 = *(_OWORD *)(*((_QWORD *)this + 19) + 48LL * (_QWORD)v34 + 28);
        (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int128 *))(*(_QWORD *)this + 144LL))(this, &v38);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38 + 1);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
      v14 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v14 + 32);
    }
    while ( v14 != v15 );
    v13 = (_QWORD *)((char *)this + 88);
  }
  v17 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)*((_QWORD *)this + 15);
  v18 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v17 + 32 * *((_QWORD *)this + 16));
  while ( v17 != v18 )
  {
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo((ItemAnimationCoordinatorBase::ComponentInfo *)&v38, v17);
    ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
      (ItemAnimationCoordinatorBase::ComponentInfo *)v42,
      (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v38);
    memset(v47, 0, sizeof(v47));
    v48 = 0LL;
    v49 = 0;
    v34 = &v38;
    v19 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_d5d2a6af1ced9d053db9073db41e3d92_____(
                 (_QWORD *)this + 19,
                 (__int64)&v34,
                 (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v47,
                 (unsigned __int64 *)&v31) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v47);
    if ( v19 )
      v20 = *(_OWORD *)((char *)*v4 + 48 * (_QWORD)v31 + 12);
    else
      v20 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)&v38 + 1) + 88LL))(
                         *((_QWORD *)&v38 + 1),
                         &v45);
    v44 = v20;
    (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _BYTE *))(*(_QWORD *)this + 152LL))(this, v42);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38 + 1);
    v17 = (const struct ItemAnimationCoordinatorBase::ComponentInfo *)((char *)v17 + 32);
  }
  v21 = *v4;
  v22 = (__int64)*v4 + 48 * *((_QWORD *)this + 20);
  if ( *v4 != (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v22 )
  {
    do
    {
      ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
        (ItemAnimationCoordinatorBase::PositionChangedInfo *)v47,
        v21);
      v31 = (struct IUnknown **)v47;
      v38 = 0uLL;
      v39 = 0LL;
      v23 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                   (_QWORD *)this + 3,
                   &v31,
                   (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v38,
                   (unsigned __int64 *)&v34) >= 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38 + 1);
      v38 = 0uLL;
      v39 = 0LL;
      v24 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____(
                   v13,
                   &v31,
                   (const struct ItemAnimationCoordinatorBase::ComponentInfo *)&v38,
                   (unsigned __int64 *)&v34) >= 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38 + 1);
      if ( !v23 && !v24 )
        (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, _OWORD *))(*(_QWORD *)this + 160LL))(this, v47);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v47);
      v21 = (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)((char *)v21 + 48);
    }
    while ( v21 != (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)v22 );
    v6 = v32;
  }
  v25 = (__int64 *)*((_QWORD *)this + 23);
  v26 = &v25[3 * *((_QWORD *)this + 24)];
  if ( v25 != v26 )
  {
    v27 = (__int128 *)(v25 + 1);
    do
    {
      v28 = *v25;
      v45 = v28;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v46 = *v27;
      (*(void (__fastcall **)(ItemAnimationCoordinatorBase *, __int64 *))(*(_QWORD *)this + 168LL))(this, &v45);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
      v25 += 3;
      v27 = (__int128 *)((char *)v27 + 24);
    }
    while ( v25 != v26 );
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 27);
  v29 = *((_QWORD *)this + 28);
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 28);
  }
  if ( v6 )
    (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)v6 + 16LL))(v6);
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)this + 16LL))(this);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)&v37);
  return 0LL;
}
