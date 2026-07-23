/*
 * XREFs of PopWnfSprActiveSessionChangeCallback @ 0x140863000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7760 (PopSetPowerSettingValueAcDc.c)
 *     ExQueryWnfStateData @ 0x1407E2490 (ExQueryWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopWnfSprActiveSessionChangeCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+40h] [rbp-18h]

  LODWORD(v8) = 20;
  v11 = 0;
  v10 = 0LL;
  v2 = ExQueryWnfStateData(a1, &v9, &v10, (unsigned int *)&v8);
  if ( v2 >= 0 && (_DWORD)v8 == 20 )
  {
    PopAcquirePolicyLock(v1);
    PopSetPowerSettingValueAcDc(&GUID_SPR_ACTIVE_SESSION_CHANGE, 0x14u, &v10);
    PopReleasePolicyLock(v4, v3, v5, v6, v8, v9);
  }
  return (unsigned int)v2;
}
