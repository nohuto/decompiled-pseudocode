/*
 * XREFs of ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18074FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIShellItem2@@@?$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellItem2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180549498 (--$As@UIShellItem2@@@-$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIShellIt.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1806A2560 (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ??$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z @ 0x1806C9820 (--$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z.c)
 *     ?IShellItem_GetString@@YAJPEAUIShellItem@@AEBU_tagpropertykey@@PEAPEAG@Z @ 0x18074EB28 (-IShellItem_GetString@@YAJPEAUIShellItem@@AEBU_tagpropertykey@@PEAPEAG@Z.c)
 *     ?IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z @ 0x18074EBD8 (-IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z.c)
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x18074F114 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18074F380 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18074F600 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG@Z @ 0x18074F974 (-_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPE.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x180754248 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x18075E468 (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CTaskbandPin::v_IsAcceptableTarget(
        CTaskbandPin *a1,
        const ITEMIDLIST *a2,
        struct IShellLinkW *a3,
        __int64 a4,
        struct IShellItem **a5,
        unsigned __int16 **a6,
        unsigned __int16 **a7,
        void **a8)
{
  char v8; // r13
  unsigned int v11; // r14d
  unsigned int v12; // eax
  CPinnedList *v13; // rcx
  int Instance; // r15d
  struct IShellItem2 *v15; // rbx
  HRESULT (__stdcall *GetString)(IShellItem2 *, const PROPERTYKEY *const, LPWSTR *); // rsi
  CTaskbandPin *v17; // rcx
  struct IShellItem **v18; // r8
  struct IShellItemVtbl *v19; // rcx
  char v20; // bl
  char v21; // r13
  ITEMIDLIST *v22; // rsi
  void *v23; // rbx
  __int64 (__fastcall *v24)(void *, _QWORD, const GUID *, GUID *); // rdi
  int v25; // eax
  struct IShellLinkW v26; // rax
  void *v27; // rcx
  bool v28; // di
  void *v29; // rcx
  struct IShellItem2 *v30; // rcx
  ITEMIDLIST *v31; // rcx
  CPinnedList *v32; // rcx
  int v33; // edi
  ITEMIDLIST *v34; // rcx
  HRESULT (__stdcall *QueryInterface)(IShellItem *, const IID *const, void **); // rax
  int v36; // eax
  unsigned __int16 *v37; // rcx
  int v38; // eax
  __int64 v39; // r9
  const ITEMIDLIST *v40; // rdi
  void **v41; // r13
  int v42; // eax
  CPinnedList *v43; // rcx
  unsigned __int16 **v44; // rbx
  const struct _tagpropertykey *v45; // rdx
  CTaskbandPin *v46; // rcx
  LPITEMIDLIST v47; // rcx
  unsigned __int16 **v48; // rbx
  LPITEMIDLIST v49; // rax
  struct IShellItem *v50; // rax
  struct IShellLinkW **bIgnoreCase; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+44h] [rbp-BCh]
  unsigned int v54; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 **v55; // [rsp+50h] [rbp-B0h]
  int v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+5Ch] [rbp-A4h]
  CTaskbandPin *v58; // [rsp+60h] [rbp-A0h]
  const ITEMIDLIST *v59; // [rsp+68h] [rbp-98h]
  void **v60; // [rsp+70h] [rbp-90h]
  unsigned __int16 **v61; // [rsp+78h] [rbp-88h]
  LPCITEMIDLIST ppidlLast; // [rsp+80h] [rbp-80h] BYREF
  void *ppv; // [rsp+88h] [rbp-78h] BYREF
  struct IShellItem v64; // [rsp+90h] [rbp-70h] BYREF
  LPITEMIDLIST ppidl[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-58h]
  LPCITEMIDLIST pidl; // [rsp+B0h] [rbp-50h] BYREF
  struct IShellLinkW *v68; // [rsp+B8h] [rbp-48h] BYREF
  struct IShellItem2 *v69; // [rsp+C0h] [rbp-40h] BYREF
  LPCITEMIDLIST pidl1; // [rsp+C8h] [rbp-38h] BYREF
  void *v71; // [rsp+D0h] [rbp-30h] BYREF
  LPCITEMIDLIST v72; // [rsp+D8h] [rbp-28h]
  unsigned __int16 v73[264]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 v74[264]; // [rsp+2F0h] [rbp+1F0h] BYREF
  WCHAR pszStr1[264]; // [rsp+500h] [rbp+400h] BYREF

  v8 = a4;
  v56 = a4;
  v59 = a2;
  v58 = a1;
  v55 = a6;
  v61 = a7;
  v60 = a8;
  v11 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a7 = 0LL;
  v53 = a4 & 4;
  v12 = 0x40000000;
  if ( (a4 & 4) != 0 )
    v12 = 1614807040;
  v54 = v12;
  if ( (int)SHGetNameAndFlagsW(a2, 0xC000u, v74, a4, &v54) >= 0 )
  {
    v57 = v8 & 2;
    if ( (v8 & 2) == 0 || (v8 & 4) != 0 || CPinnedList::_IsLocalHardDisk(v13, v74) || (v54 & 0x40000000) == 0 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
      Instance = SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
      if ( Instance < 0 )
        goto LABEL_129;
      v69 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IShellItem>::As<IShellItem2>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&ppv,
                  (__int64 *)&v69) < 0 )
        goto LABEL_24;
      ppidl[0] = 0LL;
      ppidl[1] = 0LL;
      v66 = 0LL;
      v15 = v69;
      GetString = v69->lpVtbl->GetString;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
      ppidl[1] = (LPITEMIDLIST)-1LL;
      v66 = -1LL;
      if ( ((int (__fastcall *)(struct IShellItem2 *, __int128 *, LPITEMIDLIST *))GetString)(
             v15,
             &PKEY_AppUserModel_ParentID,
             ppidl) >= 0
        && ppidl[0]
        && ppidl[0]->mkid.cb )
      {
        Instance = -2147467259;
      }
      if ( (v8 & 0x10) == 0 && !CTaskbandPin::IsPinnable(v17, v69) )
        Instance = -2147467259;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
      if ( Instance >= 0 )
      {
LABEL_24:
        v64.lpVtbl = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v64);
        if ( (int)TaskbarPinHelper::GetTaskbarPinnableItem((TaskbarPinHelper *)ppv, &v64, v18) >= 0 )
        {
          v19 = (struct IShellItemVtbl *)ppv;
          ppv = v64.lpVtbl;
          v64.lpVtbl = v19;
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v64);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v69);
      if ( Instance < 0 )
        goto LABEL_129;
      v64.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v64);
      Instance = CoCreateInstance(
                   &CLSID_StartMenuCacheAndAppResolver,
                   0LL,
                   3u,
                   &GUID_de25675a_72de_44b4_9373_05170450c140,
                   (LPVOID *)&v64.lpVtbl);
      if ( Instance < 0 )
      {
LABEL_128:
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v64);
LABEL_129:
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
        return Instance >= 0;
      }
      v20 = 0;
      v21 = 0;
      memset_0(v73, 0, 0x208uLL);
      v68 = a3;
      if ( a3 )
      {
        ((void (__fastcall *)(struct IShellLinkW *))a3->lpVtbl->AddRef)(a3);
        a3 = v68;
      }
      v22 = 0LL;
      v72 = 0LL;
      if ( !a3 )
      {
        v23 = ppv;
        v24 = *(__int64 (__fastcall **)(void *, _QWORD, const GUID *, GUID *))(*(_QWORD *)ppv + 24LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
        bIgnoreCase = &v68;
        v25 = v24(v23, 0LL, &BHID_SFUIObject, &GUID_000214f9_0000_0000_c000_000000000046);
        v20 = 0;
        if ( v25 < 0 )
        {
          v33 = v53;
LABEL_72:
          *(_OWORD *)ppidl = *(_OWORD *)L"search-ms:";
          LODWORD(v66) = *(_DWORD *)L"s:";
          WORD2(v66) = aSearchMs[10];
          v37 = v74;
          if ( v20 )
            v37 = pszStr1;
          if ( !StrCmpNICW(v37, (LPCWSTR)ppidl, 10) )
          {
LABEL_75:
            Instance = -2147467259;
            goto LABEL_125;
          }
LABEL_69:
          QueryInterface = v64.lpVtbl->QueryInterface;
          if ( v68 )
            v36 = (*((__int64 (__fastcall **)(struct IShellItemVtbl *, struct IShellLinkW *, void *))QueryInterface + 11))(
                    v64.lpVtbl,
                    v68,
                    ppv);
          else
            v36 = (*((__int64 (__fastcall **)(struct IShellItemVtbl *, void *))QueryInterface + 10))(v64.lpVtbl, ppv);
          Instance = v36;
          if ( v33 )
          {
            v38 = v56 & 8;
          }
          else
          {
            v38 = v56 & 8;
            if ( (v56 & 8) == 0 )
              goto LABEL_125;
          }
          if ( Instance < 0 )
          {
            if ( !v38 )
            {
              if ( !(unsigned int)SHWindowsPolicy(&POLID_NoPinningToDestinations) )
              {
                v40 = v59;
                if ( v22 )
                  v40 = v22;
                if ( !v20 || v73[0] )
                {
                  v41 = v60;
                  if ( v60 )
                  {
                    if ( (v54 & 0x20000000) == 0 || (v54 & 0x400000) != 0 )
                      v42 = CTaskbandPin::_ProcessDestinationFile(
                              v58,
                              (struct IApplicationResolver *)v64.lpVtbl,
                              v40,
                              v54,
                              a5,
                              v55,
                              v61);
                    else
                      v42 = CTaskbandPin::_ProcessDestinationFolder(
                              v58,
                              (struct IApplicationResolver *)v64.lpVtbl,
                              v40,
                              v39,
                              a5,
                              v55);
                    Instance = v42;
                    if ( v42 >= 0 )
                      Instance = SHCreateItemFromIDList(v40, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, v41);
                  }
                  else
                  {
                    Instance = -2147418113;
                  }
                }
                goto LABEL_125;
              }
              goto LABEL_97;
            }
LABEL_125:
            if ( v22 )
              CoTaskMemFree(v22);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
            goto LABEL_128;
          }
          if ( (unsigned int)SHWindowsPolicy(&POLID_NoPinningToTaskbar) )
          {
LABEL_97:
            Instance = -2147024891;
            goto LABEL_125;
          }
          if ( v20 )
          {
            v44 = v55;
            if ( !a5 && !v55 )
              goto LABEL_125;
            if ( ((v54 & 0x40000000) == 0 || CPinnedList::_IsLocalHardDisk(v43, v74))
              && (CPinnedList::_IsLocalHardDisk(v43, v73) || v21) )
            {
              Instance = 0;
              if ( !a5
                || (Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IShellItem **))ppv)(
                                 ppv,
                                 &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                                 a5),
                    Instance >= 0) )
              {
                if ( v44 )
                {
                  Instance = (*((__int64 (__fastcall **)(struct IShellItemVtbl *, struct IShellLinkW *, void *, unsigned __int16 **))v64.lpVtbl->QueryInterface
                              + 4))(
                               v64.lpVtbl,
                               v68,
                               ppv,
                               v44);
                  if ( Instance < 0 )
                  {
                    if ( a5 )
                      SafeRelease<IShellItem>((__int64 *)a5);
                  }
                }
              }
              goto LABEL_125;
            }
            goto LABEL_75;
          }
          ppidl[0] = 0LL;
          ppidl[1] = 0LL;
          v66 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
          ppidl[1] = (LPITEMIDLIST)-1LL;
          v66 = -1LL;
          Instance = IShellItem_GetString((struct IShellItem *)ppv, v45, (unsigned __int16 **)ppidl);
          if ( Instance < 0 )
          {
            Instance = CTaskbandPin::_GetApplication(v46, (struct IApplicationResolver *)v64.lpVtbl, v74, a5, v55, 0LL);
            if ( Instance >= 0 )
            {
LABEL_122:
              if ( a5 )
              {
                v50 = (struct IShellItem *)ppv;
                ppv = 0LL;
                *a5 = v50;
              }
            }
          }
          else
          {
            if ( CompareStringOrdinal(
                   &ppidl[0]->mkid.cb,
                   -1,
                   L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
                   -1,
                   1) == 2 )
              goto LABEL_113;
            v47 = (LPITEMIDLIST)&LocaleName;
            if ( ppidl[0] )
              v47 = ppidl[0];
            if ( CompareStringOrdinal(&v47->mkid.cb, -1, L"Microsoft.WindowsStore_8wekyb3d8bbwe!App", -1, 1) == 2
              && (unsigned int)SHWindowsPolicy(&POLID_NoPinningStoreToTaskbar) )
            {
LABEL_113:
              Instance = -2147467259;
            }
            else
            {
              v48 = v55;
              if ( !v55 )
                goto LABEL_122;
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
              Instance = SHCreateItemInKnownFolder(
                           &FOLDERID_AppsFolder,
                           0x4000u,
                           &ppidl[0]->mkid.cb,
                           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                           &ppv);
              if ( Instance >= 0 )
              {
                v49 = ppidl[0];
                ppidl[0] = 0LL;
                v66 = 0LL;
                ppidl[1] = 0LL;
                *v48 = &v49->mkid.cb;
                goto LABEL_122;
              }
            }
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
          goto LABEL_125;
        }
        a3 = v68;
      }
      pidl = 0LL;
      v26.lpVtbl = a3->lpVtbl;
      ppidl[0] = (LPITEMIDLIST)&pidl;
      ppidl[1] = 0LL;
      LOBYTE(v66) = 1;
      Instance = ((__int64 (__fastcall *)(struct IShellLinkW *, LPITEMIDLIST *))v26.lpVtbl->GetIDList)(a3, &ppidl[1]);
      if ( (_BYTE)v66 )
      {
        v27 = *(void **)ppidl[0];
        *(_QWORD *)ppidl[0] = ppidl[1];
        if ( v27 )
          CoTaskMemFree(v27);
      }
      if ( Instance < 0 )
      {
        v33 = v53;
      }
      else
      {
        v71 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v71);
        if ( SHBindToParent(pidl, &GUID_000214e6_0000_0000_c000_000000000046, &v71, &ppidlLast) >= 0 )
        {
          pidl1 = 0LL;
          ppidl[0] = (LPITEMIDLIST)&pidl1;
          ppidl[1] = 0LL;
          LOBYTE(v66) = 1;
          v28 = SHGetKnownFolderIDList(&FOLDERID_AppsFolder, 0x4000u, 0LL, &ppidl[1]) >= 0;
          if ( (_BYTE)v66 )
          {
            v29 = *(void **)ppidl[0];
            *(_QWORD *)ppidl[0] = ppidl[1];
            if ( v29 )
              CoTaskMemFree(v29);
          }
          if ( v28 && ILIsParent(pidl1, pidl, 1) )
          {
            v69 = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v69);
            if ( SHCreateItemFromIDList(pidl, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)&v69) >= 0 )
            {
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
              v30 = (struct IShellItem2 *)ppv;
              ppv = v69;
              v69 = v30;
            }
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v69);
          }
          v31 = (ITEMIDLIST *)pidl1;
          pidl1 = 0LL;
          if ( v31 )
            CoTaskMemFree(v31);
        }
        if ( v68
          && (v20 = 1,
              CPinnedList::GetAppPathFromShortcut(v68, (struct IShellItem *)ppv, 0x8000u, v73, (int)bIgnoreCase) >= 0)
          && v57 )
        {
          if ( v73[0] != 58 || v73[1] != 58 || v73[2] != 123 || (v21 = 1, !v73[3]) )
            v21 = 0;
          v33 = v53;
          if ( v53 || CPinnedList::_IsLocalHardDisk(v32, v73) || v21 )
          {
            v22 = (ITEMIDLIST *)pidl;
            v72 = pidl;
            pidl = 0LL;
          }
        }
        else
        {
          v33 = v53;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v71);
      }
      v34 = (ITEMIDLIST *)pidl;
      pidl = 0LL;
      if ( v34 )
        CoTaskMemFree(v34);
      if ( Instance < 0 )
        goto LABEL_125;
      if ( v20
        && CPinnedList::GetAppPathFromShortcut(v68, (struct IShellItem *)ppv, 0x4000u, pszStr1, (int)bIgnoreCase) < 0 )
      {
        goto LABEL_69;
      }
      goto LABEL_72;
    }
  }
  return v11;
}
