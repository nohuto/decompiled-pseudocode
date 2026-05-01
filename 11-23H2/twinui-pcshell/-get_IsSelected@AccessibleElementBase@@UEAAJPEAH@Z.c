/*
 * XREFs of ?get_IsSelected@AccessibleElementBase@@UEAAJPEAH@Z @ 0x180585D60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805850F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::get_IsSelected(AccessibleElementBase *this, int *a2)
{
  AccessibleElementBase *v3; // rbx
  int Element; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 40);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v6);
  if ( Element >= 0 )
  {
    *a2 = (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v6 + 344LL))(v6);
    Element = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}
