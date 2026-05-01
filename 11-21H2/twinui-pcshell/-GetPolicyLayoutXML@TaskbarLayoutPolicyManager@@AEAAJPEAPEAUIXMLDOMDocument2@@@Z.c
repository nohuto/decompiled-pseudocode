/*
 * XREFs of ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180318490
 * Callers:
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
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1803189C0 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::GetPolicyLayoutXML(const WCHAR **this, struct IXMLDOMDocument2 **a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  TaskbarLayoutPolicyManager *v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  struct IXMLDOMDocument2 *v12; // rcx
  struct IXMLDOMDocument2 *v13; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h] BYREF
  __int64 v15; // [rsp+50h] [rbp-19h] BYREF
  __int64 v16; // [rsp+58h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-9h] BYREF
  __int64 v18; // [rsp+78h] [rbp+Fh]
  HSTRING_HEADER v19; // [rsp+80h] [rbp+17h] BYREF
  __int64 v20; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a2 = 0LL;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
    return 2147500037LL;
  v4 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath((TaskbarLayoutPolicyManager *)this);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, this + 4, v5);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v13);
  v9 = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
         v8,
         (struct Microsoft::WRL::Wrappers::HStringReference *)&v19,
         &v13);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19A,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_13:
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v13);
    return v6;
  }
  if ( v13 )
  {
    v14 = 0LL;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionInitializationStatics",
      0x60u,
      0x5Fu);
    v10 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionInitializationStatics>>(
            v18,
            &v14);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 415LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      goto LABEL_13;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 72LL))(v14, v20, &v15);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 418LL;
      goto LABEL_12;
    }
    v16 = v15;
    _RegSetKeyValueWithSDDL(
      HKEY_CURRENT_USER,
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
      L"LayoutXMLLastModified",
      3u,
      (BYTE *)&v16,
      8u);
    v12 = v13;
    if ( v13 )
    {
      ((void (__fastcall *)(struct IXMLDOMDocument2 *))v13->lpVtbl->AddRef)(v13);
      v12 = v13;
    }
    *a2 = v12;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v13);
  return 0LL;
}
