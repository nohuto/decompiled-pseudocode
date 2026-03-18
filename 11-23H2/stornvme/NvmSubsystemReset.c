/*
 * XREFs of NvmSubsystemReset @ 0x1C0010D3C
 * Callers:
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C9C0 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     IsNVMeResetComplete @ 0x1C000C1E0 (IsNVMeResetComplete.c)
 */

bool __fastcall NvmSubsystemReset(__int64 a1)
{
  bool result; // al
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 32LL) = 1314278757;
  _InterlockedOr(v3, 0);
  StorPortStallExecution(5000LL);
  result = IsNVMeResetComplete(a1);
  if ( result )
    ++*(_DWORD *)(a1 + 4432);
  else
    ++*(_DWORD *)(a1 + 4436);
  return result;
}
