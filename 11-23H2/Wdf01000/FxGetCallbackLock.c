/*
 * XREFs of FxGetCallbackLock @ 0x1C0042FE0
 * Callers:
 *     imp_WdfObjectAcquireLock @ 0x1C0043050 (imp_WdfObjectAcquireLock.c)
 *     imp_WdfObjectReleaseLock @ 0x1C0043270 (imp_WdfObjectReleaseLock.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
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
  if ( Object->QueryInterface(Object, &params) >= 0 )
    return ihcb->GetCallbackLockPtr(ihcb, 0LL);
  else
    return 0LL;
}
