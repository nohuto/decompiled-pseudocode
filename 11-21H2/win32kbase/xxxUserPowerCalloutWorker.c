/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C007C540
 * Callers:
 *     <none>
 * Callees:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C007C6E0 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     IsxxxSetInformationThreadSupported @ 0x1C007C764 (IsxxxSetInformationThreadSupported.c)
 *     EtwTraceCompletePowerRequest @ 0x1C007C790 (EtwTraceCompletePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C007C7B0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00D0E68 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 xxxUserPowerCalloutWorker()
{
  int v0; // esi
  __int64 v1; // rdi
  struct tagPOWERREQUEST *v2; // rbx
  struct _WIN32_POWEREVENT_PARAMETERS *v3; // rcx
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-28h]
  __int128 v8; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h]

  v0 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v1 = 1LL;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0
      || qword_1C029C348 && (int)qword_1C029C348(-2LL, 7LL, &v8, 24LL) < 0 )
    {
      v1 = 0LL;
    }
    else
    {
      v0 = 1;
    }
  }
  gpPowerThread = KeGetCurrentThread();
  while ( 1 )
  {
    v2 = UnqueuePowerRequest();
    if ( !v2 )
      break;
    if ( v1 )
    {
      v7 = 0LL;
      v6 = 0LL;
      if ( qword_1C029BD10 )
        qword_1C029BD10(v2, &v6, CancelPowerRequest);
      gpPowerRequestCurrent = v2;
      v3 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v2 + 8);
      if ( v3 )
        v4 = xxxUserPowerEventCalloutWorker(v3);
      else
        v4 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v2 + 14) = v4;
      gpPowerRequestCurrent = 0LL;
      if ( qword_1C029BD20 )
        qword_1C029BD20(&v6);
    }
    if ( *((_BYTE *)v2 + 72) )
    {
      KeSetEvent((PRKEVENT)((char *)v2 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v2, *((unsigned int *)v2 + 14));
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v2);
    }
  }
  if ( v0 && (int)IsxxxSetInformationThreadSupported() >= 0 && qword_1C029C348 )
    qword_1C029C348(-2LL, 9LL, &v8, 24LL);
  return 1LL;
}
