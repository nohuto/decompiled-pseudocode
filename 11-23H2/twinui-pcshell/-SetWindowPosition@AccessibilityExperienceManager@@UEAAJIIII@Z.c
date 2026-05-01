/*
 * XREFs of ?SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z @ 0x18053CD30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_ee2a45cc5bdcc8019082ab40d4404685___ @ 0x18053BA64 (CreationThreadDispatcher--RunAsync__lambda_ee2a45cc5bdcc8019082ab40d4404685___.c)
 */

__int64 __fastcall AccessibilityExperienceManager::SetWindowPosition(
        AccessibilityExperienceManager *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  __int64 v6; // rcx
  __int64 v10; // rcx
  char *v12; // [rsp+20h] [rbp-68h] BYREF
  int v13; // [rsp+28h] [rbp-60h]
  int v14; // [rsp+2Ch] [rbp-5Ch]
  int v15; // [rsp+30h] [rbp-58h]
  unsigned int v16; // [rsp+34h] [rbp-54h]
  _DWORD v17[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = *((_QWORD *)this + 29);
  v17[0] = a2;
  v17[1] = a4;
  v17[2] = a3;
  v17[3] = a5;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 64LL))(v6, v17);
    v10 = *((_QWORD *)this + 18);
    v12 = (char *)this - 144;
    v13 = a2;
    v14 = a3;
    v15 = a4;
    v16 = a5;
    CreationThreadDispatcher::RunAsync__lambda_ee2a45cc5bdcc8019082ab40d4404685___(v10, (volatile int *)&v12);
  }
  return 0LL;
}
