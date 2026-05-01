/*
 * XREFs of ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180116C90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180116DDC (--1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180116ED4 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180116F88 (-StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180117128 (--0-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@Q.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801172B8 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x1801173E8 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1803171D0 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180317DA4 (-GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180317FB4 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180318188 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803183F4 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x1803188B8 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18031984C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins@@@details@.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180319D44 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180319EA4 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyTaskbarLayout(__int64 a1, int a2, int *a3, int *a4)
{
  __int64 v8; // rdx
  TaskbarLayoutPolicyManager *v9; // rcx
  int DefaultLayoutXML; // eax
  TaskbarLayoutPolicyManager *v11; // rcx
  unsigned int v12; // ebx
  TaskbarLayoutPolicyManager *v14; // rcx
  __int64 v15; // rdx
  int CanApplyGroupPolicyLayout; // eax
  __int64 v17; // rdx
  TaskbarLayoutPolicyManager *v18; // rcx
  TaskbarLayoutPolicyManager *v19; // rcx
  int v20; // eax
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  __int64 v22; // r15
  struct IXMLDOMDocument2 *v23; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  struct IXMLDOMDocument2 *v25; // [rsp+20h] [rbp-E0h] BYREF
  struct IXMLDOMNode *v26; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h]
  _QWORD v29[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v29);
  v29[0] = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::StartActivity((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v29);
  *a3 = 0;
  *a4 = 0;
  v25 = 0LL;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetDefaultLayoutXML(v19, &v25);
    v11 = retaddr;
    if ( DefaultLayoutXML >= 0 )
      goto LABEL_7;
    v15 = 133LL;
    goto LABEL_22;
  }
  if ( a2 == 1 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetOEMLayoutXML((TaskbarLayoutPolicyManager *)a1, &v25);
    v11 = retaddr;
    if ( DefaultLayoutXML >= 0 )
      goto LABEL_7;
    v15 = 136LL;
    goto LABEL_22;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
      goto LABEL_8;
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ProgrammableTaskbarDefaultPins>::GetImpl'::`2'::impl,
      v8);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetCloudDefaultLayoutXML(v14, &v25);
    v11 = retaddr;
    if ( DefaultLayoutXML >= 0 )
      goto LABEL_7;
    v15 = 159LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout((TaskbarLayoutPolicyManager *)a1) )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
      DefaultLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v18, &v25);
      v11 = retaddr;
      if ( DefaultLayoutXML >= 0 )
        goto LABEL_7;
      v15 = 148LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
      DefaultLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v9, &v25);
      v11 = retaddr;
      if ( DefaultLayoutXML >= 0 )
      {
LABEL_7:
        if ( v25 )
        {
          v20 = a2
              ? TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v11, v25)
              : TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(v11, v25);
          if ( v20 >= 0 )
          {
            lpVtbl = v25->lpVtbl;
            v27 = *(_OWORD *)(a1 + 104);
            v28 = *(_QWORD *)(a1 + 120);
            CanApplyGroupPolicyLayout = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))lpVtbl->setProperty)(
                                          v25,
                                          *(_QWORD *)(a1 + 128),
                                          &v27);
            v12 = CanApplyGroupPolicyLayout;
            if ( CanApplyGroupPolicyLayout < 0 )
            {
              v17 = 174LL;
              goto LABEL_29;
            }
            if ( a2 )
              v22 = *(_QWORD *)(a1 + 144);
            else
              v22 = *(_QWORD *)(a1 + 136);
            v26 = 0LL;
            v23 = v25;
            selectSingleNode = v25->lpVtbl->selectSingleNode;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
            if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, struct IXMLDOMNode **))selectSingleNode)(
                   v23,
                   v22,
                   &v26) >= 0
              && v26 )
            {
              if ( a2 == 2 )
                *a4 = TaskbarLayoutPolicyManager::IsOverrideLayout((TaskbarLayoutPolicyManager *)a1, v26);
              *a3 = 1;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
          }
        }
        goto LABEL_8;
      }
      v15 = 153LL;
    }
LABEL_22:
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)v15,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)DefaultLayoutXML);
    goto LABEL_7;
  }
  CanApplyGroupPolicyLayout = TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
                                (TaskbarLayoutPolicyManager *)a1,
                                a3,
                                a4);
  v12 = CanApplyGroupPolicyLayout;
  if ( CanApplyGroupPolicyLayout < 0 )
  {
    v17 = 141LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)CanApplyGroupPolicyLayout);
    goto LABEL_9;
  }
LABEL_8:
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
  v12 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v25);
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::~CanApplyTaskbarLayout((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v29);
  return v12;
}
