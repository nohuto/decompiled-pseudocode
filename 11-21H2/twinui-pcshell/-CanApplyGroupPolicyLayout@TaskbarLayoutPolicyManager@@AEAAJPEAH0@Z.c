/*
 * XREFs of ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1803171D0
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180116C90 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180319364 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801173A4 (--$GetActivationFactory@V-$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollection.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x180172508 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x180316B0C (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1803176D8 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x1803188B8 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1803189C0 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180319EA4 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
        TaskbarLayoutPolicyManager *this,
        int *a2,
        int *a3)
{
  signed int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // r8d
  int v11; // eax
  LSTATUS ValueW; // eax
  bool v13; // sf
  TaskbarLayoutPolicyManager *v14; // rcx
  int LayoutXMLFromFilePath; // eax
  TaskbarLayoutPolicyManager *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 *v19; // rbx
  int (__fastcall *v20)(__int64 *, _QWORD, struct IXMLDOMNode **); // rdi
  int v21; // eax
  DWORD pcbData[2]; // [rsp+40h] [rbp-69h] BYREF
  struct IXMLDOMNode *v23; // [rsp+48h] [rbp-61h] BYREF
  FILETIME FileTime1; // [rsp+50h] [rbp-59h] BYREF
  __int64 v25; // [rsp+58h] [rbp-51h] BYREF
  FILETIME v26; // [rsp+60h] [rbp-49h] BYREF
  FILETIME v27; // [rsp+68h] [rbp-41h] BYREF
  FILETIME FileTime2; // [rsp+70h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-29h] BYREF
  __int64 v30; // [rsp+98h] [rbp-11h]
  HSTRING_HEADER v31; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  *a2 = 0;
  *a3 = 0;
  if ( (unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    v6 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(this);
    if ( v6 < 0 )
    {
      v7 = 255LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v25 = 0LL;
    v30 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionInitializationStatics",
      0x60u,
      0x5Fu);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionInitializationStatics>>(
           v30,
           &v25);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x103,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_25:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      return (unsigned int)v6;
    }
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)this + 4, v10);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, FILETIME *))(*(_QWORD *)v25 + 72LL))(v25, v32, &v27);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x107,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_24:
      v32 = 0LL;
      goto LABEL_25;
    }
    v26 = v27;
    FileTime1 = 0LL;
    pcbData[0] = 8;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
               L"LayoutXMLLastModified",
               8u,
               0LL,
               &FileTime1,
               pcbData);
    v13 = ValueW < 0;
    if ( ValueW > 0 )
      v13 = 1;
    if ( v13 || pcbData[0] != 8 )
      FileTime1 = 0LL;
    FileTime2 = 0LL;
    if ( !CompareFileTime(&FileTime1, &FileTime2) || CompareFileTime(&FileTime1, &v26) )
    {
      *(_QWORD *)pcbData = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)pcbData);
      LayoutXMLFromFilePath = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
                                v14,
                                (struct Microsoft::WRL::Wrappers::HStringReference *)&v31,
                                (struct IXMLDOMDocument2 **)pcbData);
      v6 = LayoutXMLFromFilePath;
      if ( LayoutXMLFromFilePath < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x114,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)LayoutXMLFromFilePath);
LABEL_23:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)pcbData);
        goto LABEL_24;
      }
      if ( *(_QWORD *)pcbData
        && (int)TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v16, *(struct IXMLDOMDocument2 **)pcbData) >= 0 )
      {
        v23 = 0LL;
        v17 = **(_QWORD **)pcbData;
        hstringHeader = *(HSTRING_HEADER *)((char *)this + 104);
        v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HSTRING_HEADER *))(v17 + 640))(
                *(_QWORD *)pcbData,
                *((_QWORD *)this + 16),
                &hstringHeader);
        v6 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x11A,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
          goto LABEL_23;
        }
        v19 = *(__int64 **)pcbData;
        v20 = *(int (__fastcall **)(__int64 *, _QWORD, struct IXMLDOMNode **))(**(_QWORD **)pcbData + 296LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
        if ( v20(v19, *((_QWORD *)this + 18), &v23) >= 0 )
        {
          if ( v23 )
          {
            *a3 = TaskbarLayoutPolicyManager::IsOverrideLayout(this, v23);
            *a2 = 1;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)pcbData);
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  }
  else
  {
    v26 = 0LL;
    v21 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"LayoutXMLLastModified",
            3u,
            (BYTE *)&v26,
            8u);
    v6 = v21;
    if ( v21 > 0 )
      v6 = (unsigned __int16)v21 | 0x80070000;
    if ( v6 < 0 )
    {
      v7 = 295LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
