/*
 * XREFs of CmpStartRMLogs @ 0x14069870C
 * Callers:
 *     CmpTransInitializeTransaction @ 0x14069846C (CmpTransInitializeTransaction.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpUuidCreate @ 0x140685EA8 (CmpUuidCreate.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     CmpStartRMLog @ 0x140872DD8 (CmpStartRMLog.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpStartRMLogs(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // ebx
  bool v5; // bp
  __int64 v6; // rsi
  int started; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  UUID Uuid; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 104);
  v3 = 0;
  Uuid = 0LL;
  if ( (v1 & 8) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( (v1 & 1) == 0 )
  {
    v5 = CmpUuidCreate(&Uuid) >= 0;
    v6 = (*(_DWORD *)(a1 + 104) & 2) != 0 ? 4 : 0;
    CmpLockRegistryFreezeAware(0LL);
    started = CmpStartRMLog(a1, 0LL);
    v3 = started;
    if ( started < 0 && started != -1073741697 && started != -1073741757 && started != -1073741670 && v5 )
    {
      *(_DWORD *)(a1 + 104) &= ~2u;
      v3 = CmpStartRMLog(a1, &Uuid);
    }
    CmpUnlockRegistry(v9, v8, v10, v11, *(_QWORD *)&Uuid.Data1, *(_QWORD *)Uuid.Data4);
    *(_DWORD *)(v6 + a1 + 108) = v3;
  }
  return v3;
}
