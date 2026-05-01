/*
 * XREFs of ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x180519FD8
 * Callers:
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18051BD1C (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAudioSessionControl@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18033EB00 (--4-$ComPtr@UIAudioSessionControl@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x180518C74 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180531DD8 (-CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowArrangementView::InitDragVisual(
        WindowArrangementView *this,
        struct IUnknown *a2,
        struct tagRECT *a3,
        const struct tagPOINT *a4,
        struct tagRECT *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  char v14; // si
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v16; // eax
  __int64 v17; // rdx
  struct IUnknownVtbl *lpVtbl; // rax
  HRESULT Service; // eax
  struct IAppLayout **v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h] BYREF
  void *ppvOut[2]; // [rsp+30h] [rbp-30h] BYREF
  char v27; // [rsp+40h] [rbp-20h]
  __int128 v28; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  IUnknown *punk; // [rsp+90h] [rbp+30h] BYREF

  v9 = *((_DWORD *)this + 72);
  if ( v9 == 2 )
  {
    v10 = 6;
  }
  else if ( v9 == 3 )
  {
    v10 = 5;
  }
  else
  {
    v10 = *((_DWORD *)this + 73) != 0 ? 1 : 4;
  }
  punk = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  v12 = CDragVisual::CreateInstance(v10, (char *)this + 48, v11, &punk);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x440,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_29;
  }
  IUnknown_SetSite(punk, a2);
  ppvOut[1] = &punk;
  v14 = 1;
  v27 = 1;
  v25 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  v16 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
          a2,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &v25);
  v13 = v16;
  if ( v16 < 0 )
  {
    v17 = 1099LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_27;
  }
  ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[5].Release)(punk, v25);
  ((void (__fastcall *)(IUnknown *))punk->lpVtbl[6].QueryInterface)(punk);
  v16 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[7].Release)(punk);
  v13 = v16;
  if ( v16 < 0 )
  {
    v17 = 1103LL;
    goto LABEL_12;
  }
  if ( a3 )
  {
    lpVtbl = punk->lpVtbl;
    v28 = (__int128)*a3;
    ((void (__fastcall *)(IUnknown *, __int128 *))lpVtbl[2].QueryInterface)(punk, &v28);
  }
  ((void (__fastcall *)(IUnknown *, _QWORD))punk->lpVtbl[1].Release)(punk, *a4);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              ppvOut);
  v13 = Service;
  if ( Service >= 0 )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    v21 = AppLayoutHelpers::BuildSingleViewLayout(
            *((AppLayoutHelpers **)this + 11),
            (struct IApplicationView *)&v24,
            v20);
    v13 = v21;
    if ( v21 >= 0 )
    {
      v21 = ((__int64 (__fastcall *)(IUnknown *, __int64, struct tagRECT *))punk->lpVtbl[3].QueryInterface)(
              punk,
              v24,
              a5);
      v13 = v21;
      if ( v21 >= 0 )
      {
        if ( *((_DWORD *)this + 72) != 2 )
          ((void (__fastcall *)(IUnknown *, _QWORD, _QWORD))punk->lpVtbl[2].AddRef)(punk, *a4, 0LL);
        Microsoft::WRL::ComPtr<IAudioSessionControl>::operator=((__int64 *)this + 10, (__int64 *)&punk);
        v14 = 0;
        v13 = 0;
        goto LABEL_25;
      }
      v22 = 1117LL;
    }
    else
    {
      v22 = 1115LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v21);
LABEL_25:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x458,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)Service);
LABEL_26:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
LABEL_27:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  if ( v14 )
  {
    ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[1].AddRef)(punk, 4LL);
    IUnknown_SetSite(punk, 0LL);
  }
LABEL_29:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  return v13;
}
