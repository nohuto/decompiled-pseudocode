/*
 * XREFs of ?SetFocus@AccessibleElementBase@@UEAAJXZ @ 0x1804CD660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804CD8F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::SetFocus(AccessibleElementBase *this)
{
  AccessibleElementBase *v1; // rbx
  int Element; // ebx
  __int64 v3; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v1 = (AccessibleElementBase *)((char *)this - 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
  Element = AccessibleElementBase::_GetElement(v1, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v5);
  if ( Element >= 0 )
  {
    (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v6);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 288LL))(v6, v5);
    }
    else
    {
      LOBYTE(v3) = 1;
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v5 + 296LL))(v5, v3);
    }
    Element = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
  return (unsigned int)Element;
}
