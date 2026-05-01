/*
 * XREFs of ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x18012DC90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1802E7750 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveMode::HandleActivationDeprecated(_DWORD *a1, int a2, char a3)
{
  __int64 v5; // r13
  int v6; // ebx
  int v7; // r14d
  int v8; // ecx
  signed int ApartmentId; // esi
  void (__fastcall *v10)(_DWORD *, GUID *, IUnknown **); // rbx
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // ecx
  void *v15; // rcx
  int v17; // ecx
  int v18; // eax
  unsigned int v19[2]; // [rsp+38h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-C8h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v22[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  signed int v24; // [rsp+70h] [rbp-98h]
  WCHAR Filename[264]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C0h] [rbp+1B8h]

  LOBYTE(v19[0]) = a3;
  v19[1] = 0;
  v5 = (unsigned __int64)(a1 + 24) & -(__int64)(a1 != (_DWORD *)88);
  v23 = v5;
  v6 = *(_DWORD *)(v5 + 0x2C);
  v7 = -1;
  if ( v6 == 2 )
    goto LABEL_34;
  v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    goto LABEL_3;
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    v17 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v17;
  }
  else
  {
    v17 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v17 != 1 )
    goto LABEL_4;
  if ( v6 == 1 )
  {
    v18 = IsAppCompatModeEnabled(16LL);
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( v18 )
      v8 = 2;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v8;
LABEL_3:
    if ( v8 != 1 )
    {
LABEL_4:
      ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v5) ? 0x8001010E : 0;
      goto LABEL_5;
    }
  }
LABEL_34:
  if ( *(_DWORD *)(v5 + 40) == -3 )
    goto LABEL_4;
  ApartmentId = SHCoGetApartmentId(&v19[1]);
  if ( ApartmentId >= 0 && v19[1] != *(_DWORD *)(v5 + 40) )
    ApartmentId = -2147417842;
  if ( ApartmentId >= 0 )
    goto LABEL_4;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (__int64)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentId);
LABEL_5:
  v24 = ApartmentId;
  if ( a2 == 1 )
  {
    v7 = 0;
  }
  else if ( a2 == 8 || a2 == 10 || a2 == 12 )
  {
    v7 = 1;
  }
  ppvOut = 0LL;
  punk = 0LL;
  v19[1] = 2;
  v10 = *(void (__fastcall **)(_DWORD *, GUID *, IUnknown **))(*((_QWORD *)a1 - 7) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  v10(a1 - 14, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  LOBYTE(v10) = IUnknown_QueryService(
                  punk,
                  &IID_IImmersiveApplicationManager,
                  &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
                  &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( (_BYTE)v10 )
  {
    v11 = a1[40];
    v12 = a1[62];
    if ( v7 == -1 || !LOBYTE(v19[0]) )
    {
      v13 = a1[69];
      v14 = v13;
    }
    else
    {
      v13 = v7;
      v14 = a1[69];
    }
    v22[0] = v14;
    v22[1] = v13;
    v22[2] = v12;
    v22[3] = v11;
    v22[4] = a2;
    (*(void (__fastcall **)(void *, _DWORD *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v22);
  }
  if ( LOBYTE(v19[0]) && v7 != -1 && v7 != a1[69] )
    a1[69] = v7;
  v15 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v5);
  return 0LL;
}
