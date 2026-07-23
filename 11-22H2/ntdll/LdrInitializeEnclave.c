/*
 * XREFs of LdrInitializeEnclave @ 0x1800D8710
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x1800220FC (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     ZwInitializeEnclave @ 0x1800A0E80 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1800A27A0 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1800A2FB0 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D8D70 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800DC848 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 */

NTSTATUS __cdecl LdrInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  int v9; // edi
  __int64 *v10; // rax
  __int64 *v11; // rbx
  _DWORD *v12; // rsi
  bool v13; // zf
  PVOID v15; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  v10 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v11 = v10;
  if ( v10 )
  {
    if ( *((_DWORD *)v10 + 14) == 16 )
    {
      v12 = v10 + 8;
      if ( *((_DWORD *)v10 + 16) )
      {
        if ( *v12 != 1 )
        {
          v9 = -1073741502;
          goto LABEL_13;
        }
        goto LABEL_8;
      }
    }
  }
  v9 = ZwInitializeEnclave(ProcessHandle, BaseAddress, EnclaveInformation, EnclaveInformationLength, EnclaveError);
  if ( v9 < 0 )
  {
    if ( v11 )
      goto LABEL_13;
  }
  else
  {
    v12 = v11 + 8;
    if ( v11 )
    {
LABEL_8:
      v13 = *((_DWORD *)v11 + 14) == 16;
      *v12 = 1;
      if ( !v13 )
      {
LABEL_15:
        RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v11 + 2));
        LdrpDereferenceEnclave(v11);
        return v9;
      }
      v15 = 0LL;
      v9 = RtlCallEnclave((LPVOID (__cdecl *)(LPVOID))v11[9], 0LL, 0, &v15);
      if ( v9 < 0 )
        NtTerminateEnclave((PVOID)v11[9], 0);
      else
        *v12 = 2;
LABEL_13:
      if ( *((_DWORD *)v11 + 14) == 16 )
        LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v9);
      goto LABEL_15;
    }
  }
  return v9;
}
