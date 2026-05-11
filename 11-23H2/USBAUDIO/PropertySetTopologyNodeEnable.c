/*
 * XREFs of PropertySetTopologyNodeEnable @ 0x1C00302D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002A38C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C0031588 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetTopologyNodeEnable(PIRP Irp, __int64 a2, _BYTE *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // r8
  int v8; // r10d
  __int64 Context; // rcx
  __int64 v10; // rbx

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v8;
  Context = (__int64)FilterFromIrp->Context;
  v10 = (__int64)&FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24)];
  if ( *(_DWORD *)(*(_QWORD *)(Context + 16) + 536LL) == 1 )
  {
    Irp->IoStatus.Information = 1LL;
    if ( *(_BYTE *)(v10 + 72) )
    {
      if ( *a3 == *(_BYTE *)(v10 + 73) )
      {
        return 0;
      }
      else
      {
        LOBYTE(v7) = 1;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(v10 + 144))(Context, v10, v7, a3);
        if ( v8 >= 0 )
          *(_BYTE *)(v10 + 73) = *a3;
      }
    }
    return (unsigned int)v8;
  }
  if ( DeviceRequestPowerUp(Context) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
