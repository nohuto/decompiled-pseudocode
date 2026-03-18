/*
 * XREFs of DpiGdiHandleAsyncDisplayCallout @ 0x1C0228880
 * Callers:
 *     <none>
 * Callees:
 *     DpiGdiSyncDisplayCallout @ 0x1C02288D0 (DpiGdiSyncDisplayCallout.c)
 */

void __fastcall DpiGdiHandleAsyncDisplayCallout(PVOID IoObject, _BYTE *Context, PIO_WORKITEM IoWorkItem)
{
  _QWORD *v3; // rdi

  v3 = Context;
  LOBYTE(Context) = Context[8];
  DpiGdiSyncDisplayCallout(*v3, Context);
  IoFreeWorkItem(IoWorkItem);
  ExFreePoolWithTag(v3, 0);
}
