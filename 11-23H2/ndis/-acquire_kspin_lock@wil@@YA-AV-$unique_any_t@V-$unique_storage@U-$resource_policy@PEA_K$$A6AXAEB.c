/*
 * XREFs of ?acquire_kspin_lock@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_K$$A6AXAEBUkspin_lock_saved_irql@details@wil@@@Z$1?Release@123@SAX0@ZU?$integral_constant@_K$01@wistd@@U123@PEA_K$0A@$$T@details@wil@@@details@wil@@@1@PEA_K@Z @ 0x1C00377F4
 * Callers:
 *     ndisIfUpdateExternalInterface @ 0x1C0037840 (ndisIfUpdateExternalInterface.c)
 *     NdisIfUpdateInterface @ 0x1C0037C70 (NdisIfUpdateInterface.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall wil::acquire_kspin_lock(_OWORD *a1)
{
  _OWORD *result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h]

  BYTE8(v3) = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  result = a1;
  *(_QWORD *)&v3 = &ndisIfListLock;
  *a1 = v3;
  return result;
}
