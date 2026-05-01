/*
 * XREFs of _MsixvcAddGameToGCS@4 @ 0x100054C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ??1?$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@QAE@XZ @ 0x100057CC (--1-$ComPtr@UIPackageManagerInternal@Internal@Deployment@Management@Windows@@@WRL@Microsoft@@QAE.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QAEPAPAUIPackage@StateRepository@Internal@Windows@@XZ @ 0x10005827 (--B-$ComPtrRef@V-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WR.c)
 *     ??$?0PB_W@HStringReference@Wrappers@WRL@Microsoft@@QAE@ABQB_WUDummy@Details@23@@Z @ 0x1000595B (--$-0PB_W@HStringReference@Wrappers@WRL@Microsoft@@QAE@ABQB_WUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YGXJK@Z @ 0x10005A81 (-RaiseException@Details@WRL@Microsoft@@YGXJK@Z.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 *     __EH_epilog3_GS @ 0x100073B3 (__EH_epilog3_GS.c)
 *     __EH_prolog3_GS @ 0x10007401 (__EH_prolog3_GS.c)
 */

int __stdcall MsixvcAddGameToGCS(int a1)
{
  void *ActivationFactory; // eax
  void *v3; // esi
  int v4; // esi
  int (__thiscall *v5)(_DWORD, int, _DWORD, int); // ebx
  int v6; // edi
  int v7; // eax
  void *v8; // eax
  void *v9; // eax
  int (__thiscall *v10)(_DWORD, int, int, int *); // esi
  int v11; // esi
  int (__thiscall *v12)(_DWORD, int, _DWORD, int *); // ebx
  int v13; // esi
  int (__thiscall *v14)(_DWORD, int, HSTRING *); // edi
  int (__thiscall *v15)(_DWORD, _DWORD **, PCWSTR, _BYTE *); // esi
  PCWSTR StringRawBuffer; // eax
  Microsoft::WRL::Details *v17; // [esp+0h] [ebp-B0h]
  const char *v18; // [esp+4h] [ebp-ACh]
  unsigned int v19; // [esp+8h] [ebp-A8h]
  _DWORD v20[12]; // [esp+10h] [ebp-A0h] BYREF
  int v21; // [esp+40h] [ebp-70h] BYREF
  int v22; // [esp+44h] [ebp-6Ch] BYREF
  int v23; // [esp+48h] [ebp-68h] BYREF
  int v24; // [esp+4Ch] [ebp-64h] BYREF
  int v25; // [esp+50h] [ebp-60h] BYREF
  int v26; // [esp+54h] [ebp-5Ch] BYREF
  HSTRING v27; // [esp+58h] [ebp-58h] BYREF
  _DWORD **v28; // [esp+5Ch] [ebp-54h] BYREF
  _BYTE v29[24]; // [esp+60h] [ebp-50h] BYREF
  _BYTE v30[16]; // [esp+78h] [ebp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [esp+88h] [ebp-28h] BYREF
  HSTRING string[4]; // [esp+9Ch] [ebp-14h] BYREF
  int v33; // [esp+ACh] [ebp-4h]
  int retaddr; // [esp+B4h] [ebp+4h]

  v21 = a1;
  v28 = 0;
  if ( !a1 )
    return -2147024809;
  v22 = 0;
  v33 = -1;
  string[0] = 0;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, string) < 0 )
    goto LABEL_28;
  ActivationFactory = (void *)RoGetActivationFactory(string[0], &_GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v22);
  v3 = ActivationFactory;
  if ( (int)ActivationFactory >= 0 )
  {
    v4 = v22;
    v23 = 0;
    v5 = *(int (__thiscall **)(_DWORD, int, _DWORD, int))(*(_DWORD *)v22 + 88);
    v20[11] = &v23;
    v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>>::operator Windows::Internal::StateRepository::IPackage * *();
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v29, &v21, v21);
    v8 = (void *)v5(v5, v4, *(_DWORD *)(v7 + 20), v6);
    v3 = v8;
    if ( (int)v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        v8,
        (unsigned int)v17,
        v18,
        v19);
LABEL_26:
      Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v23);
      goto LABEL_27;
    }
    v26 = 0;
    v24 = 0;
    v33 = -1;
    string[0] = 0;
    if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, string) >= 0 )
    {
      v9 = (void *)RoGetActivationFactory(string[0], &_GUID_07adcc9a_e505_48c2_b471_45af8561f6af, &v24);
      v3 = v9;
      if ( (int)v9 >= 0 )
      {
        v25 = 0;
        v10 = *(int (__thiscall **)(_DWORD, int, int, int *))(*(_DWORD *)v24 + 72);
        v33 = -1;
        v3 = (void *)v10(v10, v24, v23, &v25);
        if ( (int)v3 < 0 )
          goto LABEL_15;
        v11 = v25;
        v12 = *(int (__thiscall **)(_DWORD, int, _DWORD, int *))(*(_DWORD *)v25 + 24);
        v33 = 3;
        if ( v26 )
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v26 + 8))(*(_DWORD *)(*(_DWORD *)v26 + 8), v26);
        v33 = -1;
        v3 = (void *)v12(v12, v11, 0, &v26);
        if ( (int)v3 >= 0 )
        {
          v13 = v26;
          v14 = *(int (__thiscall **)(_DWORD, int, HSTRING *))(*(_DWORD *)v26 + 140);
          WindowsDeleteString(0);
          v27 = 0;
          v3 = (void *)v14(v14, v13, &v27);
          if ( (int)v3 >= 0 && (v3 = (void *)CreateGameConfigStoreClient(&v28), (int)v3 >= 0) )
          {
            v15 = (int (__thiscall *)(_DWORD, _DWORD **, PCWSTR, _BYTE *))(*v28)[5];
            StringRawBuffer = WindowsGetStringRawBuffer(v27, 0);
            v3 = (void *)v15(v15, v28, StringRawBuffer, v30);
            if ( (int)v3 < 0 )
            {
              memset(&v20[1], 0, 16);
              v20[7] = 0;
              v20[9] = 0;
              v20[6] = WindowsGetStringRawBuffer(v27, 0);
              v20[5] = 2;
              v20[0] = 2;
              v20[8] = 17;
              v3 = (void *)((int (__thiscall *)(_DWORD, _DWORD **, _DWORD *, char *))**v28)(
                             **v28,
                             v28,
                             v20,
                             &hstringHeader.Reserved.Reserved2[8]);
            }
            if ( v28 )
              FreeGameConfigStoreClient(v28);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
              v3,
              (unsigned int)v17,
              v18,
              v19);
          }
          WindowsDeleteString(v27);
          v27 = 0;
        }
        else
        {
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
            v3,
            (unsigned int)v17,
            v18,
            v19);
        }
        Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v25);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
          v9,
          (unsigned int)v17,
          v18,
          v19);
      }
      Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v24);
      Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v26);
      goto LABEL_26;
    }
LABEL_28:
    Microsoft::WRL::Details::RaiseException(v17, (int)v18, v19);
    JUMPOUT(0x100057C0);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (wil::details::in1diag3 *)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    ActivationFactory,
    (unsigned int)v17,
    v18,
    v19);
LABEL_27:
  Microsoft::WRL::ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>::~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>(&v22);
  return (int)v3;
}
