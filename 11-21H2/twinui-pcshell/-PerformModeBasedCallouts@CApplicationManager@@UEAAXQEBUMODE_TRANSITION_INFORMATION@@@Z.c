/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x1800B6CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1802E7750 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *const a2)
{
  unsigned __int64 v4; // r14
  int v5; // ebx
  int v6; // ecx
  signed int ApartmentId; // ebx
  int v8; // edi
  bool v9; // r15
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  _BYTE *v17; // rcx
  int cchValue; // [rsp+28h] [rbp-E0h]
  unsigned int v19[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v21; // [rsp+48h] [rbp-C0h]
  _QWORD v22[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+68h] [rbp-A0h]
  int v24; // [rsp+6Ch] [rbp-9Ch]
  __int64 v25; // [rsp+70h] [rbp-98h]
  __int64 v26; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  _BYTE *v28; // [rsp+88h] [rbp-80h]
  bool v29; // [rsp+90h] [rbp-78h]
  unsigned __int64 v30; // [rsp+98h] [rbp-70h]
  signed int v31; // [rsp+A0h] [rbp-68h]
  _BYTE v32[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v33[96]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR Filename[264]; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v4 = ((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)240);
  v30 = v4;
  v5 = *(_DWORD *)(v4 + 0x2C);
  if ( v5 != 2 )
  {
    v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_3;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      v14 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v14;
    }
    else
    {
      v14 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    }
    if ( v14 != 1 )
      goto LABEL_4;
    if ( v5 == 1 )
    {
      v15 = IsAppCompatModeEnabled(16LL);
      v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v15 )
        v6 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v6;
LABEL_3:
      if ( v6 != 1 )
        goto LABEL_4;
    }
  }
  if ( *(_DWORD *)(v4 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(v19);
    if ( ApartmentId >= 0 && v19[0] != *(_DWORD *)(v4 + 40) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_5;
    }
  }
LABEL_4:
  ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
LABEL_5:
  v31 = ApartmentId;
  v8 = *((_DWORD *)a2 + 4);
  if ( (v8 != 1 && *((_DWORD *)a2 + 4) != 8 || v8 == 1 || *((_QWORD *)this + 34)) && *((_QWORD *)this + 39) )
  {
    v9 = 0;
    v10 = 0LL;
    v21 = 0LL;
    memset_0(v33, 0, 0x58uLL);
    if ( v8 == 1 || v8 == 8 )
    {
      if ( v8 == 1 )
      {
        v9 = 1;
        v20 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 40) + 88LL))(
               *((_QWORD *)this + 40),
               *((_QWORD *)this + 31),
               &SID_PerMonitorDesktopVisibilityService,
               &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
               &v20) >= 0
          && (*(int (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, 0LL, v19) >= 0 )
        {
          v9 = v19[0] != 0;
        }
        v11 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      else
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 280LL))(*((_QWORD *)this + 34)) & 4) != 0 )
        {
          v9 = 1;
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 384LL))(*((_QWORD *)this + 34));
        }
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)this + 34) + 328LL))(
                *((_QWORD *)this + 34),
                &v20,
                v32);
        v17 = v32;
        if ( v16 < 0 )
          v17 = v21;
        v21 = v17;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 344LL))(*((_QWORD *)this + 34), v33);
      }
    }
    v12 = *((_QWORD *)this + 31);
    v13 = *((_DWORD *)this + 66);
    *(_OWORD *)&v22[1] = *(_OWORD *)a2;
    v23 = *((_DWORD *)a2 + 4);
    v24 = v13;
    LODWORD(v25) = 0;
    v26 = v10;
    v27 = v12;
    v28 = v21;
    v29 = v9;
    *((_BYTE *)this + 240) = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 39) + 40LL))(
                               *((_QWORD *)this + 39),
                               &v22[1]) >= 0;
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
