/*
 * XREFs of ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x18009F1E8
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z @ 0x1800A137C (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017E34 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005646C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009EB4C (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18009F5C0 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x1800A0880 (-GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU-$IReference@N@Foundation@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(
        CAccentAcrylicBlurBehind *this,
        int a2,
        double *a3)
{
  unsigned int v6; // ebx
  double v7; // xmm6_8
  char *v8; // r12
  int ActivationFactory; // eax
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int LuminosityOpacityReference; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64, _QWORD, __int64, int, _BYTE, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)); // rdi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-69h] BYREF
  __int64 v25; // [rsp+50h] [rbp-61h] BYREF
  int v26; // [rsp+58h] [rbp-59h]
  unsigned int v27; // [rsp+5Ch] [rbp-55h]
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64); // [rsp+60h] [rbp-51h] BYREF
  __int64 v29; // [rsp+68h] [rbp-49h] BYREF
  __int64 v30; // [rsp+70h] [rbp-41h] BYREF
  HSTRING_HEADER v31; // [rsp+78h] [rbp-39h] BYREF
  GUID *v32; // [rsp+90h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-19h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-1h]

  v6 = 0;
  if ( a3 )
    v7 = *a3;
  else
    v7 = DOUBLE_N1_0;
  v8 = (char *)this + 328;
  if ( !*((_QWORD *)this + 41) || *((_DWORD *)this + 94) != a2 || *((double *)this + 48) != v7 )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Xaml.Media.AcrylicBrush",
      0x23u,
      0x22u);
    ActivationFactory = RoGetActivationFactory(v34, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v24);
    v6 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v25 = 0LL;
      v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
      v11 = **v24;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      v12 = v11(v10, &GUID_89c2d40e_e139_58af_b3ef_70f0c0abf608, &v25);
      v6 = v12;
      if ( v12 >= 0 )
      {
        v30 = 0LL;
        v13 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 37,
                &v30);
        v6 = v13;
        if ( v13 >= 0 )
        {
          v29 = 0LL;
          if ( a3
            && (Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29),
                LuminosityOpacityReference = CAccentAcrylicBlurBehind::GetLuminosityOpacityReference(v15, v14, &v29),
                v6 = LuminosityOpacityReference,
                LuminosityOpacityReference < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LuminosityOpacityReference, 0x53Au);
          }
          else
          {
            v28 = 0LL;
            v17 = v25;
            v18 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _BYTE, __int64 (__fastcall ****)(_QWORD, GUID *, __int64)))(*(_QWORD *)v25 + 56LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
            v26 = 255;
            LOBYTE(v27) = HIBYTE(a2);
            *(_WORD *)((char *)&v27 + 1) = a2;
            HIBYTE(v27) = BYTE2(a2);
            v19 = v18(v17, v30, v27, v29, 255, 0, &v28);
            v6 = v19;
            if ( v19 >= 0 )
            {
              v20 = CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(this);
              v6 = v20;
              if ( v20 >= 0 )
              {
                v32 = 0LL;
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v31, L"Noise", 6u, 5u);
                v21 = (*v28)[7](v28, v32, *((_QWORD *)this + 42));
                v6 = v21;
                if ( v21 >= 0 )
                {
                  v22 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
                          &v28,
                          (__int64)v8);
                  v6 = v22;
                  if ( v22 >= 0 )
                  {
                    *((_DWORD *)this + 94) = a2;
                    *((double *)this + 48) = v7;
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x567u);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x54Fu);
                }
                v32 = 0LL;
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x54Bu);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x547u);
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x535u);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x531u);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ActivationFactory, 0x52Du);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  }
  return v6;
}
