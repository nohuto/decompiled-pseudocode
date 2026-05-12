/*
 * XREFs of StorpInitializeWorkItem @ 0x1C0014238
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeWorkItem(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _DWORD *Adapter; // rax
  _DWORD *v6; // rdi
  _QWORD *Pool; // r14
  PIO_WORKITEM WorkItem; // rax

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 59LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids, a1, a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    Adapter = RaidpPortGetAdapter(a1);
    v6 = Adapter;
    if ( Adapter )
    {
      Pool = (_QWORD *)RaidAllocatePool(64LL, 32LL, 1230463314LL, *((_QWORD *)Adapter + 1));
      if ( Pool )
      {
        WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v6 + 1));
        *Pool = WorkItem;
        if ( WorkItem )
        {
          _InterlockedIncrement(v6 + 1206);
          *a2 = Pool;
          return v2;
        }
        ExFreePoolWithTag(Pool, 0x49576152u);
      }
      return (unsigned int)-1056964605;
    }
    return 3238002694LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 60LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
  }
  return 3238002696LL;
}
