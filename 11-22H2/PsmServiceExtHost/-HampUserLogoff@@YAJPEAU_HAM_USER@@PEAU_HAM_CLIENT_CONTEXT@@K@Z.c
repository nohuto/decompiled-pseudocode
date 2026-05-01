/*
 * XREFs of ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180080DC8
 * Callers:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x180072ABC (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180042420 (-HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x18004245C (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z @ 0x180080284 (-HampHostIdStoreInvalidateForUserSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_USER@@@Z.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180080E90 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 */

__int64 __fastcall HampUserLogoff(struct _HAM_USER *a1, struct _HAM_CLIENT_CONTEXT *a2, int a3)
{
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx

  HampUserAcquireLockExclusive(a1, (__int64)a2);
  v7 = *((_DWORD *)a1 + 48);
  if ( (v7 & 1) != 0 )
  {
    v8 = -1073740682;
  }
  else
  {
    *((_DWORD *)a1 + 48) = v7 | 1;
    v8 = 0;
  }
  HampUserReleaseLockExclusive(a1, v6);
  if ( v8 >= 0 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 20) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    v8 = HampUserTerminate(a1, v9, v10, a2, a3);
    if ( v8 >= 0 )
    {
      HampHostIdStoreInvalidateForUserSession((struct _HAM_HOSTID_STORE *)(v11 + 408), a1);
      v8 = 0;
    }
    HampUserAcquireLockExclusive(a1, v12);
    *((_QWORD *)a1 + 23) = 0LL;
    *((_DWORD *)a1 + 48) &= 0xFFFFFFFC;
    HampUserReleaseLockExclusive(a1, v13);
  }
  return (unsigned int)v8;
}
