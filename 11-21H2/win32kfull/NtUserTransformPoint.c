/*
 * XREFs of NtUserTransformPoint @ 0x1C00E1820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00E1AF8 (IsValidKernelDpiAwarenessContext.c)
 */

__int64 __fastcall NtUserTransformPoint(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // r14d
  __int64 v8; // rdx
  _BYTE *v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-28h] BYREF

  v5 = a3;
  v6 = a2;
  EnterSharedCrit(a1, a2, a3);
  v14 = 0LL;
  v15[0] = 0LL;
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(v6) && (unsigned int)IsValidKernelDpiAwarenessContext(v5) )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[7] = v9[7];
    v10 = *a1;
    v14 = *a1;
    v11 = 1;
    if ( a4 && (v6 & 0xF) == 2 )
    {
      v15[0] = ValidateHmonitor(a4, v9);
      v10 = v14;
    }
    if ( !v15[0] )
      v15[0] = GuessMonitorOverrideForCoordinateConversions(v10, v5, 0LL);
    LogicalToPhysicalDPIPoint(&v14, &v14, v5, v15);
    PhysicalToLogicalDPIPoint(&v14, &v14, v6, v15);
    *a1 = v14;
  }
  else
  {
    v11 = 0;
    UserSetLastError(87LL, v8);
  }
  UserSessionSwitchLeaveCrit(v12);
  return v11;
}
