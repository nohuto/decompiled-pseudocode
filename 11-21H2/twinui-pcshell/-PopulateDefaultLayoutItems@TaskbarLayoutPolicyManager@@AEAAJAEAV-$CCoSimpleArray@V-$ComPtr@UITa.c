/*
 * XREFs of ?PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180319200
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x1803186C0 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180317FB4 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x180318E38 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::PopulateDefaultLayoutItems(__int64 a1, _QWORD *a2)
{
  TaskbarLayoutPolicyManager *v4; // rcx
  int DefaultLayoutXML; // eax
  unsigned int v6; // ebx
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  int v8; // eax
  __int64 v9; // rdx
  struct IXMLDOMDocument2 *v10; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IXMLDOMDocument2 *v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v17);
  DefaultLayoutXML = TaskbarLayoutPolicyManager::GetDefaultLayoutXML(v4, &v17);
  v6 = DefaultLayoutXML;
  if ( DefaultLayoutXML >= 0 )
  {
    v18 = 0LL;
    lpVtbl = v17->lpVtbl;
    v14 = *(_OWORD *)(a1 + 104);
    v15 = *(_QWORD *)(a1 + 120);
    v8 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))lpVtbl->setProperty)(
           v17,
           *(_QWORD *)(a1 + 128),
           &v14);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v10 = v17;
      selectSingleNode = v17->lpVtbl->selectSingleNode;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      v8 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int64 *))selectSingleNode)(
             v10,
             *(_QWORD *)(a1 + 136),
             &v18);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v8 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v12, a2, (__int64)&v18, 1u);
        v6 = v8;
        if ( v8 >= 0 )
        {
          v6 = 0;
          goto LABEL_11;
        }
        v9 = 470LL;
      }
      else
      {
        v9 = 468LL;
      }
    }
    else
    {
      v9 = 467LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_11:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D0,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)DefaultLayoutXML);
LABEL_12:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v17);
  return v6;
}
