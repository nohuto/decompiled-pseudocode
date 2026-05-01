/*
 * XREFs of ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x1800CC0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x1800CD2D4 (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x18013DA18 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
_BOOL8 __fastcall CClassicWindowManager::HandleMonitorMove(
        CClassicWindowManager *this,
        HWND a2,
        struct IImmersiveMonitor *a3)
{
  char *v6; // rbp
  int ApartmentId; // r14d
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // ebx
  bool v14; // bl
  __int64 v15; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  if ( this == (CClassicWindowManager *)72 )
    v6 = 0LL;
  else
    v6 = (char *)this + 64;
  v18[2] = v6;
  if ( !(unsigned __int8)_ShouldCheckApartments(*((unsigned int *)v6 + 11)) || *((_DWORD *)v6 + 10) == -3 )
    goto LABEL_4;
  ApartmentId = SHCoGetApartmentId((unsigned int *)&v21);
  if ( ApartmentId >= 0 && (_DWORD)v21 != *((_DWORD *)v6 + 10) )
    ApartmentId = -2147417842;
  if ( ApartmentId >= 0 )
  {
LABEL_4:
    ApartmentId = -2147417842;
    if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v6) )
      ApartmentId = 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC8,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
      (const char *)(unsigned int)ApartmentId,
      v18[0]);
  }
  v19 = ApartmentId;
  v22 = 0LL;
  v18[1] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 16) )
  {
    while ( 1 )
    {
      v18[0] = 0LL;
      v10 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v9);
      v23 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v21 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
             v10,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v21) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v21 + 192LL))(v21, a2) )
      {
        v11 = 0;
      }
      else
      {
        v11 = -1;
      }
      v12 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
      if ( !v11 )
        break;
      if ( (unsigned __int64)++v9 >= *((_QWORD *)this + 16) )
        goto LABEL_16;
    }
    v8 = v9;
    v13 = 0;
  }
  else
  {
LABEL_16:
    v13 = -2147319765;
  }
  if ( v13 >= 0 )
  {
    v17 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 15) + 8 * v8);
    v13 = (**v17)(v17, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v22);
    if ( v13 >= 0 )
      (*(void (__fastcall **)(__int64, struct IImmersiveMonitor *))(*(_QWORD *)v22 + 88LL))(v22, a3);
  }
  v14 = v13 >= 0;
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
  return v14;
}
