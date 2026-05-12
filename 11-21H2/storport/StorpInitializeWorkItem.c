/*
 * XREFs of StorpInitializeWorkItem @ 0x1C00463D4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeWorkItem(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _DWORD *Adapter; // rax
  _DWORD *v7; // rdi
  _QWORD *Pool; // r14
  PIO_WORKITEM WorkItem; // rax

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Bu,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
        a1,
        a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    Adapter = RaidpPortGetAdapter(a1);
    v7 = Adapter;
    if ( Adapter )
    {
      Pool = (_QWORD *)RaidAllocatePool(64LL, 32LL, 1230463314LL, *((_QWORD *)Adapter + 1));
      if ( Pool )
      {
        WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v7 + 1));
        *Pool = WorkItem;
        if ( WorkItem )
        {
          _InterlockedIncrement(v7 + 1190);
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
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x3Cu,
      (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
  }
  return 3238002696LL;
}
