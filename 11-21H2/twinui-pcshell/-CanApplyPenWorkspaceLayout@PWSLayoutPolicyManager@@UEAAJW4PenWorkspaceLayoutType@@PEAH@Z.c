/*
 * XREFs of ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1803BB960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803BBCA4 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803BBDE8 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803BC8A8 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803BCA04 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::CanApplyPenWorkspaceLayout(__int64 a1, int a2, _DWORD *a3)
{
  int OEMLayoutXML; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  PWSLayoutPolicyManager *v9; // rcx
  int v10; // eax
  PWSLayoutPolicyManager *v11; // rcx
  int DefaultLayoutXML; // eax
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  __int64 v14; // rsi
  struct IXMLDOMDocument2 *v15; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IXMLDOMDocument2 *v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0;
  v21 = 0LL;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v21);
    DefaultLayoutXML = PWSLayoutPolicyManager::GetDefaultLayoutXML(v11, &v21);
    OEMLayoutXML = DefaultLayoutXML;
    if ( DefaultLayoutXML < 0 )
    {
      v8 = 103LL;
LABEL_14:
      v7 = (unsigned int)DefaultLayoutXML;
      goto LABEL_15;
    }
LABEL_5:
    if ( v21 )
    {
      v10 = a2
          ? PWSLayoutPolicyManager::ValidateLayoutModificationXML(v9, v21)
          : PWSLayoutPolicyManager::ValidateDefaultLayoutXML(v9, v21);
      if ( v10 >= 0 )
      {
        lpVtbl = v21->lpVtbl;
        v18 = *(_OWORD *)(a1 + 80);
        v19 = *(_QWORD *)(a1 + 96);
        DefaultLayoutXML = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))lpVtbl->setProperty)(
                             v21,
                             *(_QWORD *)(a1 + 104),
                             &v18);
        OEMLayoutXML = DefaultLayoutXML;
        if ( DefaultLayoutXML < 0 )
        {
          v8 = 117LL;
          goto LABEL_14;
        }
        if ( a2 )
          v14 = *(_QWORD *)(a1 + 120);
        else
          v14 = *(_QWORD *)(a1 + 112);
        v22 = 0LL;
        v15 = v21;
        selectSingleNode = v21->lpVtbl->selectSingleNode;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, __int64 *))selectSingleNode)(v15, v14, &v22) >= 0
          && v22 )
        {
          *a3 = 1;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      }
    }
    OEMLayoutXML = 0;
    goto LABEL_24;
  }
  if ( a2 != 1 )
  {
    OEMLayoutXML = -2147467259;
    v7 = 2147500037LL;
    v8 = 110LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)v7);
    goto LABEL_24;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v21);
  OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML((PWSLayoutPolicyManager *)a1, &v21);
  if ( OEMLayoutXML >= 0 )
    goto LABEL_5;
LABEL_24:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v21);
  return (unsigned int)OEMLayoutXML;
}
