/*
 * XREFs of ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003ECBC
 * Callers:
 *     ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003EB4C (-HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003ED68 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18003EFEC (-HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18003F028 (-HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x18003F070 (-HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionLogoff(struct _HAM_SESSION *a1, struct _HAM_CLIENT_CONTEXT *a2, int a3)
{
  int v6; // eax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8

  HampSessionAcquireLockExclusive(a1);
  v6 = *((_DWORD *)a1 + 36);
  if ( (v6 & 2) != 0 )
  {
    v7 = -1073740682;
  }
  else
  {
    *((_DWORD *)a1 + 36) = v6 | 2;
    v7 = 0;
  }
  HampSessionReleaseLockExclusive(a1);
  if ( v7 >= 0 )
  {
    v7 = HampSessionTerminate(a1, v8, v9, a2, a3);
    if ( v7 >= 0 )
    {
      HampHostIdStoreInvalidateForSession(
        (struct _HAM_HOSTID_STORE *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 408),
        a1);
      v7 = 0;
    }
    HampSessionAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 36) &= ~2u;
    HampSessionReleaseLockExclusive(a1);
  }
  return (unsigned int)v7;
}
