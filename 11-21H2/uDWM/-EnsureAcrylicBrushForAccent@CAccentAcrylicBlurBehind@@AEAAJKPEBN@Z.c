/*
 * XREFs of ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x180055574
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z @ 0x1800552C8 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180010950 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A624 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C640 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180055940 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x180056590 (-GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU-$IReference@N@Foundation@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(
        CAccentAcrylicBlurBehind *this,
        int a2,
        double *a3)
{
  unsigned int v6; // ebx
  double v7; // xmm6_8
  int ActivationFactory; // eax
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int LuminosityOpacityReference; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64, _QWORD, __int64, int, _BYTE, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-69h] BYREF
  __int64 v24; // [rsp+50h] [rbp-61h] BYREF
  int v25; // [rsp+58h] [rbp-59h]
  unsigned int v26; // [rsp+5Ch] [rbp-55h]
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-51h] BYREF
  __int64 v28; // [rsp+68h] [rbp-49h] BYREF
  __int64 v29; // [rsp+70h] [rbp-41h] BYREF
  HSTRING_HEADER v30; // [rsp+78h] [rbp-39h] BYREF
  GUID *v31; // [rsp+90h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-19h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-1h]

  v6 = 0;
  if ( a3 )
    v7 = *a3;
  else
    v7 = DOUBLE_N1_0;
  if ( *((_DWORD *)this + 92) != a2 || *((double *)this + 47) != v7 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Xaml.Media.AcrylicBrush",
      0x23u,
      0x22u);
    ActivationFactory = RoGetActivationFactory(v33, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v23);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ActivationFactory, 0x76Du);
    }
    else
    {
      v24 = 0LL;
      v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v23;
      v11 = **v23;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      v12 = v11(v10, &GUID_89c2d40e_e139_58af_b3ef_70f0c0abf608, &v24);
      v6 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x771u);
      }
      else
      {
        v29 = 0LL;
        v13 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 37,
                &v29);
        v6 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x775u);
        }
        else
        {
          v28 = 0LL;
          if ( a3
            && (Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28),
                LuminosityOpacityReference = CAccentAcrylicBlurBehind::GetLuminosityOpacityReference(v15, v14, &v28),
                v6 = LuminosityOpacityReference,
                LuminosityOpacityReference < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LuminosityOpacityReference, 0x77Au);
          }
          else
          {
            v27 = 0LL;
            v17 = v24;
            v18 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _BYTE, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v24 + 56LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
            v25 = 255;
            LOBYTE(v26) = HIBYTE(a2);
            *(_WORD *)((char *)&v26 + 1) = a2;
            HIBYTE(v26) = BYTE2(a2);
            v19 = v18(v17, v29, v26, v28, 255, 0, &v27);
            v6 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x787u);
            }
            else
            {
              v20 = CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(this);
              v6 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x78Bu);
              }
              else
              {
                v31 = 0LL;
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v30, L"Noise", 6u, 5u);
                v21 = (*v27)[7](v27, v31, *((__int64 **)this + 42));
                v6 = v21;
                if ( v21 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x78Fu);
                }
                else
                {
                  v22 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
                          &v27,
                          (__int64 *)this + 41);
                  v6 = v22;
                  if ( v22 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x792u);
                  }
                  else
                  {
                    *((_DWORD *)this + 92) = a2;
                    *((double *)this + 47) = v7;
                  }
                }
                v31 = 0LL;
              }
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  }
  return v6;
}
