/*
 * XREFs of ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x1804FEA28
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804FEB20 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@@WRL@Microso.c)
 *     ??_GCWRLExecuteCommandBase@@MEAAPEAXI@Z @ 0x1804FEB70 (--_GCWRLExecuteCommandBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIQuerySource@@@@YAXPEAPEAUIQuerySource@@@Z @ 0x1804FE768 (--$SafeRelease@UIQuerySource@@@@YAXPEAPEAUIQuerySource@@@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1804FE7A0 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     Str_SetPtrW @ 0x18074A4F0 (Str_SetPtrW.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWRLExecuteCommandBase::~CWRLExecuteCommandBase(CWRLExecuteCommandBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *((_QWORD *)this + 2) = &CWRLExecuteCommandBase::`vftable'{for `IObjectWithSelection'};
  *((_QWORD *)this + 3) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  g_pfn_Str_SetPtrW((LPWSTR *)this + 11, 0LL);
  g_pfn_Str_SetPtrW((LPWSTR *)this + 12, 0LL);
  SafeRelease<IShellItemArray>((__int64 *)this + 15);
  v2 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  SafeRelease<IQuerySource>((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
}
