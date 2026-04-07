/*
 * XREFs of ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18004D0B8
 * Callers:
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x18004CCB0 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000EC34 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAPEAUIHoverPointerSourcePartner@345@@Z @ 0x18004CD68 (-AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAP.c)
 *     ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x18004CEC8 (-AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ.c)
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x18004D2EC (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x18004D734 (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x18004DA44 (-CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePa.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x18004DDEC (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CGlobalLightSet::Initialize(CGlobalLightSet *this)
{
  int CoordinateSpaceVisual; // ebx
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  CGlobalLightSet *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v23[4]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v24[6]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct Windows::UI::Composition::IVisual *v26; // [rsp+98h] [rbp+28h] BYREF
  struct Windows::UI::Composition::IHoverPointerSourcePartner *v27; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+38h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v23[0] = 0;
  *(float *)&v23[1] = FLOAT_0_02;
  v23[2] = -1082130432;
  v24[0] = 0;
  *(float *)&v24[1] = FLOAT_0_40000001;
  v24[2] = -1082130432;
  CoordinateSpaceVisual = CGlobalLightSet::CreateCoordinateSpaceVisual(this);
  if ( CoordinateSpaceVisual >= 0 )
  {
    v26 = 0LL;
    v3 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 12) + 24LL);
    v21 = v3;
    if ( v3 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v3)[1])(v3);
    CoordinateSpaceVisual = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                              &v21,
                              (__int64 *)&v26);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    if ( CoordinateSpaceVisual < 0 )
    {
      v16 = (unsigned int)CoordinateSpaceVisual;
      v17 = 56LL;
    }
    else
    {
      v4 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 3LL, v26, v23);
      CoordinateSpaceVisual = v4;
      if ( v4 < 0 )
      {
        v17 = 57LL;
      }
      else
      {
        v4 = CGlobalLightSet::AddNewSharedDistantLightWithType(this, 4LL, v26, v24);
        CoordinateSpaceVisual = v4;
        if ( v4 >= 0 )
        {
          v27 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
          v6 = CGlobalLightSet::AttachHoverPointerSourceToVisual(
                 v5,
                 (__int64 (__fastcall ***)(struct Windows::UI::Composition::IVisual *, GUID *, __int64 *))v26,
                 &v27);
          CoordinateSpaceVisual = v6;
          if ( v6 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3E,
              (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
              (const char *)(unsigned int)v6);
            goto LABEL_17;
          }
          v20 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
          v8 = CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(v7, v27, 1LL, &v20);
          CoordinateSpaceVisual = v8;
          if ( v8 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x40,
              (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
              (const char *)(unsigned int)v8);
            goto LABEL_16;
          }
          v28 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
          v10 = CGlobalLightSet::CreateExpressionAnimationFromHoverPointerSource(v9, v27, 2LL, &v28);
          CoordinateSpaceVisual = v10;
          if ( v10 < 0 )
          {
            v18 = (unsigned int)v10;
            v19 = 66LL;
          }
          else
          {
            v11 = CGlobalLightSet::AddNewRevealSpotLightWithType(this, 1LL, v26, v20);
            CoordinateSpaceVisual = v11;
            if ( v11 < 0 )
            {
              v18 = (unsigned int)v11;
              v19 = 69LL;
            }
            else
            {
              v12 = CGlobalLightSet::AddNewRevealSpotLightWithType(this, 2LL, v26, v28);
              CoordinateSpaceVisual = v12;
              if ( v12 < 0 )
              {
                v18 = (unsigned int)v12;
                v19 = 70LL;
              }
              else
              {
                v13 = CGlobalLightSet::AddNewRevealAmbientLight(this);
                CoordinateSpaceVisual = v13;
                if ( v13 < 0 )
                {
                  v18 = (unsigned int)v13;
                  v19 = 71LL;
                }
                else
                {
                  v14 = RtlPublishWnfStateData(WNF_IMSN_GLOBALLIGHTSINVALIDATED, 0LL, 0LL, 0LL, 0LL);
                  CoordinateSpaceVisual = v14 | 0x10000000;
                  if ( v14 >= 0 )
                  {
                    CoordinateSpaceVisual = 0;
LABEL_15:
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
LABEL_16:
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
LABEL_17:
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
LABEL_18:
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
                    goto LABEL_19;
                  }
                  v18 = (unsigned int)CoordinateSpaceVisual;
                  v19 = 73LL;
                }
              }
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
            (const char *)v18);
          goto LABEL_15;
        }
        v17 = 58LL;
      }
      v16 = (unsigned int)v4;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v16);
    goto LABEL_18;
  }
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return (unsigned int)CoordinateSpaceVisual;
}
