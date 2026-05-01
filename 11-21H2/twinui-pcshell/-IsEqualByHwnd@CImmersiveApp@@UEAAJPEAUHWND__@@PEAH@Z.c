/*
 * XREFs of ?IsEqualByHwnd@CImmersiveApp@@UEAAJPEAUHWND__@@PEAH@Z @ 0x1801267F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::IsEqualByHwnd(CImmersiveApp *this, HWND a2, int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  HWND v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = *((_QWORD *)this + 3);
  v9 = a2;
  v10 = 0LL;
  v11 = 0;
  *a3 = (*(unsigned __int8 (__fastcall **)(char *, HWND *, __int64))(v6 + 296))((char *)this + 24, &v9, 2LL) != 0;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
