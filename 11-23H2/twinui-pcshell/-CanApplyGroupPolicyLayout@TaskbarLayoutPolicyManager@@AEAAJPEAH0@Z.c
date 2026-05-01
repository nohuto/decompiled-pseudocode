/*
 * XREFs of ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1803E6050
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180105440 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E7F90 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801AABF4 (--$GetActivationFactory@V-$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollection.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1802D25DE (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?SHRegGetFILETIME@@YAJPEAUHKEY__@@PEBG1PEAU_FILETIME@@@Z @ 0x1803DB728 (-SHRegGetFILETIME@@YAJPEAUHKEY__@@PEBG1PEAU_FILETIME@@@Z.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1803E5A3C (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1803E6520 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x1803E74CC (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E75D4 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
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
  HKEY v12; // rcx
  TaskbarLayoutPolicyManager *v13; // rcx
  int v14; // eax
  TaskbarLayoutPolicyManager *v15; // rcx
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  int v17; // eax
  struct IXMLDOMDocument2 *v18; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  int v20; // eax
  struct IXMLDOMDocument2 *v21; // [rsp+40h] [rbp-59h] BYREF
  struct IXMLDOMNode *v22; // [rsp+48h] [rbp-51h] BYREF
  __int64 v23; // [rsp+50h] [rbp-49h] BYREF
  FILETIME FileTime1; // [rsp+58h] [rbp-41h] BYREF
  FILETIME v25; // [rsp+60h] [rbp-39h] BYREF
  FILETIME v26; // [rsp+68h] [rbp-31h] BYREF
  FILETIME FileTime2; // [rsp+70h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-19h] BYREF
  __int64 v29; // [rsp+98h] [rbp-1h]
  HSTRING_HEADER v30; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *a2 = 0;
  *a3 = 0;
  if ( (unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    v6 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(this);
    if ( v6 < 0 )
    {
      v7 = 243LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v23 = 0LL;
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionInitializationStatics",
      0x60u,
      0x5Fu);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionInitializationStatics>>(
           v29,
           &v23);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF7,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_20:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      return (unsigned int)v6;
    }
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)this + 4, v10);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, FILETIME *))(*(_QWORD *)v23 + 72LL))(v23, v31, &v26);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFB,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_19:
      v31 = 0LL;
      goto LABEL_20;
    }
    v25 = v26;
    FileTime1 = 0LL;
    SHRegGetFILETIME(
      v12,
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
      L"LayoutXMLLastModified",
      &FileTime1);
    FileTime2 = 0LL;
    if ( !CompareFileTime(&FileTime1, &FileTime2) || CompareFileTime(&FileTime1, &v25) )
    {
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v21);
      v14 = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
              v13,
              (struct Microsoft::WRL::Wrappers::HStringReference *)&v30,
              &v21);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x108,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v14);
LABEL_18:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v21);
        goto LABEL_19;
      }
      if ( v21 && (int)TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v15, v21) >= 0 )
      {
        v22 = 0LL;
        lpVtbl = v21->lpVtbl;
        hstringHeader = *(HSTRING_HEADER *)((char *)this + 104);
        v17 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))lpVtbl->setProperty)(
                v21,
                *((_QWORD *)this + 16),
                &hstringHeader);
        v6 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x10E,
            (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)v17);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
          goto LABEL_18;
        }
        v18 = v21;
        selectSingleNode = v21->lpVtbl->selectSingleNode;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, struct IXMLDOMNode **))selectSingleNode)(
               v18,
               *((_QWORD *)this + 18),
               &v22) >= 0 )
        {
          if ( v22 )
          {
            *a3 = TaskbarLayoutPolicyManager::IsOverrideLayout(this, v22);
            *a2 = 1;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v21);
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  }
  else
  {
    v25 = 0LL;
    v20 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"LayoutXMLLastModified",
            3u,
            (BYTE *)&v25,
            8u);
    v6 = v20;
    if ( v20 > 0 )
      v6 = (unsigned __int16)v20 | 0x80070000;
    if ( v6 < 0 )
    {
      v7 = 283LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
