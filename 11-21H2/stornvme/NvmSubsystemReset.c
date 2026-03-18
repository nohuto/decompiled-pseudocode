/*
 * XREFs of NvmSubsystemReset @ 0x1C001A000
 * Callers:
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0021E00 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     IsNVMeResetComplete @ 0x1C001854C (IsNVMeResetComplete.c)
 */

bool __fastcall NvmSubsystemReset(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 32LL) = 1314278757;
  _InterlockedOr(v5, 0);
  StorPortStallExecution(5000LL);
  return IsNVMeResetComplete(a1, v2, v3);
}
