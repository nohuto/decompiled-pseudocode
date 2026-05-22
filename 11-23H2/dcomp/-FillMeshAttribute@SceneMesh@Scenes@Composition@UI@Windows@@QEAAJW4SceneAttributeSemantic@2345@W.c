/*
 * XREFs of ?FillMeshAttribute@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJW4SceneAttributeSemantic@2345@W4DirectXPixelFormat@DirectX@Graphics@5@PEAUIMemoryBuffer@Foundation@5@@Z @ 0x18013254C
 * Callers:
 *     ?FillMeshAttribute@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4SceneAttributeSemantic@3456@W4DirectXPixelFormat@DirectX@Graphics@6@PEAUIMemoryBuffer@Foundation@6@@Z @ 0x180132470 (-FillMeshAttribute@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4SceneAttributeSemantic@34.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$MakeAndInitialize2@VSharedSectionWrapper@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAV?$span@E$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVSharedSectionWrapper@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAV?$span@E$0?0@gsl@@@Z @ 0x180131F68 (--$MakeAndInitialize2@VSharedSectionWrapper@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 *     ??4?$RefPtr@VSharedSectionWrapper@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801321A8 (--4-$RefPtr@VSharedSectionWrapper@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@AEBV012@@.c)
 *     ?UpdateBounds@SceneMesh@Scenes@Composition@UI@Windows@@AEAAXXZ @ 0x180132B84 (-UpdateBounds@SceneMesh@Scenes@Composition@UI@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneMesh::FillMeshAttribute(
        __int64 a1,
        int a2,
        int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *))
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rdi
  __int64 v5; // r12
  int v6; // r13d
  __int64 (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  int v16; // eax
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v18)(_QWORD, GUID *, __int64 *); // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rbx
  gsl::details *v23; // rcx
  int v24; // r14d
  int v25; // r14d
  int v26; // r14d
  int v27; // r14d
  int v28; // r14d
  __int64 v29; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v30; // rcx
  Microsoft::WRL2::NestableRuntimeClass **v31; // rcx
  Windows::UI::Composition::CompositionObject *v33; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 v35; // [rsp+30h] [rbp-30h] BYREF
  __int64 v36; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v40; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0LL;
  v5 = a3;
  v6 = 0;
  v33 = 0LL;
  if ( a4 )
  {
    v10 = *a4;
    v36 = 0LL;
    v11 = *v10;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v36);
    v12 = v11(a4, &GUID_fbc4dd2a_245b_11e4_af98_689423260cf8, &v36);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialmesh.cpp",
        (const char *)(unsigned int)v12);
LABEL_21:
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v36);
LABEL_56:
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v33);
      return v13;
    }
    v14 = v36;
    v34 = 0LL;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v36 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v34);
    v16 = v15(v14, &v34);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialmesh.cpp",
        (const char *)(unsigned int)v16);
LABEL_20:
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v34);
      goto LABEL_21;
    }
    v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v34;
    v35 = 0LL;
    v18 = **v34;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v35);
    v19 = v18(v17, &GUID_5b0d3235_4dba_4d44_865e_8f1d0e4fd04d, &v35);
    v13 = v19;
    if ( v19 < 0 )
    {
      v20 = 105LL;
LABEL_18:
      v21 = (unsigned int)v19;
      goto LABEL_19;
    }
    v37[0] = 0LL;
    v40 = 0;
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD *, unsigned int *))(*(_QWORD *)v35 + 24LL))(v35, v37, &v40);
    v13 = v19;
    if ( v19 < 0 )
    {
      v20 = 109LL;
      goto LABEL_18;
    }
    if ( v40 == -1 )
    {
      v13 = -2147418113;
      v20 = 110LL;
      v21 = 2147549183LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialmesh.cpp",
        (const char *)v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v35);
      goto LABEL_20;
    }
    if ( v40 )
    {
      v22 = v37[0];
      gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v38, v40);
      v38[1] = v22;
      if ( v38[0] == -1LL || !v22 && v38[0] )
      {
        gsl::details::terminate(v23);
        __debugbreak();
      }
      v37[1] = *(_QWORD *)(a1 + 24);
      v19 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::SharedSectionWrapper,Windows::UI::Composition::SharedSectionWrapper,Windows::UI::Composition::Compositor *,gsl::span<unsigned char,-1> &>(&v33);
      v13 = v19;
      if ( v19 < 0 )
      {
        v20 = 118LL;
        goto LABEL_18;
      }
      v4 = v33;
      v6 = *((_DWORD *)v33 + 32);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v36);
  }
  if ( !a2 )
  {
    if ( (_DWORD)v5 != 57 && (_DWORD)v5 != 42 )
    {
      v29 = 128LL;
      goto LABEL_55;
    }
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      8,
      v5);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      1,
      v6);
    v31 = (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 184);
LABEL_58:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::SharedSectionWrapper>::operator=(v31, &v33);
    Windows::UI::Composition::Scenes::SceneMesh::UpdateBounds((Windows::UI::Composition::Scenes::SceneMesh *)a1);
    goto LABEL_59;
  }
  v24 = a2 - 1;
  if ( !v24 )
  {
    if ( (_DWORD)v5 != 6 )
    {
      v29 = 137LL;
      goto LABEL_55;
    }
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      9,
      6LL);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      2,
      v6);
    v31 = (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 192);
    goto LABEL_58;
  }
  v25 = v24 - 1;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 != 1 )
          {
            v29 = 185LL;
LABEL_55:
            v13 = -2147024809;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v29,
              (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialmesh.cpp",
              (const char *)0x80070057LL);
            goto LABEL_56;
          }
          if ( (_DWORD)v5 != 2 )
          {
            v29 = 178LL;
            goto LABEL_55;
          }
          DirectComposition::CDevice::ResourceSetIntegerProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            14,
            2LL);
          DirectComposition::CDevice::ResourceSetReferenceProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            7,
            v6);
          v30 = (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 232);
        }
        else
        {
          if ( (_DWORD)v5 != 42 )
          {
            v29 = 170LL;
            goto LABEL_55;
          }
          DirectComposition::CDevice::ResourceSetIntegerProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            13,
            42LL);
          DirectComposition::CDevice::ResourceSetReferenceProperty(
            *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
            *(_DWORD *)(a1 + 128),
            6,
            v6);
          v30 = (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 224);
        }
      }
      else
      {
        if ( (_DWORD)v5 != 16 )
        {
          v29 = 162LL;
          goto LABEL_55;
        }
        DirectComposition::CDevice::ResourceSetIntegerProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          12,
          16LL);
        DirectComposition::CDevice::ResourceSetReferenceProperty(
          *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
          *(_DWORD *)(a1 + 128),
          5,
          v6);
        v30 = (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 216);
      }
    }
    else
    {
      if ( (_DWORD)v5 != 16 )
      {
        v29 = 154LL;
        goto LABEL_55;
      }
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
        *(_DWORD *)(a1 + 128),
        11,
        16LL);
      DirectComposition::CDevice::ResourceSetReferenceProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
        *(_DWORD *)(a1 + 128),
        4,
        v6);
      v30 = (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 208);
    }
  }
  else
  {
    if ( (_DWORD)v5 != 6 )
    {
      v29 = 146LL;
      goto LABEL_55;
    }
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      10,
      6LL);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      *(_DWORD *)(a1 + 128),
      3,
      v6);
    v30 = (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 200);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::SharedSectionWrapper>::operator=(v30, &v33);
LABEL_59:
  if ( v4 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  return 0LL;
}
