/*
 * XREFs of RtlHpInitializeHeapManager @ 0x1801181CC
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A4730 (NtQuerySystemInformation.c)
 *     RtlHpHeapManagerInitialize @ 0x18011F400 (RtlHpHeapManagerInitialize.c)
 *     RtlHpHeapManagerStart @ 0x18011F4D4 (RtlHpHeapManagerStart.c)
 */

NTSTATUS __fastcall RtlHpInitializeHeapManager(__int64 a1)
{
  NTSTATUS result; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  _BYTE SystemInformation[40]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v8; // [rsp+68h] [rbp-30h]

  v6 = 0x4000LL;
  RtlHpHeapManagerInitialize(a1, &v6);
  RtlpHpEnvHandle = 0LL;
  result = NtQuerySystemInformation(SystemEmulationBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
    return RtlHpHeapManagerStart(v3, v2, v4, v5, v8 + 1);
  return result;
}
