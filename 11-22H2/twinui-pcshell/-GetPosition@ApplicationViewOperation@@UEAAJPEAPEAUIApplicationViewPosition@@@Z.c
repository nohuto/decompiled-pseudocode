/*
 * XREFs of ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x180065210
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@AEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAKAEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z @ 0x1803EBF60 (--$MakeAndInitialize@VCCommonApplicationViewArrangePosition@@UIApplicationViewPosition@@AEAUtagR.c)
 */

__int64 __fastcall ApplicationViewOperation::GetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition **a2)
{
  __int64 *v2; // rdi
  char v5; // cl
  int *v6; // rsi
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // eax
  CCommonApplicationViewPosition *v11; // rax
  CCommonApplicationViewPosition *v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-58h]
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 *)((char *)this + 72);
  if ( *((_QWORD *)this + 9) )
    goto LABEL_5;
  v5 = *((_BYTE *)this + 92);
  v6 = (int *)((char *)this + 80);
  if ( !v5 && !*v6 )
    return 2147943568LL;
  if ( !*((_DWORD *)this + 21) || *v6 == 4 )
  {
    if ( *((_DWORD *)this + 22) && !*v6 )
    {
      v8 = 65LL;
      goto LABEL_10;
    }
    v10 = *v6;
    if ( *v6 )
    {
      v15 = 0LL;
      if ( v5 )
      {
        if ( (unsigned int)(v10 - 3) > 1 )
        {
          v8 = 73LL;
          goto LABEL_10;
        }
        v15 = *((_OWORD *)this + 6);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
      v9 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePosition,IApplicationViewPosition,tagRECT &,enum ARRANGEMENT_BASED_VIEW_STATE &,unsigned long &,enum ARRANGEMENT_BASED_VIEW_STATE_OPTIONS &>(
             (_DWORD)v2,
             (unsigned int)&v15,
             (int)this + 80,
             (int)this + 84,
             (__int64)this + 88);
      if ( v9 < 0 )
      {
        v8 = 76LL;
        goto LABEL_13;
      }
LABEL_5:
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v2);
      *a2 = (struct IApplicationViewPosition *)*v2;
      return 0LL;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
    *v2 = 0LL;
    v11 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)&v15 = v11;
    if ( v11 )
    {
      v12 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v11);
      *(_QWORD *)&v15 = 0LL;
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v15, (__int64)v12);
      v13 = v15;
      *(_OWORD *)(v15 + 16) = *((_OWORD *)this + 6);
      v9 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
             v13,
             (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
             v2);
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v15);
      if ( v9 >= 0 )
        goto LABEL_5;
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
      v9 = -2147024882;
    }
    v8 = 81LL;
    goto LABEL_13;
  }
  v8 = 61LL;
LABEL_10:
  v9 = -2147024809;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\ApplicationViewOperationHelpers.h",
    (const char *)(unsigned int)v9,
    v14);
  return (unsigned int)v9;
}
