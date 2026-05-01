/*
 * XREFs of ?GetBoundingRectForSelectedTextFromAncestorsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053A304
 * Callers:
 *     ?GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053A628 (-GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement@UIAutomationHelpers@KeyboardHosting.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053ACA8 (-GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElemen.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromAncestorsOfElement(
        __int64 **this,
        struct IUIAutomationElement *a2,
        struct tagRECT *a3)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 *v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  VARIANTARG pvarg; // [rsp+40h] [rbp-40h] BYREF
  VARIANTARG v25; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v27; // [rsp+A0h] [rbp+20h] BYREF
  struct IUIAutomationElement *v28; // [rsp+B8h] [rbp+38h] BYREF

  VariantInit(&pvarg);
  pvarg.vt = 11;
  pvarg.iVal = -1;
  v23 = 0LL;
  v6 = *this;
  v7 = **this;
  v23 = 0LL;
  v25 = pvarg;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, VARIANTARG *, __int64 *))(v7 + 184))(v6, 30040LL, &v25, &v23);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v22 = 0LL;
    v10 = *this;
    v11 = **this;
    v22 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v11 + 104))(v10, v23, &v22);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
        (const char *)(unsigned int)v12);
LABEL_20:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
      goto LABEL_21;
    }
    v27 = 0LL;
    v13 = *this;
    v14 = **this;
    v27 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 160))(v13, &v27);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 171LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
        (const char *)(unsigned int)v15);
LABEL_19:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
      goto LABEL_20;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 32LL))(v27, 10014LL);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 172LL;
      goto LABEL_9;
    }
    v28 = 0LL;
    v17 = *v22;
    v28 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64 *, struct IUIAutomationElement *, __int64, struct IUIAutomationElement **))(v17 + 112))(
            v22,
            a2,
            v27,
            &v28);
    v9 = v18;
    if ( v18 >= 0 )
    {
      if ( v28 )
      {
        if ( (int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextPattern(
                    (KeyboardHosting::UIAutomationHelpers *)this,
                    v28,
                    a3) < 0 )
          v9 = -2147023728;
        else
          v9 = 0;
        goto LABEL_18;
      }
      v9 = -2147023728;
      v19 = 2147943568LL;
      v20 = 178LL;
    }
    else
    {
      v19 = (unsigned int)v18;
      v20 = 177LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)v19);
LABEL_18:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
    (const char *)(unsigned int)v8);
LABEL_21:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  VariantClear(&pvarg);
  return v9;
}
