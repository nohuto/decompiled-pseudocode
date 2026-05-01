/*
 * XREFs of ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x180104A80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1802E7750 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=13
_BOOL8 __fastcall CClassicWindowManager::HandleMonitorMove(
        CClassicWindowManager *this,
        HWND a2,
        struct IImmersiveMonitor *a3)
{
  char *v6; // rbp
  int v7; // ebx
  int v8; // eax
  int ApartmentId; // r14d
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // ebx
  bool v16; // bl
  __int64 v17; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v20[2]; // [rsp+30h] [rbp-298h] BYREF
  __int64 v21; // [rsp+38h] [rbp-290h] BYREF
  __int64 v22; // [rsp+40h] [rbp-288h] BYREF
  __int64 v23[3]; // [rsp+48h] [rbp-280h] BYREF
  int v24; // [rsp+60h] [rbp-268h]
  WCHAR Filename[264]; // [rsp+70h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  if ( this == (CClassicWindowManager *)72 )
    v6 = 0LL;
  else
    v6 = (char *)this + 64;
  v23[2] = (__int64)v6;
  v7 = *((_DWORD *)v6 + 11);
  if ( v7 != 2 )
  {
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_5;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_44;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_6;
    }
    if ( v7 == 1 )
    {
      if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
      {
        v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_5:
        if ( v8 != 1 )
          goto LABEL_6;
        goto LABEL_38;
      }
LABEL_44:
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_6;
    }
  }
LABEL_38:
  if ( *((_DWORD *)v6 + 10) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(v20);
    if ( ApartmentId >= 0 && v20[0] != *((_DWORD *)v6 + 10) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId);
      goto LABEL_8;
    }
  }
LABEL_6:
  ApartmentId = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v6) )
    ApartmentId = 0;
LABEL_8:
  v24 = ApartmentId;
  v21 = 0LL;
  v23[1] = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( *((_QWORD *)this + 16) )
  {
    while ( 1 )
    {
      v23[0] = 0LL;
      v12 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v11);
      v22 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *(_QWORD *)v20 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, unsigned int *))v12)(
             v12,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             v20) >= 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(**(_QWORD **)v20 + 192LL))(*(_QWORD *)v20, a2) )
      {
        v13 = 0;
      }
      else
      {
        v13 = -1;
      }
      v14 = *(_QWORD *)v20;
      if ( *(_QWORD *)v20 )
      {
        *(_QWORD *)v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v23);
      if ( !v13 )
        break;
      if ( (unsigned __int64)++v11 >= *((_QWORD *)this + 16) )
        goto LABEL_18;
    }
    v10 = v11;
    v15 = 0;
  }
  else
  {
LABEL_18:
    v15 = -2147319765;
  }
  if ( v15 >= 0 )
  {
    v19 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 15) + 8 * v10);
    v15 = (**v19)(v19, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v21);
    if ( v15 >= 0 )
      (*(void (__fastcall **)(__int64, struct IImmersiveMonitor *))(*(_QWORD *)v21 + 88LL))(v21, a3);
  }
  v16 = v15 >= 0;
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
  return v16;
}
