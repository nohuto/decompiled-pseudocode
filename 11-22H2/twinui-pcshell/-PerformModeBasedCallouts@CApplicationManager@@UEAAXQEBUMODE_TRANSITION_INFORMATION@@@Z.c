/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x1800D2820
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *const a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r15d
  bool v6; // si
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  _BYTE *v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v15; // [rsp+40h] [rbp-C0h]
  __int128 v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+64h] [rbp-9Ch]
  int v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  _BYTE *v22; // [rsp+80h] [rbp-80h]
  bool v23; // [rsp+88h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h]
  _BYTE v26[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[96]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)240));
  v24 = v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v4, 1LL);
  v25 = v5;
  if ( (*((_DWORD *)a2 + 4) != 1 && *((_DWORD *)a2 + 4) != 8 || *((_DWORD *)a2 + 4) == 1 || *((_QWORD *)this + 34))
    && *((_QWORD *)this + 39) )
  {
    v6 = 0;
    v7 = 0LL;
    v15 = 0LL;
    memset_0(v27, 0, 0x58uLL);
    if ( *((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8 )
    {
      if ( (*((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8) && *((_DWORD *)a2 + 4) != 1 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 280LL))(*((_QWORD *)this + 34)) & 4) != 0 )
        {
          v6 = 1;
          v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 384LL))(*((_QWORD *)this + 34));
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)this + 34) + 328LL))(
                *((_QWORD *)this + 34),
                &v13,
                v26);
        v12 = v26;
        if ( v11 < 0 )
          v12 = v15;
        v15 = v12;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 344LL))(*((_QWORD *)this + 34), v27);
      }
      else
      {
        v6 = 1;
        v13 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 40) + 88LL))(
               *((_QWORD *)this + 40),
               *((_QWORD *)this + 31),
               &SID_PerMonitorDesktopVisibilityService,
               &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
               &v13) >= 0
          && (*(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v13 + 24LL))(v13, 0LL, &v14) >= 0 )
        {
          v6 = v14 != 0;
        }
        v8 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
    }
    v9 = *((_QWORD *)this + 31);
    v10 = *((_DWORD *)this + 66);
    v16 = *(_OWORD *)a2;
    v17 = *((_DWORD *)a2 + 4);
    v18 = v10;
    v19 = 0;
    v20 = v7;
    v21 = v9;
    v22 = v15;
    v23 = v6;
    *((_BYTE *)this + 240) = (*(int (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 39) + 40LL))(
                               *((_QWORD *)this + 39),
                               &v16) >= 0;
  }
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
}
