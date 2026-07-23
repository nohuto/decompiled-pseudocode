/*
 * XREFs of PopWin32CalloutWatchdogCallback @ 0x14099BE70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PopInvokeWin32Callout @ 0x1407D3B8C (PopInvokeWin32Callout.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140883720 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall PopWin32CalloutWatchdogCallback(
        __int64 a1,
        unsigned int a2,
        ULONG_PTR a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  int v6; // eax
  int v9; // eax
  ULONG_PTR v10; // rcx
  int v12; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR v13; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-18h]

  v6 = *(_DWORD *)(a1 + 20);
  BugCheckParameter2 = 0LL;
  v13 = a3;
  v12 = v6;
  v9 = PopInvokeWin32Callout(43, (__int64)&v13, 1, &v12);
  v10 = 0LL;
  if ( !v9 )
    v10 = BugCheckParameter2;
  if ( PopWin32CalloutWatchdogBugcheckEnabled )
    KeBugCheckEx(0x1A2u, a3, v10, BugCheckParameter3, BugCheckParameter4);
  return DbgkWerCaptureLiveKernelDump(
           L"PoW32kWatchdog",
           a2,
           a3,
           v10,
           BugCheckParameter3,
           BugCheckParameter4,
           0LL,
           0LL,
           1);
}
