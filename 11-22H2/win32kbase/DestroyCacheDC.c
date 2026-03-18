/*
 * XREFs of DestroyCacheDC @ 0x1C005D380
 * Callers:
 *     DestroyMonitorDCs @ 0x1C00122F0 (DestroyMonitorDCs.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C004C160 (ReleaseCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C0050580 (xxxUserProcessCallout.c)
 *     DestroyCacheDCEntries @ 0x1C0050FE8 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C00A065C (DelayedDestroyCacheDC.c)
 * Callees:
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0041CB0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLockEx @ 0x1C0041D30 (HmgShareLockEx.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     GreLockVisRgn @ 0x1C0051080 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0051170 (GreUnlockVisRgn.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C005D4DC (IsGreSelectRedirectionBitmapSupported.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     HmgMarkDeletable @ 0x1C009DCF0 (HmgMarkDeletable.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DestroyCacheDC(char *a1, __int64 a2)
{
  char *v3; // rdi
  unsigned int v4; // esi
  int v5; // r14d
  void *v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rbp
  HPALETTE v9; // rcx
  HPALETTE v10; // rcx
  HPALETTE v11; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v12; // rcx
  char *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  HDC *v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0;
  if ( !a1 )
  {
    GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
    v5 = 1;
    v3 = (char *)gpDispInfo + 24;
    for ( i = (char *)*((_QWORD *)gpDispInfo + 3); i; i = *(char **)i )
    {
      if ( *((_QWORD *)i + 1) == a2 )
        goto LABEL_2;
      v3 = i;
    }
    goto LABEL_33;
  }
LABEL_2:
  if ( !v3 )
  {
LABEL_33:
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    return 0LL;
  }
  v6 = *(void **)v3;
  v7 = *(_DWORD *)(*(_QWORD *)v3 + 64LL) | 0x400000;
  *(_DWORD *)(*(_QWORD *)v3 + 64LL) = v7;
  if ( (v7 & 0x40000) == 0 )
  {
    v8 = *((_QWORD *)v6 + 5);
    if ( v8 > 2 )
    {
      PsGetCurrentProcessId();
      LOBYTE(v15) = 4;
      HmgMarkDeletable(v8, v15);
    }
    v9 = (HPALETTE)*((_QWORD *)v6 + 5);
    if ( (unsigned __int64)v9 > 2 )
      GreDeleteObject(v9);
    *((_QWORD *)v6 + 5) = 0LL;
  }
  v10 = (HPALETTE)*((_QWORD *)v6 + 6);
  if ( v10 )
  {
    GreDeleteObject(v10);
    *((_QWORD *)v6 + 6) = 0LL;
  }
  v11 = (HPALETTE)*((_QWORD *)v6 + 7);
  if ( v11 )
  {
    GreDeleteObject(v11);
    *((_QWORD *)v6 + 7) = 0LL;
  }
  if ( !(unsigned int)GreSetDCOwnerEx(*((_QWORD *)v6 + 1), 0x80000002, 1, 0) )
    goto LABEL_35;
  if ( (*((_DWORD *)v6 + 16) & 0x4000) != 0 )
  {
    if ( !gbIgnoreStressedOutStuff && !*((_QWORD *)v6 + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2127LL);
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C0294EA0 )
      qword_1C0294EA0(*((_QWORD *)v6 + 1), 0LL);
    *((_DWORD *)v6 + 16) &= ~0x4000u;
    *((_QWORD *)v6 + 4) = 0LL;
  }
  if ( !(unsigned int)GrepDeleteDC(*((HDC *)v6 + 1), 0x400000u) )
  {
    GreSetDCOwnerEx(*((_QWORD *)v6 + 1), 0x80000012, 1, 0);
LABEL_35:
    v16 = *((_QWORD *)v6 + 1);
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 11) = 0LL;
    v20[1] = 0LL;
    v17 = HmgShareLockEx(v16, 1, 0);
    v20[0] = (HDC *)v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 36) |= 0x80000u;
      XDCOBJ::vAltUnlockFast(v20);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    goto LABEL_19;
  }
  if ( (*((_DWORD *)v6 + 16) & 0x1002) == 2 )
    --gnDCECount;
  v12 = gpLeakTrackingAllocator;
  *(_QWORD *)v3 = *(_QWORD *)v6;
  NSInstrumentation::CLeakTrackingAllocator::Free(v12, v6);
  v4 = 1;
LABEL_19:
  if ( v5 )
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  return v4;
}
