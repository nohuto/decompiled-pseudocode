/*
 * XREFs of RtlHpInitializeHeapManager @ 0x1800AEF70
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009F4B0 (NtQuerySystemInformation.c)
 *     RtlHpHeapManagerInitialize @ 0x1800AF954 (RtlHpHeapManagerInitialize.c)
 *     RtlHpHeapManagerStart @ 0x1801213C4 (RtlHpHeapManagerStart.c)
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
