/*
 * XREFs of ?PrivateVisibleFullScreenViewChangedEvent@FullScreenPositioner@@AEAAJPEAUIApplicationView@@0@Z @ 0x1803EDE0C
 * Callers:
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803EE2E8 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4223d05ba65e9276aa35258dd9088577___ @ 0x1803EC024 (Windows--Internal--ComTaskPool--QueueTask__lambda_4223d05ba65e9276aa35258dd9088577___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::PrivateVisibleFullScreenViewChangedEvent(
        IUnknown **this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  HRESULT v6; // eax
  int v7; // ebx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  IUnknown *v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v17; // [rsp+70h] [rbp+20h] BYREF
  void *ppvOut; // [rsp+88h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         this[3],
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8,
         &ppvOut);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v13 = 0LL;
    v17 = 2;
    v14 = (IUnknown *)ppvOut;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           &v13,
           &GUID_c0d2dfdf_8b97_41f6_9f0c_13247f43abb8,
           &v14,
           &v17);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v15[0] = v13;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
      v15[1] = (__int64)a2;
      v15[2] = (__int64)a3;
      v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_4223d05ba65e9276aa35258dd9088577___(
             v11,
             (volatile signed __int32 *)v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
      if ( v7 >= 0 )
      {
        v7 = 0;
        goto LABEL_9;
      }
      v9 = (unsigned int)v7;
      v10 = 959LL;
    }
    else
    {
      v9 = (unsigned int)v8;
      v10 = 950LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)v9);
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B4,
    (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v6);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v7;
}
