/*
 * XREFs of ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C0161848
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C010C6D4 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ?FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ @ 0x1C011FCB0 (-FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ.c)
 *     ??0MINIPORT_HOOK_DRIVER@@QEAA@XZ @ 0x1C01210C0 (--0MINIPORT_HOOK_DRIVER@@QEAA@XZ.c)
 *     ??_EMINIPORT_HOOK_DRIVER@@QEAAPEAXI@Z @ 0x1C013DB6C (--_EMINIPORT_HOOK_DRIVER@@QEAAPEAXI@Z.c)
 */

NTSTATUS ndisMpHookNmrInitializeClient(void)
{
  _QWORD *PoolWithTag; // rax
  __int64 v1; // rdi
  MINIPORT_HOOK_DRIVER *v2; // rbx
  MINIPORT_HOOK_DRIVER *v3; // rsi
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x108uLL, 0x6448704Du);
  if ( !PoolWithTag )
  {
    g_MiniportHookDrivers = 0LL;
    return -1073741670;
  }
  v1 = 2LL;
  v2 = (MINIPORT_HOOK_DRIVER *)(PoolWithTag + 1);
  *PoolWithTag = 2LL;
  v3 = (MINIPORT_HOOK_DRIVER *)(PoolWithTag + 1);
  do
  {
    MINIPORT_HOOK_DRIVER::MINIPORT_HOOK_DRIVER(v3);
    v3 = (MINIPORT_HOOK_DRIVER *)((char *)v3 + 128);
    --v1;
  }
  while ( v1 );
  g_MiniportHookDrivers = v2;
  if ( !v2 )
    return -1073741670;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_MiniportHookDriversLock);
  *(_BYTE *)v2 = 1;
  MINIPORT_HOOK_DRIVER::FillDefaultHandlers(v2);
  result = NmrRegisterClient(&ClientCharacteristics, 0LL, &ndisMpHookNmrClientHandle);
  v5 = result;
  if ( result < 0 )
  {
    if ( g_MiniportHookDrivers )
      MINIPORT_HOOK_DRIVER::`vector deleting destructor'(g_MiniportHookDrivers);
    g_MiniportHookDrivers = 0LL;
    return v5;
  }
  return result;
}
