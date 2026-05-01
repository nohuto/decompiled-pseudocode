/*
 * XREFs of ??$AsWeak@UIWeakReferenceSource@@@WRL@Microsoft@@YAJPEAUIWeakReferenceSource@@PEAVWeakRef@01@@Z @ 0x180098048
 * Callers:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsWeak<IWeakReferenceSource>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF
  __int64 v10; // [rsp+50h] [rbp+30h] BYREF
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF

  v9 = 0LL;
  v3 = (**a1)(a1, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v9);
  if ( v3 < 0 )
  {
    v8 = v9;
    if ( !v9 )
      return (unsigned int)v3;
LABEL_11:
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return (unsigned int)v3;
  }
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v10);
  if ( v3 < 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    v8 = v9;
    if ( !v9 )
      return (unsigned int)v3;
    goto LABEL_11;
  }
  v4 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = 0LL;
  v5 = *a2;
  *a2 = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
