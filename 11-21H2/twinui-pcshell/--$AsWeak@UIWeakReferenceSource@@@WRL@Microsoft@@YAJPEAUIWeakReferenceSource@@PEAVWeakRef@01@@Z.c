/*
 * XREFs of ??$AsWeak@UIWeakReferenceSource@@@WRL@Microsoft@@YAJPEAUIWeakReferenceSource@@PEAVWeakRef@01@@Z @ 0x1800978BC
 * Callers:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180096F68 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<IWeakReferenceSource>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = (**a1)(a1, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v10);
  if ( v3 < 0 )
  {
    v9 = v10;
    if ( !v10 )
      return (unsigned int)v3;
LABEL_13:
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    return (unsigned int)v3;
  }
  v11 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v9 = v10;
    if ( !v10 )
      return (unsigned int)v3;
    goto LABEL_13;
  }
  v4 = v11;
  v5 = v11;
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v4 = v11;
  }
  v6 = *a2;
  *a2 = v5;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v4 = v11;
  }
  if ( v4 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
