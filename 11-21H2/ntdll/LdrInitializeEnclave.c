/*
 * XREFs of LdrInitializeEnclave @ 0x1800D8410
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     ZwInitializeEnclave @ 0x1800A60E0 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1800A79A0 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1800A8170 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 *     LdrpObtainLockedEnclave @ 0x1800D9138 (LdrpObtainLockedEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800DC328 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 */

NTSTATUS __cdecl LdrInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  PVOID v5; // rsi
  PVOID v7; // rcx
  int v10; // edi
  __int64 locked; // rax
  __int64 v12; // rbx
  bool v13; // zf
  PVOID v15; // [rsp+30h] [rbp-28h] BYREF

  v5 = BaseAddress;
  v7 = BaseAddress;
  LOBYTE(BaseAddress) = 1;
  v10 = 0;
  locked = LdrpObtainLockedEnclave(v7, BaseAddress);
  v12 = locked;
  if ( locked && *(_DWORD *)(locked + 56) == 16 && *(_DWORD *)(locked + 64) )
  {
    if ( *(_DWORD *)(locked + 64) != 1 )
    {
      v10 = -1073741502;
      goto LABEL_13;
    }
    goto LABEL_8;
  }
  v10 = ZwInitializeEnclave(ProcessHandle, v5, EnclaveInformation, EnclaveInformationLength, EnclaveError);
  if ( v10 < 0 )
  {
    if ( v12 )
      goto LABEL_13;
  }
  else if ( v12 )
  {
LABEL_8:
    v13 = *(_DWORD *)(v12 + 56) == 16;
    *(_DWORD *)(v12 + 64) = 1;
    if ( !v13 )
    {
LABEL_15:
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v12 + 16));
      LdrpDereferenceEnclave((PVOID)v12);
      return v10;
    }
    v15 = 0LL;
    v10 = RtlCallEnclave(*(LPVOID (__cdecl **)(LPVOID))(v12 + 72), 0LL, 0, &v15);
    if ( v10 < 0 )
      NtTerminateEnclave(*(PVOID *)(v12 + 72), 0);
    else
      *(_DWORD *)(v12 + 64) = 2;
LABEL_13:
    if ( *(_DWORD *)(v12 + 56) == 16 )
      LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v10);
    goto LABEL_15;
  }
  return v10;
}
