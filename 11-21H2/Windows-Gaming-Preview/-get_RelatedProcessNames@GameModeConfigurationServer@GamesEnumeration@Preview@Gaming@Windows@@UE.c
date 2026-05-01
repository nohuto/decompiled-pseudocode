/*
 * XREFs of ?get_RelatedProcessNames@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x18003F560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::get_RelatedProcessNames(
        __int64 a1,
        _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbp
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 104);
  v6 = **v5;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v7 = v6(v5, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v4 )
      LeaveCriticalSection(v4);
    v9 = 0LL;
    *a2 = v12;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v7);
    if ( v4 )
      LeaveCriticalSection(v4);
    v9 = v12;
  }
  if ( v9 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v8;
}
