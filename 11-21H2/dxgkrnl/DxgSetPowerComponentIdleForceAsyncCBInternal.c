/*
 * XREFs of DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C0017080
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C00170F0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DxgSetPowerComponentIdleForceAsyncCBInternal(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  DXGADAPTER *v4; // rbx

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
    {
      v4 = *(DXGADAPTER **)(v3 + 3896);
      goto LABEL_6;
    }
    WdLogSingleEntry1(2LL, a1);
  }
  else
  {
    WdLogSingleEntry0(2LL);
  }
  v4 = 0LL;
LABEL_6:
  if ( a2 >= *((_DWORD *)v4 + 760) )
    WdLogSingleEntry5(0LL, 275LL, 23LL, v4, 0LL, 0LL);
  DXGADAPTER::SetPowerComponentIdleCBWorker(v4, a2, 2u);
}
