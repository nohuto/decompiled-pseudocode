/*
 * XREFs of ?GetIsOccluded@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEA_N@Z @ 0x180304BD0
 * Callers:
 *     ?GetIsOccluded@CImmersiveApp@@UEAAJPEAH@Z @ 0x180304B60 (-GetIsOccluded@CImmersiveApp@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetIsOccluded(
        CImmersiveApp::CImmersiveWindowCollection *this,
        bool *a2)
{
  int v4; // esi
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  *a2 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v12 = 0LL;
    v5 = **((_QWORD **)this + 21);
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    v7 = v6(v5, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v12);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EF7,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v7);
    if ( v12 )
    {
      v11 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 600LL))(v12, &v11);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1EFC,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v8);
      LOBYTE(v4) = v11 != 0;
      if ( *((unsigned __int8 *)this + 201) != v4 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1EFD,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)0x8000FFFFLL);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  *a2 = *((_BYTE *)this + 202);
  return 0LL;
}
