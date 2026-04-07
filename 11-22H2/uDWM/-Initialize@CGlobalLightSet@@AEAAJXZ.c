/*
 * XREFs of ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18003F6F8
 * Callers:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18003ECA8 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAPEAUIHoverPointerSourcePartner@345@@Z @ 0x18003F398 (-AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAP.c)
 *     ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x18003F4F8 (-AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ.c)
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@@Z @ 0x18003F904 (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x18003FD38 (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x180040058 (-CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePa.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180040320 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005684C (-InternalRelease@-$ComPtr@UIExpressionAnimation@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CGlobalLightSet::Initialize(CGlobalLightSet *this)
{
  int CoordinateSpaceVisual; // ebx
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct Windows::UI::Composition::IVisual **); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, struct Windows::UI::Composition::IVisual **); // rbx
  int v5; // eax
  CGlobalLightSet *v6; // rcx
  int ExpressionAnimationFromHoverPointerSource; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-30h]
  _DWORD v16[4]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v17[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct Windows::UI::Composition::IVisual *v19; // [rsp+78h] [rbp+28h] BYREF
  struct Windows::UI::Composition::IHoverPointerSourcePartner *v20; // [rsp+80h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+88h] [rbp+38h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v16[0] = 0;
  *(float *)&v16[1] = FLOAT_0_02;
  v16[2] = -1082130432;
  v17[0] = 0;
  *(float *)&v17[1] = FLOAT_0_40000001;
  v17[2] = -1082130432;
  CoordinateSpaceVisual = CGlobalLightSet::CreateCoordinateSpaceVisual(this);
  if ( CoordinateSpaceVisual >= 0 )
  {
    v19 = 0LL;
    v3 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct Windows::UI::Composition::IVisual **))(*((_QWORD *)this + 12)
                                                                                                 + 256LL);
    v4 = **v3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    v5 = v4(v3, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, &v19);
    CoordinateSpaceVisual = v5;
    if ( v5 < 0 )
    {
      v12 = 57LL;
    }
    else
    {
      v5 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 3LL, v19, v16);
      CoordinateSpaceVisual = v5;
      if ( v5 < 0 )
      {
        v12 = 58LL;
      }
      else
      {
        v5 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 4LL, v19, v17);
        CoordinateSpaceVisual = v5;
        if ( v5 >= 0 )
        {
          v20 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
          ExpressionAnimationFromHoverPointerSource = CGlobalLightSet::AttachHoverPointerSourceToVisual(
                                                        v6,
                                                        (__int64 (__fastcall ***)(struct Windows::UI::Composition::IVisual *, GUID *, __int64 *))v19,
                                                        &v20);
          CoordinateSpaceVisual = ExpressionAnimationFromHoverPointerSource;
          if ( ExpressionAnimationFromHoverPointerSource < 0 )
          {
            v13 = 63LL;
          }
          else
          {
            Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease((char *)this + 112);
            ExpressionAnimationFromHoverPointerSource = CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(
                                                          v8,
                                                          v20,
                                                          1LL,
                                                          (char *)this + 112);
            CoordinateSpaceVisual = ExpressionAnimationFromHoverPointerSource;
            if ( ExpressionAnimationFromHoverPointerSource < 0 )
            {
              v13 = 65LL;
            }
            else
            {
              Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease((char *)this + 120);
              ExpressionAnimationFromHoverPointerSource = CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(
                                                            v9,
                                                            v20,
                                                            2LL,
                                                            (char *)this + 120);
              CoordinateSpaceVisual = ExpressionAnimationFromHoverPointerSource;
              if ( ExpressionAnimationFromHoverPointerSource < 0 )
              {
                v13 = 66LL;
              }
              else
              {
                ExpressionAnimationFromHoverPointerSource = CGlobalLightSet::AddNewRevealSpotLightWithType(
                                                              this,
                                                              1LL,
                                                              v19);
                CoordinateSpaceVisual = ExpressionAnimationFromHoverPointerSource;
                if ( ExpressionAnimationFromHoverPointerSource < 0 )
                {
                  v13 = 69LL;
                }
                else
                {
                  ExpressionAnimationFromHoverPointerSource = CGlobalLightSet::AddNewRevealSpotLightWithType(
                                                                this,
                                                                2LL,
                                                                v19);
                  CoordinateSpaceVisual = ExpressionAnimationFromHoverPointerSource;
                  if ( ExpressionAnimationFromHoverPointerSource < 0 )
                  {
                    v13 = 70LL;
                  }
                  else
                  {
                    ExpressionAnimationFromHoverPointerSource = CGlobalLightSet::AddNewRevealAmbientLight(this);
                    CoordinateSpaceVisual = ExpressionAnimationFromHoverPointerSource;
                    if ( ExpressionAnimationFromHoverPointerSource >= 0 )
                    {
                      v15 = 0;
                      v10 = RtlPublishWnfStateData(WNF_IMSN_GLOBALLIGHTSINVALIDATED, 0LL, 0LL, 0LL);
                      CoordinateSpaceVisual = v10 | 0x10000000;
                      if ( v10 >= 0 )
                      {
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
                        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
                        CoordinateSpaceVisual = 0;
                        goto LABEL_13;
                      }
                      v14 = (unsigned int)CoordinateSpaceVisual;
                      v13 = 73LL;
                      goto LABEL_19;
                    }
                    v13 = 71LL;
                  }
                }
              }
            }
          }
          v14 = (unsigned int)ExpressionAnimationFromHoverPointerSource;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
            (const char *)v14,
            v15);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
          goto LABEL_20;
        }
        v12 = 59LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v5,
      v15);
LABEL_20:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  }
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)CoordinateSpaceVisual;
}
