/*
 * XREFs of ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803E7F90
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x1803E7300 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x1801056F0 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801AAB08 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803E5B08 (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1803E6050 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E6DBC (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E70C4 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x1803E7A60 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1803E8474 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(
        TaskbarLayoutPolicyManager *this,
        _QWORD *a2)
{
  __int64 v4; // rdx
  int MDMLayoutXML; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  TaskbarLayoutPolicyManager *v8; // rcx
  TaskbarLayoutPolicyManager *v9; // rcx
  TaskbarLayoutPolicyManager *v10; // rcx
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  int v12; // eax
  __int64 v13; // rdx
  struct IXMLDOMDocument2 *v14; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct IXMLDOMDocument2 *v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp+30h] BYREF
  __int64 v25; // [rsp+88h] [rbp+38h] BYREF

  v20[0] = 0LL;
  if ( (int)TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(this, (int *)&v24, (int *)&v25) < 0 || !(_DWORD)v24 )
  {
    if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout(this, v4) )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v20);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v8, v20);
      v6 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v7 = 472LL;
        goto LABEL_12;
      }
      MDMLayoutXML = TaskbarLayoutPolicyManager::SetMDMPolicyLayoutTimestampToCurrent(v9);
      v6 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v7 = 473LL;
        goto LABEL_12;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v20);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v10, v20);
      v6 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v7 = 477LL;
        goto LABEL_12;
      }
    }
LABEL_13:
    if ( v20[0] )
    {
      v24 = 0LL;
      lpVtbl = v20[0]->lpVtbl;
      v21 = *(_OWORD *)((char *)this + 104);
      v22 = *((_QWORD *)this + 15);
      v12 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))lpVtbl->setProperty)(
              v20[0],
              *((_QWORD *)this + 16),
              &v21);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 483LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_24:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
        goto LABEL_27;
      }
      v14 = v20[0];
      selectSingleNode = v20[0]->lpVtbl->selectSingleNode;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
      v12 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, _QWORD))selectSingleNode)(
              v14,
              *((_QWORD *)this + 18),
              &v24);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 484LL;
        goto LABEL_18;
      }
      v25 = 0LL;
      v16 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(&v24, &v25);
      v6 = v16;
      if ( v16 < 0 )
      {
        v18 = 487LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
        goto LABEL_24;
      }
      v16 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v17, a2, (__int64)&v24, 3u);
      v6 = v16;
      if ( v16 < 0 )
      {
        v18 = 488LL;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
    }
    v6 = 0;
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v20);
  MDMLayoutXML = TaskbarLayoutPolicyManager::GetPolicyLayoutXML((const WCHAR **)this, v20);
  v6 = MDMLayoutXML;
  if ( MDMLayoutXML >= 0 )
    goto LABEL_13;
  v7 = 468LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)MDMLayoutXML);
LABEL_27:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v20);
  return v6;
}
