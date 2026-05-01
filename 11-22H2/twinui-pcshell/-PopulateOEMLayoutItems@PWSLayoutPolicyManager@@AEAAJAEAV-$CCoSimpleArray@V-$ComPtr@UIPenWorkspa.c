/*
 * XREFs of ?PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180495428
 * Callers:
 *     ?GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x180494DE0 (-GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArra.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180494D38 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?Populate@PWSLayoutPolicyManager@@CAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@@Z @ 0x1804950F4 (-Populate@PWSLayoutPolicyManager@@CAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@W.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::PopulateOEMLayoutItems(const WCHAR **this, _QWORD *a2)
{
  int OEMLayoutXML; // eax
  unsigned int v5; // ebx
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  int v7; // eax
  __int64 v8; // rdx
  struct IXMLDOMDocument2 *v9; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  const WCHAR *v13; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IXMLDOMDocument2 *v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v15);
  OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML(this, &v15);
  v5 = OEMLayoutXML;
  if ( OEMLayoutXML >= 0 )
  {
    v16 = 0LL;
    lpVtbl = v15->lpVtbl;
    v12 = *((_OWORD *)this + 5);
    v13 = this[12];
    v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, const WCHAR *, __int128 *))lpVtbl->setProperty)(
           v15,
           this[13],
           &v12);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v9 = v15;
      selectSingleNode = v15->lpVtbl->selectSingleNode;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, const WCHAR *, __int64 *))selectSingleNode)(
             v9,
             this[15],
             &v16);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v7 = PWSLayoutPolicyManager::Populate(a2, (__int64)&v16);
        v5 = v7;
        if ( v7 >= 0 )
        {
          v5 = 0;
          goto LABEL_11;
        }
        v8 = 217LL;
      }
      else
      {
        v8 = 216LL;
      }
    }
    else
    {
      v8 = 215LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_11:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4,
    (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)OEMLayoutXML);
LABEL_12:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v15);
  return v5;
}
