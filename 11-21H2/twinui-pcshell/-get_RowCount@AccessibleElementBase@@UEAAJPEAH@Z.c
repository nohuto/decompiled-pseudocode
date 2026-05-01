/*
 * XREFs of ?get_RowCount@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804CE610
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804CD8F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::get_RowCount(AccessibleElementBase *this, int *a2)
{
  AccessibleElementBase *v3; // rbx
  int Element; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v6 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 72);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement(v3, &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2, &v6);
  if ( Element >= 0 )
  {
    *a2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 88LL))(v6);
    Element = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}
