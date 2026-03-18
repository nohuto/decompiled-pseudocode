/*
 * XREFs of MmVirtualAccessFault @ 0x140881C00
 * Callers:
 *     PspIumGetPhysicalPage @ 0x1408824D0 (PspIumGetPhysicalPage.c)
 *     VmpAccessFaultBatchResolve @ 0x1409D9B98 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiInitializeFaultVaListCore @ 0x14045BA26 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MmVirtualAccessFault(signed __int64 *a1, __int64 a2, char a3)
{
  int v6; // r8d
  ULONG_PTR v7; // r10
  ULONG_PTR v8; // r11
  int v9; // edx
  __int64 result; // rax
  _QWORD v11[12]; // [rsp+20h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  MiInitializeFaultVaListCore((__int64)v11, (__int64)a1, 1LL, 5);
  v11[6] = 0LL;
  v11[5] = a2;
  v9 = v6 & (v7 >> 1) | (v7 >> 3) & 2;
  LODWORD(v11[7]) = v9;
  if ( (a3 & 8) != 0 )
  {
    v9 |= 4u;
    LODWORD(v11[7]) = v9;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v9 |= 8u;
    LODWORD(v11[7]) = v9;
  }
  if ( (a3 & 0x20) != 0 )
  {
    v9 |= 0x10u;
    LODWORD(v11[7]) = v9;
  }
  if ( (a3 & 0x40) != 0 )
    LODWORD(v11[7]) = v9 | 0x20;
  result = MmAccessFault(v7, *a1, v6, v8);
  if ( (int)result >= 0 )
  {
    if ( (v11[7] & 0x40) != 0 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    return 0LL;
  }
  return result;
}
