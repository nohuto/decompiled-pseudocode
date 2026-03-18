/*
 * XREFs of HvlUnmapDeviceInterrupt @ 0x140549100
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlUnmapDeviceInterrupt(__int64 a1, __int128 *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm0
  __int128 v7; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+30h] [rbp-78h]
  __int64 v9; // [rsp+38h] [rbp-70h]
  _BYTE v10[80]; // [rsp+40h] [rbp-68h] BYREF

  v8 = 0LL;
  LODWORD(v9) = 0;
  v7 = 0LL;
  v4 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v7, 1, (__int64)v10, 40LL);
  *v4 = -1LL;
  v4[1] = a1;
  v5 = *a2;
  *((_DWORD *)v4 + 8) = 0;
  *((_OWORD *)v4 + 1) = v5;
  LOWORD(a1) = HvcallInitiateHypercall(125);
  HvlpReleaseHypercallPage((__int64)&v7);
  return HvlpHvToNtStatus((unsigned __int16)a1);
}
