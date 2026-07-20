/*
 * XREFs of SmpAdoptJob @ 0x14001A890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpAdoptJob(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // edx
  __int64 v4; // rax
  unsigned int v6; // ebx
  void *TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  v3 = NtDuplicateObject(
         *(HANDLE *)(a2 + 32),
         *(HANDLE *)(a1 + 48),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0x1F003Fu,
         0,
         0);
  if ( v3 >= 0 )
  {
    v6 = NtAssignProcessToJobObject(TargetHandle, (HANDLE)0xFFFFFFFFFFFFFFF9LL);
    NtClose(TargetHandle);
    return v6;
  }
  else
  {
    v4 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v4 + 2] = 572;
    SmpGlobalLog[2 * v4 + 3] = v3;
    *(_QWORD *)&SmpGlobalLog[2 * v4 + 4] = a1;
    return (unsigned int)v3;
  }
}
