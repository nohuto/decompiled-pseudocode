/*
 * XREFs of DpiSendAsyncResumeAdapterRequest @ 0x1C0024474
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C0023FC0 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiSendAsyncResumeAdapterRequest(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax

  WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
  *(_DWORD *)(a1 + 4016) = 2;
  v2 = *(_QWORD **)(a1 + 3976);
  v3 = (_QWORD *)(a1 + 3992);
  if ( *v2 != a1 + 3968 )
    __fastfail(3u);
  *v3 = a1 + 3968;
  *(_QWORD *)(a1 + 4000) = v2;
  *v2 = v3;
  *(_QWORD *)(a1 + 3976) = v3;
  return KeSetEvent((PRKEVENT)(a1 + 3936), 0, 0);
}
