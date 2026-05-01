/*
 * XREFs of ?get_HorizontalScrollPercent@AccessibleElementBase@@UEAAJPEAN@Z @ 0x1804CE200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804CD8F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::get_HorizontalScrollPercent(AccessibleElementBase *this, double *a2)
{
  AccessibleElementBase *v3; // rbx
  int Element; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = -1.0;
  v6 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 48);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement(v3, &GUID_2ee57b14_e8de_441b_ba80_94bbf2ee0423, &v6);
  if ( Element >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v6 + 96LL))(v6)
      && (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v6 + 64LL))(v6) )
    {
      *a2 = (*(double (__fastcall **)(void *))(*(_QWORD *)v6 + 48LL))(v6);
    }
    Element = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}
