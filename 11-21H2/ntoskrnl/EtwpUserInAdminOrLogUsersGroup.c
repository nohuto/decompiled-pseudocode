/*
 * XREFs of EtwpUserInAdminOrLogUsersGroup @ 0x1409E1E64
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1409B8ECC (RtlAllocateAndInitializeSidEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char EtwpUserInAdminOrLogUsersGroup()
{
  __int64 v0; // rdx
  int v2; // [rsp+48h] [rbp+20h] BYREF
  __int16 v3; // [rsp+4Ch] [rbp+24h]
  PVOID P; // [rsp+50h] [rbp+28h] BYREF
  int v5; // [rsp+58h] [rbp+30h] BYREF
  int v6; // [rsp+5Ch] [rbp+34h]

  v2 = 0;
  P = 0LL;
  v3 = 1280;
  RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
  v5 = 32;
  v6 = 558;
  if ( (int)RtlAllocateAndInitializeSidEx((__int64)&v2, v0, (char *)&v5, &P) >= 0 )
  {
    RtlCheckTokenMembership(0LL, P);
    ExFreePoolWithTag(P, 0);
  }
  return 0;
}
