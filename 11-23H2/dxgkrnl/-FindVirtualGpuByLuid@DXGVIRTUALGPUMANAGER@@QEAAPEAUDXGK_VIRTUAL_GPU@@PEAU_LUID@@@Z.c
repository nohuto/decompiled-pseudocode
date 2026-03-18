/*
 * XREFs of ?FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z @ 0x1C0368054
 * Callers:
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C0368018 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGK_VIRTUAL_GPU *__fastcall DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(
        struct _KTHREAD **this,
        struct _LUID *a2)
{
  DXGVIRTUALGPUMANAGER *v4; // rdx
  DXGVIRTUALGPUMANAGER *v5; // rcx
  char *v6; // rbx
  _BYTE v8[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, this + 9, 0);
  DXGPUSHLOCK::AcquireShared(v9);
  v4 = (DXGVIRTUALGPUMANAGER *)(this + 13);
  v10 = 1;
  v5 = this[13];
  if ( v5 == (DXGVIRTUALGPUMANAGER *)(this + 13) )
  {
LABEL_5:
    WdLogSingleEntry2(2LL, a2->HighPart, a2->LowPart);
    v6 = 0LL;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"A virtual GPU with given LUID is not found: 0x%I64x 0x%I64x",
      a2->HighPart,
      a2->LowPart,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    while ( 1 )
    {
      v6 = (char *)v5 - 120;
      if ( a2->LowPart == *((_DWORD *)v5 - 23) && a2->HighPart == *((_DWORD *)v6 + 8) )
        break;
      v5 = *(DXGVIRTUALGPUMANAGER **)v5;
      if ( v5 == v4 )
        goto LABEL_5;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  return (struct DXGK_VIRTUAL_GPU *)v6;
}
