/*
 * XREFs of DpiDxgkDdiRemoveDevice @ 0x1C03970B8
 * Callers:
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0389720 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiRemoveDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+20h] [rbp-18h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v13 = 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventEnterDdiRemoveDevice, a3, a2, v13);
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a2);
  v9 = v5;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v12) = v5;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventExitDdiRemoveDevice, v8, a2, v12);
  }
  v10 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v10 + 24) = a1;
  *(_QWORD *)(v10 + 32) = a2;
  *(_QWORD *)(v10 + 40) = v9;
  *(_OWORD *)(v10 + 48) = 0LL;
  return (unsigned int)v9;
}
