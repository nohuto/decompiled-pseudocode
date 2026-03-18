/*
 * XREFs of DpiDxgkDdiDisplayDetectControl @ 0x1C01F3488
 * Callers:
 *     DpiFdoInvalidateChildRelations @ 0x1C01F3230 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C038A5DC (DpiFdoInvalidateChildStatus.c)
 *     DpiFdoStopAdapter @ 0x1C038B430 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0024A9C (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayDetectControl(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  char v9; // di
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  _QWORD *v14; // rax
  unsigned __int64 v15; // rcx
  char v16; // r8
  int ConnectionChanges; // eax
  __int64 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 3905) & 8) == 0 )
    return DpiFdoHandleDisplayDetectControl(a1, a4);
  v9 = 1;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(
      HIBYTE(*a4) & 0xF,
      &EventEnterDdiDisplayDetectControl,
      *a4 & 0xFFFFFF,
      a3,
      HIBYTE(*a4) & 0xF,
      *a4 & 0xFFFFFF,
      (*a4 >> 28) & 1,
      0);
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1128))(a3, a4);
  v13 = v10;
  if ( bTracingEnabled )
  {
    v11 = *a4 >> 28;
    v12 = HIBYTE(*a4) & 0xF;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v21) = v10;
      LODWORD(v20) = (*a4 & 0x10000000) != 0;
      LODWORD(v19) = *a4 & 0xFFFFFF;
      LODWORD(v18) = HIBYTE(*a4) & 0xF;
      McTemplateK0pqtqq_EtwWriteTransfer(
        v12,
        &EventExitDdiDisplayDetectControl,
        (unsigned int)v19,
        a3,
        v18,
        v19,
        v20,
        v21);
    }
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
  v14[3] = a2;
  v14[4] = HIBYTE(*a4) & 0xF;
  v14[5] = *a4 & 0xFFFFFF;
  v15 = ((unsigned __int64)*a4 >> 28) & 1;
  v14[7] = v13;
  v14[6] = v15;
  if ( *((_BYTE *)a4 + 18) )
  {
    v16 = *((_BYTE *)a4 + 16);
    if ( (*a4 & 0xF000000) != 0x2000000 || !v16 )
      v9 = 0;
    ConnectionChanges = DxgkQueryConnectionChanges(
                          *(_QWORD *)(a1 + 24),
                          v9,
                          v16,
                          *((_BYTE *)a4 + 17),
                          0,
                          *((_BYTE *)a4 + 19));
    if ( ConnectionChanges < 0 )
      WdLogSingleEntry1(2LL, ConnectionChanges);
  }
  return (unsigned int)v13;
}
