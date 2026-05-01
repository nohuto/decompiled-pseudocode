/*
 * XREFs of ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C4700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180096D28 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804F9FB8 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ShellPositionerManager::GetPositionerForView(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall *v8)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 AddressOf; // rax
  int v10; // ebx
  int v11; // r14d
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 (__fastcall *v14)(ApplicationViewHelpers *, GUID *, __int64); // rbx
  __int64 *v15; // rax
  void *v16; // rcx
  IUnknown *v17; // rbx
  int v18; // eax
  void *v19; // rcx
  void **v21; // rbx
  struct IApplicationView *v22; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v25; // rdx
  int Instance; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  HRESULT Service; // eax
  HRESULT v32; // edi
  IUnknown *punk[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  void *ppvOut; // [rsp+88h] [rbp+48h] BYREF
  __int64 v36; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0LL;
  punk[0] = 0LL;
  v8 = (*a2)[10];
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(punk);
  v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64))v8)(
          a2,
          AddressOf);
  if ( v10 < 0 )
    goto LABEL_18;
  v11 = 11;
  v36 = 0LL;
  v12 = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(&v36);
  v13 = v12;
  if ( v12 )
    *v12 = 0LL;
  ppvOut = 0LL;
  v14 = (*a2)[33];
  v15 = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf((__int64 *)&ppvOut);
  if ( ((int (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), __int64 *))v14)(
         a2,
         v15) >= 0 )
    goto LABEL_5;
  v21 = (void **)Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf((__int64 *)&ppvOut);
  *v21 = 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v22);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      Instance = PositionerPriority_CreateInstance(PropW, v25, v21);
      if ( Instance >= 0 )
        goto LABEL_26;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F5,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Instance);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  v28 = PositionerPriority_CreateInstance(*((_DWORD *)this + 14), v27, &ppvOut);
  v10 = v28;
  if ( v28 < 0 )
  {
    v29 = 1061LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v28);
    goto LABEL_10;
  }
LABEL_26:
  v28 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64), void *))(*a2)[34])(
          a2,
          ppvOut);
  v10 = v28;
  if ( v28 < 0 )
  {
    v29 = 1065LL;
    goto LABEL_25;
  }
LABEL_5:
  if ( v13 )
  {
    v16 = ppvOut;
    if ( ppvOut )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 8LL))(ppvOut);
      v16 = ppvOut;
    }
    *v13 = (__int64)v16;
  }
  v10 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40F,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 24LL))(v36);
    v10 = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  if ( v10 < 0 )
  {
    v30 = 362LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_18;
  }
  v17 = punk[0];
  ppvOut = 0LL;
  if ( IUnknown_QueryService(
         punk[0],
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &ppvOut) < 0 )
  {
    Service = IUnknown_QueryService(v17, &c_positionersSIDs + v11, a3, a4);
    v32 = Service;
    if ( Service >= 0 )
      goto LABEL_15;
    v10 = -2147467262;
    if ( Service != -2147467262 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x526,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)Service);
      v10 = v32;
    }
    goto LABEL_35;
  }
  v18 = (*(__int64 (__fastcall **)(void *, _QWORD, const struct _GUID *, void **))(*(_QWORD *)ppvOut + 24LL))(
          ppvOut,
          (unsigned int)v11,
          a3,
          a4);
  v10 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51E,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v18);
LABEL_35:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
    v30 = 364LL;
    goto LABEL_36;
  }
LABEL_15:
  v19 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v10 = 0;
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)punk);
  return (unsigned int)v10;
}
