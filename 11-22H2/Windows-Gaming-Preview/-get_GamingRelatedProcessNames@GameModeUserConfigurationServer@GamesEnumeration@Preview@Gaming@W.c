/*
 * XREFs of ?get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x180041E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180019E10 (-GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV-$Com.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::get_GamingRelatedProcessNames(
        __int64 a1,
        _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // rsi
  int GlobalRelatedProcessesFromGameConfigStore; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, _QWORD); // r15
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rsi
  int v16; // eax
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD); // [rsp+50h] [rbp+30h] BYREF
  __int64 v21; // [rsp+60h] [rbp+40h] BYREF

  v21 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v5 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 104);
  if ( !*(_QWORD *)(a1 + 104) )
  {
    v20 = 0LL;
    GlobalRelatedProcessesFromGameConfigStore = GetGlobalRelatedProcessesFromGameConfigStore(
                                                  *(_QWORD *)(a1 + 112),
                                                  (__int64 *)&v20);
    v7 = GlobalRelatedProcessesFromGameConfigStore;
    if ( GlobalRelatedProcessesFromGameConfigStore < 0 )
    {
      v8 = 34LL;
      goto LABEL_8;
    }
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
    v10 = **v20;
    v11 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
    }
    GlobalRelatedProcessesFromGameConfigStore = v10(v9, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, v5);
    v7 = GlobalRelatedProcessesFromGameConfigStore;
    if ( GlobalRelatedProcessesFromGameConfigStore < 0 )
    {
      v8 = 35LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)(unsigned int)GlobalRelatedProcessesFromGameConfigStore);
      v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v12)[2])(v12);
      }
      goto LABEL_17;
    }
    v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
    if ( v20 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v13)[2])(v13);
    }
  }
  v14 = *v5;
  v15 = ***v5;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v16 = v15(v14, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, &v21);
  v7 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v16);
LABEL_17:
    if ( v4 )
      LeaveCriticalSection(v4);
    v17 = v21;
    goto LABEL_23;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  v17 = 0LL;
  *a2 = v21;
  v7 = 0;
LABEL_23:
  if ( v17 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v7;
}
