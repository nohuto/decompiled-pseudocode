/*
 * XREFs of NtUserTransformPoint @ 0x1C01DF0F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C01CCB34 (IsValidKernelDpiAwarenessContext.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v8; // r9
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v18[4]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a3;
  v6 = a2;
  EnterSharedCrit(a1, a2, a3);
  v17 = 0LL;
  v18[0] = 0LL;
  if ( IsValidKernelDpiAwarenessContext(v6) && IsValidKernelDpiAwarenessContext(v5) )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[7] = v9[7];
    v10 = *a1;
    v17 = *a1;
    v11 = 1;
    if ( a4 && (v6 & 0xF) == 2 )
    {
      v18[0] = ValidateHmonitor(a4);
      v10 = v17;
    }
    if ( !v18[0] )
      v18[0] = GuessMonitorOverrideForCoordinateConversions(v10, v5, 0LL, v8);
    LogicalToPhysicalDPIPoint(&v17, &v17, v5, v18);
    PhysicalToLogicalDPIPoint(&v17, &v17, v6, v18);
    *a1 = v17;
  }
  else
  {
    v11 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v11;
}
