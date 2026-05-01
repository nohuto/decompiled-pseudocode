/*
 * XREFs of ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180105440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18010556C (--1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180105598 (--$-0$$V@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@AEAA@U-$integral_constant@D$0A@@w.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x1801056F0 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017CF0C (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801AAB08 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1802D25DE (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1803E6050 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E6AA4 (-GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E6BE8 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E6DBC (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1803E7028 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x1803E74CC (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803E876C (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyTaskbarLayout(__int64 a1, int a2, int *a3, int *a4)
{
  TaskbarLayoutPolicyManager *v8; // rcx
  int DefaultLayoutXML; // eax
  TaskbarLayoutPolicyManager *v10; // rcx
  unsigned int v11; // ebx
  TaskbarLayoutPolicyManager *v13; // rcx
  __int64 v14; // rdx
  int CanApplyGroupPolicyLayout; // eax
  __int64 v16; // rdx
  TaskbarLayoutPolicyManager *v17; // rcx
  TaskbarLayoutPolicyManager *v18; // rcx
  int v19; // eax
  struct IXMLDOMDocument2Vtbl *lpVtbl; // rax
  __int64 v21; // r15
  struct IXMLDOMDocument2 *v22; // rbx
  HRESULT (__stdcall *selectSingleNode)(IXMLDOMDocument2 *, BSTR, IXMLDOMNode **); // rdi
  struct IXMLDOMDocument2 *v24; // [rsp+20h] [rbp-E0h] BYREF
  struct IXMLDOMNode *v25; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h]
  _BYTE v28[320]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::CanApplyTaskbarLayout(v28);
  *a3 = 0;
  *a4 = 0;
  v24 = 0LL;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v24);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetDefaultLayoutXML(v18, &v24);
    v10 = retaddr;
    if ( DefaultLayoutXML >= 0 )
      goto LABEL_7;
    v14 = 132LL;
    goto LABEL_22;
  }
  if ( a2 == 1 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v24);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetOEMLayoutXML((TaskbarLayoutPolicyManager *)a1, &v24);
    v10 = retaddr;
    if ( DefaultLayoutXML >= 0 )
      goto LABEL_7;
    v14 = 135LL;
    goto LABEL_22;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
      goto LABEL_8;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v24);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetCloudDefaultLayoutXML(v13, &v24);
    v10 = retaddr;
    if ( DefaultLayoutXML >= 0 )
      goto LABEL_7;
    v14 = 156LL;
    goto LABEL_22;
  }
  if ( !(unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout((TaskbarLayoutPolicyManager *)a1) )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v24);
      DefaultLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v17, &v24);
      v10 = retaddr;
      if ( DefaultLayoutXML >= 0 )
        goto LABEL_7;
      v14 = 147LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v24);
      DefaultLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v8, &v24);
      v10 = retaddr;
      if ( DefaultLayoutXML >= 0 )
      {
LABEL_7:
        if ( v24 )
        {
          v19 = a2
              ? TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v10, v24)
              : TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(v10, v24);
          if ( v19 >= 0 )
          {
            lpVtbl = v24->lpVtbl;
            v26 = *(_OWORD *)(a1 + 104);
            v27 = *(_QWORD *)(a1 + 120);
            CanApplyGroupPolicyLayout = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))lpVtbl->setProperty)(
                                          v24,
                                          *(_QWORD *)(a1 + 128),
                                          &v26);
            v11 = CanApplyGroupPolicyLayout;
            if ( CanApplyGroupPolicyLayout < 0 )
            {
              v16 = 168LL;
              goto LABEL_29;
            }
            if ( a2 )
              v21 = *(_QWORD *)(a1 + 144);
            else
              v21 = *(_QWORD *)(a1 + 136);
            v25 = 0LL;
            v22 = v24;
            selectSingleNode = v24->lpVtbl->selectSingleNode;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
            if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, struct IXMLDOMNode **))selectSingleNode)(
                   v22,
                   v21,
                   &v25) >= 0
              && v25 )
            {
              if ( a2 == 2 )
                *a4 = TaskbarLayoutPolicyManager::IsOverrideLayout((TaskbarLayoutPolicyManager *)a1, v25);
              *a3 = 1;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
          }
        }
        goto LABEL_8;
      }
      v14 = 152LL;
    }
LABEL_22:
    wil::details::in1diag3::_Log_Hr(
      v10,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)DefaultLayoutXML,
      (int)v24);
    goto LABEL_7;
  }
  CanApplyGroupPolicyLayout = TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
                                (TaskbarLayoutPolicyManager *)a1,
                                a3,
                                a4);
  v11 = CanApplyGroupPolicyLayout;
  if ( CanApplyGroupPolicyLayout < 0 )
  {
    v16 = 140LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)CanApplyGroupPolicyLayout,
      (int)v24);
    goto LABEL_9;
  }
LABEL_8:
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v28);
  v11 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v24);
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::~CanApplyTaskbarLayout((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v28);
  return v11;
}
