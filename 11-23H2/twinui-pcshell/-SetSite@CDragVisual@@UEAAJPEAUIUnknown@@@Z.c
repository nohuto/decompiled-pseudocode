/*
 * XREFs of ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x1805EE9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800E1C0C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1805ED33C (-IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_SetWindowRgn@CDragVisual@@AEAAXXZ @ 0x1805F0494 (-_SetWindowRgn@CDragVisual@@AEAAXXZ.c)
 */

__int64 __fastcall CDragVisual::SetSite(CDragVisual *this, IUnknown *punk)
{
  __int64 *v2; // rbp
  char v5; // bl
  __int64 *v6; // rbx
  int *v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  IUnknown *punka; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || !punk )
  {
    v5 = 0;
    if ( *v2 && !punk )
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 17);
  }
  else
  {
    v5 = 1;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=(v2, (__int64)punk);
  if ( v5 )
  {
    punka = 0LL;
    v12 = 0LL;
    v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&punka, &v13);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v6);
    if ( IUnknown_QueryService(
           punk,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           (void **)v6) >= 0 )
    {
      v7 = (int *)((char *)this + 192);
      if ( ((int (__fastcall *)(IUnknown *, char *))punka->lpVtbl[3].QueryInterface)(punka, (char *)this + 192) >= 0 )
      {
        v8 = ((__int64 (__fastcall *)(IUnknown *, char *))punka->lpVtbl[3].Release)(punka, (char *)this + 208);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x152,
            (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
            (const char *)(unsigned int)v8);
          *((_OWORD *)this + 13) = *(_OWORD *)v7;
        }
        SetWindowPos(
          *((HWND *)this + 19),
          0LL,
          *v7,
          *((_DWORD *)this + 49),
          *((_DWORD *)this + 50) - *v7,
          *((_DWORD *)this + 51) - *((_DWORD *)this + 49),
          0x14u);
        CDragVisual::_SetWindowRgn(this);
      }
    }
    IUnknown_GetScaleFactor(punka, (enum DEVICE_SCALE_FACTOR *)this + 71);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punka);
  }
  return 0LL;
}
