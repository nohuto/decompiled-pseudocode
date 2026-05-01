/*
 * XREFs of ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x1800CF4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CClassicWindowManager::SetCloak(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-18h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v17 = 0LL;
  if ( (a4 & 1) == 0 )
    goto LABEL_14;
  v17 = 0LL;
  v19[1] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_QWORD *)(a1 + 104) )
  {
    while ( 1 )
    {
      v19[0] = 0LL;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v9);
      v18 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v16 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
             v10,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v16) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 192LL))(v16, a2) )
      {
        v11 = 0;
      }
      else
      {
        v11 = -1;
      }
      v12 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
      if ( !v11 )
        break;
      if ( (unsigned __int64)++v9 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_20;
    }
    v8 = v9;
  }
  else
  {
LABEL_20:
    v11 = -2147319765;
  }
  if ( v11 >= 0 )
  {
    v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 96) + 8 * v8);
    v11 = (**v13)(v13, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v17);
    if ( v11 >= 0 )
LABEL_14:
      v11 = (*(__int64 (__fastcall **)(PVOID, __int64, bool))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                            + 24LL))(
              CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
              a2,
              a3 != 0);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v11;
}
