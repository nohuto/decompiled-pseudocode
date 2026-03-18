/*
 * XREFs of DpiDxgkDdiQueryConnectionChange @ 0x1C002557C
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DpiFdoHandleQueryConnectionChange @ 0x1C0060660 (DpiFdoHandleQueryConnectionChange.c)
 *     McTemplateK0pxqqqqq_EtwWriteTransfer @ 0x1C00668EC (McTemplateK0pxqqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiQueryConnectionChange(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rdi
  unsigned int v12; // ecx
  _QWORD *v13; // rax
  unsigned int v15; // eax

  if ( (*(_BYTE *)(a1 + 3905) & 8) == 0 )
    return DpiFdoHandleQueryConnectionChange(a1, a4);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pxqqqqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventEnterDdiQueryConnectionChange,
      a3,
      a3,
      0,
      0,
      0,
      -2,
      0,
      0);
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1136))(a3, a4);
  v11 = v7;
  if ( bTracingEnabled )
  {
    if ( v7 < 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pxqqqqq_EtwWriteTransfer(
          v9,
          (unsigned int)&EventEnterDdiQueryConnectionChange,
          v10,
          a3,
          0,
          0,
          0,
          -2,
          0,
          v7);
    }
    else
    {
      v12 = a4[2];
      v8 = v12 & 0xFFFFFF;
      v9 = HIBYTE(v12) & 0xF;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pxqqqqq_EtwWriteTransfer(
          v9,
          (unsigned int)&EventExitDdiQueryConnectionChange,
          a4[4],
          a3,
          *(_QWORD *)a4,
          v8,
          v9,
          a4[3],
          a4[4],
          v7);
    }
  }
  if ( g_bDbgForceUsb4MonitorSupport )
  {
    v9 = a4[2];
    if ( (a4[2] & 0xF000000) == 0xA000000 )
    {
      v9 &= 0xFFFFFFu;
      if ( (_DWORD)v9 == g_DbgUsb4MonitorTargetId )
      {
        a4[6] = g_DbgUsb4MonitorDpcdDP_IN_Adapter_Number;
        v15 = g_DbgUsb4MonitorDpcdUSB4_Driver_ID;
        a4[4] |= 1u;
        a4[7] = v15;
      }
    }
  }
  if ( g_bDbgTreatUsb4MonitorAsNormal )
    a4[4] &= ~1u;
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v13[3] = *a4;
  v13[4] = a4[2] & 0xFFFFFF;
  v13[5] = HIBYTE(a4[2]) & 0xF;
  v13[6] = a4[4];
  v13[7] = v11;
  return (unsigned int)v11;
}
