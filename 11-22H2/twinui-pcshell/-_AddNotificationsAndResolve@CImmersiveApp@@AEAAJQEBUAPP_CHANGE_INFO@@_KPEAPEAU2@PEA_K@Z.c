/*
 * XREFs of ?_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z @ 0x18002868C
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180027C00 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180028808 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::_AddNotificationsAndResolve(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *const a2,
        unsigned __int64 a3,
        struct APP_CHANGE_INFO **a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r13
  unsigned int v6; // edi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  const struct APP_CHANGE_INFO *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  struct APP_CHANGE_INFO *v15; // rax
  struct APP_CHANGE_INFO *v16; // r15
  struct APP_CHANGE_INFO *v17; // rbx
  __int64 v18; // rbp
  unsigned __int8 (__fastcall *v20)(CImmersiveApp *); // rax
  unsigned __int64 v21; // rdx
  __int64 i; // r8
  int v23; // ecx

  v5 = a5;
  v6 = 0;
  *a4 = 0LL;
  v9 = a3;
  v10 = a3;
  *a5 = 0LL;
  if ( a3 )
  {
    v11 = a2;
    v12 = v10;
    do
    {
      v13 = *(int *)v11;
      v11 = (const struct APP_CHANGE_INFO *)((char *)v11 + 16);
      v10 += qword_1809856D0[4 * v13 + 2];
      --v12;
    }
    while ( v12 );
  }
  v14 = 16 * v10;
  if ( !is_mul_ok(v10, 0x10uLL) )
    v14 = -1LL;
  v15 = (struct APP_CHANGE_INFO *)operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    v17 = v15;
    if ( v9 )
    {
      do
      {
        *(_OWORD *)v17 = *(_OWORD *)a2;
        if ( *(_DWORD *)v17 != 6 && *(_DWORD *)v17 != 12 && !*((_QWORD *)v17 + 1) )
          *((_QWORD *)v17 + 1) = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 288));
        v18 = 4LL * *(int *)a2;
        if ( qword_1809856D0[v18 + 1] )
        {
          v20 = (unsigned __int8 (__fastcall *)(CImmersiveApp *))qword_1809856D0[v18 + 3];
          if ( !v20 || v20(this) )
          {
            v21 = 0LL;
            for ( i = *((_QWORD *)v17 + 1); v21 < qword_1809856D0[v18 + 2]; *((_QWORD *)v17 + 1) = i )
            {
              v17 = (struct APP_CHANGE_INFO *)((char *)v17 + 16);
              v23 = *(_DWORD *)(qword_1809856D0[v18 + 1] + 4 * v21++);
              *(_DWORD *)v17 = v23;
            }
          }
        }
        v17 = (struct APP_CHANGE_INFO *)((char *)v17 + 16);
        a2 = (const struct APP_CHANGE_INFO *const)((char *)a2 + 16);
        --v9;
      }
      while ( v9 );
      v5 = a5;
    }
    *a4 = v16;
    *v5 = (v17 - v16) >> 4;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
