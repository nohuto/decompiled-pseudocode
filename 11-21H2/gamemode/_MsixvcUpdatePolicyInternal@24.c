/*
 * XREFs of _MsixvcUpdatePolicyInternal@24 @ 0x10004DEE
 * Callers:
 *     _MsixvcUpdatePolicyString@16 @ 0x10005360 (_MsixvcUpdatePolicyString@16.c)
 *     _MsixvcUpdatePolicyUInt64@20 @ 0x100053B0 (_MsixvcUpdatePolicyUInt64@20.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ??1?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@QAE@XZ @ 0x100057CC (--1-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@QAE.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QAEPAPAUIPackage@StateRepository@Internal@Windows@@XZ @ 0x10005827 (--B-$ComPtrRef@V-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WR.c)
 *     ??$?0PB_W@HStringReference@Wrappers@WRL@Microsoft@@QAE@ABQB_WUDummy@Details@23@@Z @ 0x1000595B (--$-0PB_W@HStringReference@Wrappers@WRL@Microsoft@@QAE@ABQB_WUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackagePolicy@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YGJPAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackagePolicy@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x100059AE (--$ActivateInstance@V-$ComPtr@UIPackagePolicy@StateRepository@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YGXJK@Z @ 0x10005A81 (-RaiseException@Details@WRL@Microsoft@@YGXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10005ACC (-_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 *     __EH_epilog3_GS @ 0x100073B3 (__EH_epilog3_GS.c)
 *     __EH_prolog3_GS @ 0x10007401 (__EH_prolog3_GS.c)
 */

int __fastcall MsixvcUpdatePolicyInternal(int a1, int a2, int a3, int a4, int a5, int a6)
{
  void *ActivationFactory; // eax
  int v7; // esi
  void *v8; // eax
  IUnknown *v9; // esi
  ULONG (__stdcall *AddRef)(IUnknown *); // ebx
  int v11; // edi
  int v12; // eax
  void *v13; // eax
  HSTRING v14; // edi
  void *v15; // eax
  int v16; // esi
  int (__thiscall *v17)(_DWORD, int, int, _DWORD, int, int *); // ebx
  int v18; // eax
  int v19; // esi
  int (__thiscall *v20)(_DWORD, int, _DWORD); // edi
  int v21; // eax
  int v22; // esi
  int (__thiscall *v23)(_DWORD, int, _DWORD); // edi
  int v24; // eax
  int v25; // esi
  int (__thiscall *v26)(_DWORD, int, _DWORD); // edi
  int v27; // eax
  Microsoft::WRL::Details *v29; // [esp+0h] [ebp-F0h]
  const char *v30; // [esp+4h] [ebp-ECh]
  unsigned int v31; // [esp+8h] [ebp-E8h]
  _DWORD v32[2]; // [esp+10h] [ebp-E0h] BYREF
  int v33; // [esp+18h] [ebp-D8h] BYREF
  int v34; // [esp+1Ch] [ebp-D4h] BYREF
  IUnknown *pProxy; // [esp+20h] [ebp-D0h] BYREF
  int v36; // [esp+24h] [ebp-CCh] BYREF
  int v37; // [esp+28h] [ebp-C8h] BYREF
  int v38; // [esp+2Ch] [ebp-C4h] BYREF
  char v39; // [esp+33h] [ebp-BDh] BYREF
  int v40; // [esp+34h] [ebp-BCh] BYREF
  _BYTE v41[24]; // [esp+38h] [ebp-B8h] BYREF
  _BYTE v42[24]; // [esp+50h] [ebp-A0h] BYREF
  _BYTE v43[24]; // [esp+68h] [ebp-88h] BYREF
  _BYTE v44[24]; // [esp+80h] [ebp-70h] BYREF
  _BYTE v45[20]; // [esp+98h] [ebp-58h] BYREF
  int v46; // [esp+ACh] [ebp-44h]
  HSTRING_HEADER v47; // [esp+B0h] [ebp-40h] BYREF
  HSTRING v48; // [esp+C4h] [ebp-2Ch] BYREF
  HSTRING_HEADER hstringHeader; // [esp+C8h] [ebp-28h] BYREF
  HSTRING string[4]; // [esp+DCh] [ebp-14h] BYREF
  int v51; // [esp+ECh] [ebp-4h]
  wil::details::in1diag3 *retaddr; // [esp+F4h] [ebp+4h]

  v34 = a4;
  v32[0] = a1;
  v33 = a2;
  pProxy = 0;
  v36 = 0;
  string[0] = 0;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, string) < 0 )
    goto LABEL_46;
  v51 = -1;
  ActivationFactory = (void *)RoGetActivationFactory(string[0], &_GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &pProxy);
  v7 = (int)ActivationFactory;
  if ( (int)ActivationFactory >= 0 )
  {
    v8 = (void *)CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, (OLECHAR *)0xFFFFFFFF, 0, 3u, 0, 0x40u);
    if ( (int)v8 < 0 )
      wil::details::in1diag3::_Log_Hr(retaddr, v8, (unsigned int)v29, v30, v31);
    v9 = pProxy;
    AddRef = pProxy->lpVtbl[17].AddRef;
    v32[1] = &v36;
    v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>>::operator Windows::Internal::StateRepository::IPackage * *(
            v29,
            v30);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v44, v32, v37);
    v13 = (void *)((int (__thiscall *)(ULONG (__stdcall *)(IUnknown *), IUnknown *, _DWORD, _DWORD, int))AddRef)(
                    AddRef,
                    v9,
                    0,
                    *(_DWORD *)(v12 + 20),
                    v11);
    v7 = (int)v13;
    if ( (int)v13 < 0 )
      goto LABEL_7;
    if ( (int)IsDeveloperModeEnabled(&v37) < 0 || !v37 )
    {
      v13 = (void *)(*(int (__thiscall **)(_DWORD, int, char *))(*(_DWORD *)v36 + 208))(
                      *(_DWORD *)(*(_DWORD *)v36 + 208),
                      v36,
                      &v39);
      v7 = (int)v13;
      if ( (int)v13 < 0 )
      {
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          (int)retaddr,
          (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
          v13,
          (unsigned int)v29,
          v30,
          v31);
        goto LABEL_45;
      }
      if ( !v39 )
      {
        v7 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          (int)retaddr,
          (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
          (void *)0x80070057,
          (unsigned int)v29,
          v30,
          v31);
        goto LABEL_45;
      }
    }
    v38 = 0;
    v40 = 0;
    string[0] = 0;
    if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, string) < 0 )
      goto LABEL_46;
    v14 = string[0];
    v51 = 1;
    if ( v38 )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v38 + 8))(*(_DWORD *)(*(_DWORD *)v38 + 8), v38);
    v51 = -1;
    v15 = (void *)RoGetActivationFactory(v14, &_GUID_93b105c2_0759_4c56_b8da_6e8f72ac464e, &v38);
    v7 = (int)v15;
    if ( (int)v15 < 0 )
      goto LABEL_42;
    v16 = v38;
    v17 = *(int (__thiscall **)(_DWORD, int, int, _DWORD, int, int *))(*(_DWORD *)v38 + 148);
    v51 = 2;
    if ( v40 )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v40 + 8))(*(_DWORD *)(*(_DWORD *)v40 + 8), v40);
    v51 = -1;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v43, &v33, v37);
    v15 = (void *)v17(v17, v16, v36, *(_DWORD *)(v18 + 20), a3, &v40);
    v7 = (int)v15;
    if ( (int)v15 < 0 )
      goto LABEL_42;
    if ( !v40 )
    {
      v48 = 0;
      if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &v47, &v48) >= 0 )
      {
        v15 = (void *)Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackagePolicy>>(&v40);
        v7 = (int)v15;
        if ( (int)v15 < 0 )
          goto LABEL_42;
        v15 = (void *)(*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)v40 + 68))(
                        *(_DWORD *)(*(_DWORD *)v40 + 68),
                        v40,
                        v36);
        v7 = (int)v15;
        if ( (int)v15 < 0 )
          goto LABEL_42;
        v19 = v40;
        v20 = *(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)v40 + 76);
        v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v42, &v33, v37);
        v15 = (void *)v20(v20, v19, *(_DWORD *)(v21 + 20));
        v7 = (int)v15;
        if ( (int)v15 < 0 )
          goto LABEL_42;
        v15 = (void *)(*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)v40 + 84))(
                        *(_DWORD *)(*(_DWORD *)v40 + 84),
                        v40,
                        a3);
        v7 = (int)v15;
        if ( (int)v15 < 0 )
          goto LABEL_42;
        v15 = (void *)(*(int (__thiscall **)(_DWORD, int, int, int))(*(_DWORD *)v40 + 108))(
                        *(_DWORD *)(*(_DWORD *)v40 + 108),
                        v40,
                        a5,
                        a6);
        v7 = (int)v15;
        if ( (int)v15 < 0 )
          goto LABEL_42;
        if ( v34 )
        {
          v22 = v40;
          v23 = *(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)v40 + 100);
          v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v41, &v34, v37);
          v15 = (void *)v23(v23, v22, *(_DWORD *)(v24 + 20));
          v7 = (int)v15;
          if ( (int)v15 < 0 )
            goto LABEL_42;
        }
        else
        {
          v15 = (void *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v40 + 92))(
                          *(_DWORD *)(*(_DWORD *)v40 + 92),
                          v40);
          v7 = (int)v15;
          if ( (int)v15 < 0 )
            goto LABEL_42;
        }
        v15 = (void *)(*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)v38 + 24))(
                        *(_DWORD *)(*(_DWORD *)v38 + 24),
                        v38,
                        v40);
        v7 = (int)v15;
        if ( (int)v15 < 0 )
          goto LABEL_42;
LABEL_43:
        v7 = 0;
        goto LABEL_44;
      }
LABEL_46:
      Microsoft::WRL::Details::RaiseException(v29, (int)v30, v31);
      JUMPOUT(0x1000534B);
    }
    v15 = (void *)(*(int (__thiscall **)(_DWORD, int, int, int))(*(_DWORD *)v40 + 108))(
                    *(_DWORD *)(*(_DWORD *)v40 + 108),
                    v40,
                    a5,
                    a6);
    v7 = (int)v15;
    if ( (int)v15 < 0 )
      goto LABEL_42;
    if ( v34 )
    {
      v25 = v40;
      v26 = *(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)v40 + 100);
      v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v45, &v34, v37);
      v15 = (void *)v26(v26, v25, *(_DWORD *)(v27 + 20));
      v46 = 0;
      v7 = (int)v15;
      if ( (int)v15 < 0 )
        goto LABEL_42;
    }
    else
    {
      v15 = (void *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v40 + 92))(*(_DWORD *)(*(_DWORD *)v40 + 92), v40);
      v7 = (int)v15;
      if ( (int)v15 < 0 )
        goto LABEL_42;
    }
    v15 = (void *)(*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)v38 + 28))(
                    *(_DWORD *)(*(_DWORD *)v38 + 28),
                    v38,
                    v40);
    v7 = (int)v15;
    if ( (int)v15 >= 0 )
      goto LABEL_43;
LABEL_42:
    wil::details::in1diag3::Return_Hr(
      (int)retaddr,
      (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      v15,
      (unsigned int)v29,
      v30,
      v31);
LABEL_44:
    Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v40);
    Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v38);
    goto LABEL_45;
  }
  wil::details::in1diag3::Return_Hr(
    (int)retaddr,
    (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    ActivationFactory,
    (unsigned int)v29,
    v30,
    v31);
LABEL_45:
  Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v36);
  Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&pProxy);
  return v7;
}
