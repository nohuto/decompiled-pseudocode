/*
 * XREFs of ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1805D2678
 * Callers:
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D43BC (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIAudioSessionControl@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18040C728 (--4-$ComPtr@UIAudioSessionControl@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x1805D1324 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1805ECB28 (-CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z.c)
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
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // si
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v15; // eax
  __int64 v16; // rdx
  struct IUnknownVtbl *lpVtbl; // rax
  HRESULT Service; // eax
  struct IAppLayout **v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v23; // [rsp+20h] [rbp-40h] BYREF
  __int64 v24; // [rsp+28h] [rbp-38h] BYREF
  void *ppvOut[2]; // [rsp+30h] [rbp-30h] BYREF
  char v26; // [rsp+40h] [rbp-20h]
  __int128 v27; // [rsp+50h] [rbp-10h] BYREF
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
  v11 = CDragVisual::CreateInstance(
          v10,
          ((unsigned __int64)this + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          (char *)this + 48,
          &punk);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x440,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_29;
  }
  IUnknown_SetSite(punk, a2);
  ppvOut[1] = &punk;
  v13 = 1;
  v26 = 1;
  v24 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  v15 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
          a2,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &v24);
  v12 = v15;
  if ( v15 < 0 )
  {
    v16 = 1099LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_27;
  }
  ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[5].Release)(punk, v24);
  ((void (__fastcall *)(IUnknown *))punk->lpVtbl[6].QueryInterface)(punk);
  v15 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[7].Release)(punk);
  v12 = v15;
  if ( v15 < 0 )
  {
    v16 = 1103LL;
    goto LABEL_12;
  }
  if ( a3 )
  {
    lpVtbl = punk->lpVtbl;
    v27 = (__int128)*a3;
    ((void (__fastcall *)(IUnknown *, __int128 *))lpVtbl[2].QueryInterface)(punk, &v27);
  }
  ((void (__fastcall *)(IUnknown *, _QWORD))punk->lpVtbl[1].Release)(punk, *a4);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              ppvOut);
  v12 = Service;
  if ( Service >= 0 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    v20 = AppLayoutHelpers::BuildSingleViewLayout(
            *((AppLayoutHelpers **)this + 11),
            (struct IApplicationView *)&v23,
            v19);
    v12 = v20;
    if ( v20 >= 0 )
    {
      v20 = ((__int64 (__fastcall *)(IUnknown *, __int64, struct tagRECT *))punk->lpVtbl[3].QueryInterface)(
              punk,
              v23,
              a5);
      v12 = v20;
      if ( v20 >= 0 )
      {
        if ( *((_DWORD *)this + 72) != 2 )
          ((void (__fastcall *)(IUnknown *, _QWORD, _QWORD))punk->lpVtbl[2].AddRef)(punk, *a4, 0LL);
        Microsoft::WRL::ComPtr<IAudioSessionControl>::operator=((__int64 *)this + 10, (__int64 *)&punk);
        v13 = 0;
        v12 = 0;
        goto LABEL_25;
      }
      v21 = 1117LL;
    }
    else
    {
      v21 = 1115LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v20);
LABEL_25:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x458,
    (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)Service);
LABEL_26:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
LABEL_27:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  if ( v13 )
  {
    ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[1].AddRef)(punk, 4LL);
    IUnknown_SetSite(punk, 0LL);
  }
LABEL_29:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  return v12;
}
