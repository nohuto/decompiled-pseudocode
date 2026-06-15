/*
 * XREFs of ?ConnectCallbackThunk@ServiceModuleBase@Internal@Windows@@SAJPEAUtagComCallData@@@Z @ 0x18005DF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ServiceModuleBase::ConnectCallbackThunk(struct tagComCallData *a1)
{
  return (**(__int64 (__fastcall ***)(struct tagComCallData *))&a1->dwDispid)(a1);
}
