/*
 * XREFs of ?SetIsOccluded@CImmersiveWindowCollection@CImmersiveApp@@QEAAJ_N@Z @ 0x180044E9C
 * Callers:
 *     ?SetIsOccluded@CImmersiveApp@@UEAAJH@Z @ 0x180044E40 (-SetIsOccluded@CImmersiveApp@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetIsOccluded(
        CImmersiveApp::CImmersiveWindowCollection *this,
        char a2)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *((_BYTE *)this + 202) = a2;
  v3 = (__int64 *)*((_QWORD *)this + 21);
  v4 = &v3[*((_QWORD *)this + 22)];
  while ( v3 != v4 )
  {
    v13 = 0LL;
    v5 = *v3;
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v3 + 40LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    v7 = v6(v5, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v13);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EFB,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v7,
        v11);
    if ( v13 )
    {
      LOBYTE(v8) = a2;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 592LL))(v13, v8);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1EFF,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v9,
          v11);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    ++v3;
  }
  return 0LL;
}
