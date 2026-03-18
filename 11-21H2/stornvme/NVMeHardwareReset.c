/*
 * XREFs of NVMeHardwareReset @ 0x1C00197E8
 * Callers:
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0021E00 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     IsNVMeResetComplete @ 0x1C001854C (IsNVMeResetComplete.c)
 */

__int64 __fastcall NVMeHardwareReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8

  v5 = StorPortExtendedFunction(102LL, a1, 0LL, a4);
  if ( !IsNVMeResetComplete(a1, v6, v7) )
  {
    v5 = -1056964607;
    if ( *(_BYTE *)(a1 + 22) )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    goto LABEL_5;
  }
  if ( v5 )
LABEL_5:
    *(_DWORD *)(a1 + 36) = 25;
  return v5;
}
