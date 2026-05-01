/*
 * XREFs of ?SetBorder@CortanaStoreAppExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x180388120
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x18015DA98 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::SetBorder(__int64 a1, int a2, char a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int LastError; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // r9
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  int v14; // [rsp+30h] [rbp-30h] BYREF
  int *v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+40h] [rbp-20h]
  int v17; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+4Ch] [rbp-14h]
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v20 = 0;
  v17 = 4;
  v19 = 0x10000;
  v18 = 1024;
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v18 = 1408;
    }
    else if ( a2 == 2 )
    {
      v18 = 1312;
    }
    else if ( a2 == 3 )
    {
      v18 = 1216;
      if ( a3 )
        v18 = 1248;
    }
  }
  v14 = 19;
  v15 = &v17;
  v16 = 16;
  v12 = 0LL;
  v3 = *(_QWORD *)(a1 + 240);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  v5 = v4(v3, &v12);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 1257LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_17;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 1259LL;
    goto LABEL_13;
  }
  if ( (unsigned int)SetWindowCompositionAttribute(v13, &v14, v8, v9) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x4EC,
                  (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                  v10);
LABEL_17:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return LastError;
}
