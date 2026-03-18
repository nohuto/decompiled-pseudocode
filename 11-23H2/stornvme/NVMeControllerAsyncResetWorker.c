/*
 * XREFs of NVMeControllerAsyncResetWorker @ 0x1C000CD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00049B0 (_guard_dispatch_icall_nop.c)
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 */

__int64 __fastcall NVMeControllerAsyncResetWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  void (__fastcall *v7)(__int64, __int64, _QWORD); // rax
  __int64 result; // rax

  LOBYTE(v6) = NVMeControllerReset(a1);
  v7 = *(void (__fastcall **)(__int64, __int64, _QWORD))(a2 + 8);
  if ( v7 )
    v7(a1, v6, *(_QWORD *)(a2 + 16));
  result = StorPortExtendedFunction(1LL, a1, a2);
  if ( a3 )
    return StorPortExtendedFunction(31LL, a1, a3);
  return result;
}
