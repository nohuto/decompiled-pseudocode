/*
 * XREFs of ?GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053A6E4
 * Callers:
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053AA50 (-GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@UIAutomationHelpers@KeyboardHosti.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053ABA4 (-GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHos.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UIASearchDownFoundTextAtElement@H@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAH@Z @ 0x18053A044 (--$UIASearchDownFoundTextAtElement@H@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAH@Z.c)
 *     ??$UIASearchDownTotalElement@AEAH@TouchKeyboardExperienceTelemetryLogger@@SAXAEAH@Z @ 0x18053A0B4 (--$UIASearchDownTotalElement@AEAH@TouchKeyboardExperienceTelemetryLogger@@SAXAEAH@Z.c)
 *     ??1?$unique_struct@UtagVARIANT@@P6AJPEAU1@@Z$1?VariantClear@@YAJ0@ZP6AX0@Z$1?VariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x18053A174 (--1-$unique_struct@UtagVARIANT@@P6AJPEAU1@@Z$1-VariantClear@@YAJ0@ZP6AX0@Z$1-VariantInit@@YAX0@Z.c)
 *     ?GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053ACA8 (-GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElemen.c)
 *     ?UIASearchDownBoundingRectForSelectedTextFromElement@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18053B5D4 (-UIASearchDownBoundingRectForSelectedTextFromElement@TouchKeyboardExperienceTelemetryLogger@@SAX.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfElement(
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
  __int64 v13; // rdx
  struct IUIAutomationElementVtbl *lpVtbl; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  int v18; // ebx
  __int64 v19; // rax
  struct IUIAutomationElement *v21; // [rsp+30h] [rbp-19h] BYREF
  __int64 v22; // [rsp+38h] [rbp-11h] BYREF
  int v23[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v24; // [rsp+48h] [rbp-1h] BYREF
  VARIANTARG pvarg; // [rsp+50h] [rbp+7h] BYREF
  VARIANTARG v26; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v28; // [rsp+B0h] [rbp+67h] BYREF
  int v29; // [rsp+C8h] [rbp+7Fh] BYREF

  TouchKeyboardExperienceTelemetryLogger::UIASearchDownBoundingRectForSelectedTextFromElement();
  VariantInit(&pvarg);
  pvarg.vt = 11;
  pvarg.iVal = -1;
  v24 = 0LL;
  v6 = *this;
  v7 = **this;
  v24 = 0LL;
  v26 = pvarg;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, VARIANTARG *, __int64 *))(v7 + 184))(v6, 30040LL, &v26, &v24);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v22 = 0LL;
    v10 = *this;
    v11 = **this;
    v22 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 160))(v10, &v22);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 200LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
        (const char *)(unsigned int)v12);
LABEL_25:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
      goto LABEL_26;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, 10014LL);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 201LL;
      goto LABEL_7;
    }
    lpVtbl = a2->lpVtbl;
    *(_QWORD *)v23 = 0LL;
    v15 = ((__int64 (__fastcall *)(struct IUIAutomationElement *, __int64, __int64, __int64, int *))lpVtbl->FindAllBuildCache)(
            a2,
            4LL,
            v24,
            v22,
            v23);
    v9 = v15;
    if ( v15 >= 0 )
    {
      if ( !*(_QWORD *)v23 )
      {
        v9 = -2147418113;
        v17 = 2147549183LL;
        v16 = 206LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
          (const char *)v17);
LABEL_24:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
        goto LABEL_25;
      }
      v28 = 0;
      v15 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v23 + 24LL))(*(_QWORD *)v23, &v28);
      v9 = v15;
      if ( v15 >= 0 )
      {
        TouchKeyboardExperienceTelemetryLogger::UIASearchDownTotalElement<int &>(&v28);
        v18 = v28;
        while ( v18 > 0 )
        {
          v21 = 0LL;
          v19 = **(_QWORD **)v23;
          v21 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD, struct IUIAutomationElement **))(v19 + 32))(
                 *(_QWORD *)v23,
                 (unsigned int)--v18,
                 &v21) >= 0
            && v21
            && (int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextPattern(
                      (KeyboardHosting::UIAutomationHelpers *)this,
                      v21,
                      a3) >= 0 )
          {
            v29 = v18;
            TouchKeyboardExperienceTelemetryLogger::UIASearchDownFoundTextAtElement<int>(&v29);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
            v9 = 0;
            goto LABEL_24;
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
        }
        v9 = -2147023728;
        goto LABEL_24;
      }
      v16 = 209LL;
    }
    else
    {
      v16 = 204LL;
    }
    v17 = (unsigned int)v15;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC5,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
    (const char *)(unsigned int)v8);
LABEL_26:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  wil::unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>::~unique_struct<tagVARIANT,long (*)(tagVARIANT *),&long VariantClear(tagVARIANT *),void (*)(tagVARIANT *),&void VariantInit(tagVARIANT *)>(&pvarg);
  return v9;
}
