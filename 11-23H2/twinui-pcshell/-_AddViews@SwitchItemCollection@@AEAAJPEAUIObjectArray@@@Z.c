/*
 * XREFs of ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x1805652A0
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@W4SwitchItemFilterBehavior@@@Z @ 0x180565060 (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802E0DE2 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemCollection::_AddViews(SwitchItemCollection *this, struct IObjectArray *a2)
{
  char v4; // si
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v8; // edi
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF
  struct IApplicationView *v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = ((__int64 (__fastcall *)(struct IObjectArray *, unsigned int *))a2->lpVtbl->GetCount)(a2, &v14);
  if ( v5 < 0 )
  {
    v6 = 132LL;
    goto LABEL_3;
  }
  v8 = 0;
  if ( !v14 )
    return 0LL;
  do
  {
    v15 = 0LL;
    GetAt = a2->lpVtbl->GetAt;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v15);
    v10 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct IApplicationView **))GetAt)(
            a2,
            v8,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v15);
    v11 = retaddr;
    if ( v10 < 0 )
    {
      v12 = 136LL;
LABEL_7:
      wil::details::in1diag3::_Log_Hr(
        v11,
        (void *)v12,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_11;
    }
    v10 = SwitchItemCollection::_AddViewItem(
            this,
            (int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v15);
    v11 = retaddr;
    if ( v10 < 0 )
    {
      v12 = 137LL;
      goto LABEL_7;
    }
    v4 = 1;
LABEL_11:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v15);
    ++v8;
  }
  while ( v8 < v14 );
  if ( v4 || !v14 )
    return 0LL;
  v5 = -2147019873;
  v6 = 144LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
