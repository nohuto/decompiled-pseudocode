/*
 * XREFs of ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804CCE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804CD8F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z @ 0x1804CDCAC (-_GetRuntimeIdArray@AccessibleElementBase@@IEAAJ_KPEAPEAUtagSAFEARRAY@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::GetRuntimeId(AccessibleElementBase *this, struct tagSAFEARRAY **a2)
{
  AccessibleElementBase *v3; // rsi
  __int64 v4; // rbx
  AccessibleElementBase *v5; // rcx
  int RuntimeIdArray; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  LODWORD(v4) = AccessibleElementBase::_GetElement(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v9);
  if ( (int)v4 >= 0 )
  {
    v4 = *(_QWORD *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    if ( v4 )
    {
      RuntimeIdArray = AccessibleElementBase::_GetRuntimeIdArray(v5, (unsigned __int64)v3, a2);
      LODWORD(v4) = RuntimeIdArray;
      if ( RuntimeIdArray < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF6,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)RuntimeIdArray);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v4;
}
