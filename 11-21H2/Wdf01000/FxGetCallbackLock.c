/*
 * XREFs of FxGetCallbackLock @ 0x1C0010DA8
 * Callers:
 *     imp_WdfObjectAcquireLock @ 0x1C0010CC0 (imp_WdfObjectAcquireLock.c)
 *     imp_WdfObjectReleaseLock @ 0x1C0010D40 (imp_WdfObjectReleaseLock.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

FxCallbackLock *__fastcall FxGetCallbackLock(FxObject *Object)
{
  FxQueryInterfaceParams params; // [rsp+20h] [rbp-18h] BYREF
  IFxHasCallbacks *ihcb; // [rsp+40h] [rbp+8h] BYREF

  params.Object = (void **)&ihcb;
  params.Type = 5379;
  ihcb = 0LL;
  *(_DWORD *)&params.Offset = 0;
  *(&params.Offset + 2) = 0;
  if ( Object->QueryInterface(Object, &params) < 0 )
    return 0LL;
  else
    return ihcb->GetCallbackLockPtr(ihcb, 0LL);
}
