/*
 * XREFs of ?GetBoundingRectForTextRange@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationTextRange@@PEAUtagRECT@@@Z @ 0x18053AF24
 * Callers:
 *     ?GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053ACA8 (-GetBoundingRectForTextPattern@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElemen.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextRange(
        KeyboardHosting::UIAutomationHelpers *this,
        struct IUIAutomationTextRange *a2,
        struct tagRECT *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  void *v11; // rcx
  SAFEARRAY *psa[3]; // [rsp+30h] [rbp-20h] BYREF
  char v14; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v16; // [rsp+78h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
    v6 = 272LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !a3 )
  {
    v5 = -2147467261;
    v6 = 273LL;
    goto LABEL_3;
  }
  psa[0] = 0LL;
  pv = 0LL;
  psa[1] = (SAFEARRAY *)&pv;
  psa[2] = (SAFEARRAY *)psa;
  v14 = 1;
  v7 = ((__int64 (__fastcall *)(struct IUIAutomationTextRange *, SAFEARRAY **))a2->lpVtbl->GetBoundingRectangles)(
         a2,
         psa);
  v5 = v7;
  if ( v7 >= 0 )
  {
    if ( psa[0] )
    {
      v16 = 0;
      v10 = (*(__int64 (__fastcall **)(_QWORD, SAFEARRAY *, LPVOID *, int *))(**(_QWORD **)this + 368LL))(
              *(_QWORD *)this,
              psa[0],
              &pv,
              &v16);
      v5 = v10;
      if ( v10 < 0 )
      {
        v8 = (unsigned int)v10;
        v9 = 296LL;
        goto LABEL_17;
      }
      v11 = pv;
      if ( pv )
      {
        if ( v16 )
        {
          *a3 = *(struct tagRECT *)pv;
          v5 = 0;
          goto LABEL_19;
        }
        v9 = 298LL;
      }
      else
      {
        v9 = 297LL;
      }
    }
    else
    {
      v9 = 293LL;
    }
    v5 = -2147023728;
    v8 = 2147943568LL;
    goto LABEL_17;
  }
  v8 = (unsigned int)v7;
  v9 = 292LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
    (const char *)v8);
  v11 = pv;
LABEL_19:
  if ( v11 )
    CoTaskMemFree(v11);
  if ( psa[0] )
    SafeArrayDestroy(psa[0]);
  return v5;
}
