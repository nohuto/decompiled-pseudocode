/*
 * XREFs of ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x18004D2EC
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x18004D0B8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$As@UICompositionLight@Composition@UI@Windows@@@?$ComPtr@UISpotLight@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D98C (--$As@UICompositionLight@Composition@UI@Windows@@@-$ComPtr@UISpotLight@Composition@UI@Windows@@@.c)
 *     ??$As@UICompositorInternal@Internal@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInternal@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D9E8 (--$As@UICompositorInternal@Internal@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevic.c)
 *     ?AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@Windows@@PEAUIExpressionAnimation@345@@Z @ 0x18004DCC0 (-AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@.c)
 *     ?InternalRelease@?$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C73C (-InternalRelease@-$ComPtr@UICompositionLight@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CGlobalLightSet::AddNewRevealSpotLightWithType(
        __int64 a1,
        int a2,
        __int64 a3,
        struct Windows::UI::Composition::IExpressionAnimation *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, struct Windows::UI::Composition::ISpotLight **); // rsi
  int v13; // eax
  CGlobalLightSet *v14; // rcx
  int v15; // eax
  __int64 (__fastcall *v16)(__int64, __int64, void **); // rbx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  struct Windows::UI::Composition::ISpotLight *v25; // [rsp+28h] [rbp-38h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h] BYREF
  void *v27; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+48h] [rbp-18h] BYREF
  int Buffer; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v6 = a2;
  v8 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 32LL);
  v29 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v28 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::Internal::ICompositorInternal>(
         &v29,
         &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_23;
  }
  v25 = 0LL;
  v11 = v28;
  v12 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ISpotLight **))(*(_QWORD *)v28 + 96LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  v13 = v12(v11, &v25);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 201LL;
    goto LABEL_47;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25 + 72LL))(
          v25,
          a3);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 202LL;
    goto LABEL_47;
  }
  if ( (_DWORD)v6 != 1 )
  {
    if ( (_DWORD)v6 != 2 )
    {
      v10 = -2147024809;
      v21 = 2147942487LL;
      v22 = 226LL;
LABEL_48:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)v21);
      goto LABEL_22;
    }
    v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 56LL))(v25);
    v10 = v13;
    if ( v13 < 0 )
    {
      v22 = 217LL;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 152LL))(v25);
      v10 = v13;
      if ( v13 < 0 )
      {
        v22 = 218LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 120LL))(v25);
        v10 = v13;
        if ( v13 < 0 )
        {
          v22 = 219LL;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25
                                                                                                  + 136LL))(
                  v25,
                  0xFFFFFFFFLL);
          v10 = v13;
          if ( v13 < 0 )
          {
            v22 = 220LL;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 200LL))(v25);
            v10 = v13;
            if ( v13 < 0 )
            {
              v22 = 221LL;
            }
            else
            {
              v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25 + 216LL))(
                      v25,
                      0xFFFFFFFFLL);
              v10 = v13;
              if ( v13 >= 0 )
                goto LABEL_14;
              v22 = 222LL;
            }
          }
        }
      }
    }
LABEL_47:
    v21 = (unsigned int)v13;
    goto LABEL_48;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 56LL))(v25);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 208LL;
    goto LABEL_47;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 152LL))(v25);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 209LL;
    goto LABEL_47;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 120LL))(v25);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 210LL;
    goto LABEL_47;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25 + 136LL))(
          v25,
          0xFFFFFFFFLL);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 211LL;
    goto LABEL_47;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *))(*(_QWORD *)v25 + 200LL))(v25);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 212LL;
    goto LABEL_47;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ISpotLight *, __int64))(*(_QWORD *)v25 + 216LL))(
          v25,
          0xFFFFFFFFLL);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 213LL;
    goto LABEL_47;
  }
LABEL_14:
  v13 = CGlobalLightSet::AttachExpressionAnimationToRevealSpotLight(v14, v25, a4);
  v10 = v13;
  if ( v13 < 0 )
  {
    v22 = 230LL;
    goto LABEL_47;
  }
  v26 = 0LL;
  v15 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpotLight>::As<Windows::UI::Composition::ICompositionLight>(
          &v25,
          &v26);
  v10 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_21;
  }
  v27 = 0LL;
  v16 = *(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)v8 + 224LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v27,
    0LL);
  v17 = v16(v8, v26, &v27);
  v10 = v17;
  if ( v17 < 0 )
  {
    v23 = (unsigned int)v17;
    v24 = 238LL;
LABEL_54:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)v23);
    goto LABEL_20;
  }
  v18 = NtDCompositionSetMaterialProperty(*(_QWORD *)(a1 + 88), v6, v27);
  v10 = v18 | 0x10000000;
  if ( v18 < 0 )
  {
    v24 = 239LL;
LABEL_53:
    v23 = v10;
    goto LABEL_54;
  }
  Buffer = v6;
  v19 = v26;
  v26 = 0LL;
  v31 = v19;
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 16), &Buffer, 0x10u, 0LL) )
  {
    v10 = -2147024882;
    v24 = 244LL;
    goto LABEL_53;
  }
  v10 = 0;
LABEL_20:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v27);
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionLight>::InternalRelease(&v26);
LABEL_22:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  return v10;
}
