/*
 * XREFs of ?_ChangeSingleItem@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002A8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C002A0A8 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_ChangeSingleItem(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rbx
  char v8; // al
  char *v9; // r9
  int v10; // eax
  __int64 LowPart; // r8

  Parameters = Irp->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v8 = ((__int64 (__fastcall *)(FxWmiInstance *, _IRP *, FxWmiProvider *))Instance->IsSetItemSupported)(
         Instance,
         Irp,
         Provider);
  v9 = 0LL;
  if ( v8 )
  {
    LowPart = Parameters[1].DefaultTimeout.LowPart;
    if ( (_DWORD)LowPart )
      v9 = (char *)Parameters + Parameters[1].OutboundQuota;
    v10 = Instance->SetItem(Instance, Parameters[1].InboundQuota, LowPart, v9);
    if ( v10 == 259 )
      v10 = -1073741823;
  }
  else
  {
    v10 = -1073741114;
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v10, 0);
}
