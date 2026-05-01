/*
 * XREFs of ?GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053ACA8
 * Callers:
 *     ?GetBoundingRectForSelectedTextFromAncestorsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053A304 (-GetBoundingRectForSelectedTextFromAncestorsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJ.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053A6E4 (-GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801824D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBoundingRectForTextRange@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationTextRange@@PEAUtagRECT@@@Z @ 0x18053AF24 (-GetBoundingRectForTextRange@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationTextRang.c)
 *     ?UIAFoundSelectedText@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18053B53C (-UIAFoundSelectedText@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextPattern(
        KeyboardHosting::UIAutomationHelpers *this,
        struct IUIAutomationElement *a2,
        struct tagRECT *a3)
{
  struct IUIAutomationElementVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // esi
  __int64 v16; // rax
  struct IUIAutomationTextRange *v17; // rbx
  HRESULT (__stdcall *GetText)(IUIAutomationTextRange *, int, BSTR *); // rdi
  BSTR pbstr; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v24; // [rsp+88h] [rbp+38h] BYREF
  struct IUIAutomationTextRange *v25; // [rsp+98h] [rbp+48h] BYREF

  lpVtbl = a2->lpVtbl;
  v22[0] = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUIAutomationElement *, __int64, GUID *, __int64 *))lpVtbl->GetCachedPatternAs)(
         a2,
         10014LL,
         &GUID_32eba289_3583_42c9_9c59_3b6d9a1e9b6a,
         v22);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 235LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)v8);
    goto LABEL_27;
  }
  if ( !v22[0] )
  {
    v7 = -2147418113;
    v8 = 2147549183LL;
    v9 = 236LL;
    goto LABEL_5;
  }
  v21 = 0LL;
  v10 = *(_QWORD *)v22[0];
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 **))(v10 + 40))(v22[0], &v21);
  v7 = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v13 = 239LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)v12);
    goto LABEL_26;
  }
  if ( !v21 )
  {
    v13 = 240LL;
LABEL_14:
    v7 = -2147023728;
    v12 = 2147943568LL;
    goto LABEL_15;
  }
  v24 = 0;
  v14 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v21 + 24))(v21, &v24);
  v7 = v14;
  if ( v14 < 0 )
  {
    v12 = (unsigned int)v14;
    v13 = 243LL;
    goto LABEL_15;
  }
  v15 = v24;
  if ( !v24 )
  {
    v13 = 244LL;
    goto LABEL_14;
  }
  if ( v24 <= 0 )
  {
LABEL_25:
    v7 = -2147023728;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v25 = 0LL;
    v16 = *v21;
    v25 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, struct IUIAutomationTextRange **))(v16 + 32))(
           v21,
           (unsigned int)--v15,
           &v25) >= 0 )
    {
      v17 = v25;
      if ( v25 )
        break;
    }
LABEL_24:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    if ( v15 <= 0 )
      goto LABEL_25;
  }
  pbstr = 0LL;
  GetText = v25->lpVtbl->GetText;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pbstr,
    0LL);
  if ( ((int (__fastcall *)(struct IUIAutomationTextRange *, __int64, BSTR *))GetText)(v17, 0xFFFFFFFFLL, &pbstr) < 0
    || !SysStringLen(pbstr)
    || (TouchKeyboardExperienceTelemetryLogger::UIAFoundSelectedText(),
        (int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextRange(this, v25, a3) < 0) )
  {
    if ( pbstr )
      SysFreeString(pbstr);
    goto LABEL_24;
  }
  if ( pbstr )
    SysFreeString(pbstr);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  v7 = 0;
LABEL_26:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
LABEL_27:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v22);
  return v7;
}
