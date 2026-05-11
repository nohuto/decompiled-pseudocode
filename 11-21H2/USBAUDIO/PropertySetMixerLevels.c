/*
 * XREFs of PropertySetMixerLevels @ 0x1C0030DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002806C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C0032438 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetMixerLevels(PIRP Irp, __int64 a2)
{
  unsigned int v4; // edi
  PKSFILTER FilterFromIrp; // rcx
  ULONG Length; // edx
  __int64 Context; // r13
  const GUID *Type; // rbp
  unsigned int v9; // ecx

  v4 = -1073741811;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( !FilterFromIrp )
    return v4;
  Context = (__int64)FilterFromIrp->Context;
  Type = FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24) + 5].Type;
  v9 = 16 * *(_DWORD *)&Type->Data4[4] * *(_DWORD *)Type->Data4;
  if ( *(_DWORD *)(*(_QWORD *)(Context + 16) + 536LL) == 1 )
  {
    Irp->IoStatus.Information = v9;
    if ( Length != v9 )
      return (unsigned int)-1073741789;
    return v4;
  }
  if ( DeviceRequestPowerUp(Context) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
