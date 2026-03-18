/*
 * XREFs of HvlHvDebuggerPowerHandler @ 0x140547040
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlHvDebuggerPowerHandler(char a1)
{
  _QWORD *v2; // rax
  unsigned __int16 v3; // bx
  __int128 v5; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+38h] [rbp-70h]
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF

  v6 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v5, 1, (__int64)v8, 40LL);
  *(_DWORD *)v2 = 10;
  *((_BYTE *)v2 + 8) = a1;
  v3 = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((__int64)&v5);
  return HvlpHvToNtStatus(v3);
}
