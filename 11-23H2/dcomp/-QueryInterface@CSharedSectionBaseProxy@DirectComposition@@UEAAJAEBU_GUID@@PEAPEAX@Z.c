/*
 * XREFs of ?QueryInterface@CSharedSectionBaseProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F3470
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z @ 0x1800845C0 (-QueryInterfaceHelper@CResourceProxy@DirectComposition@@QEAAJAEBU_GUID@@PEAPEAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedSectionBaseProxy::QueryInterface(
        DirectComposition::CSharedSectionBaseProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rcx
  int InterfaceHelper; // ebx
  __int64 v6; // r9

  if ( !a3 )
    return 2147942487LL;
  InterfaceHelper = DirectComposition::CResourceProxy::QueryInterfaceHelper(this, a2, a3, this);
  if ( InterfaceHelper >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v6);
  return (unsigned int)InterfaceHelper;
}
