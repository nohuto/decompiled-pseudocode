/*
 * XREFs of RtlCaptureContext @ 0x1404299A0
 * Callers:
 *     sub_14029AF90 @ 0x14029AF90 (sub_14029AF90.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeSaveStateForHibernate @ 0x140420460 (KeSaveStateForHibernate.c)
 *     sub_14042B7A0 @ 0x14042B7A0 (sub_14042B7A0.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     sub_14092B55C @ 0x14092B55C (sub_14092B55C.c)
 *     sub_14092BC54 @ 0x14092BC54 (sub_14092BC54.c)
 *     sub_140A36E2C @ 0x140A36E2C (sub_140A36E2C.c)
 *     sub_140A66050 @ 0x140A66050 (sub_140A66050.c)
 *     sub_140A66300 @ 0x140A66300 (sub_140A66300.c)
 *     sub_140A81B20 @ 0x140A81B20 (sub_140A81B20.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlCaptureContext(PCONTEXT ContextRecord)
{
  DWORD64 v1; // rax
  DWORD64 v2; // rdx
  DWORD64 v3; // rbx
  DWORD64 v4; // rbp
  DWORD64 v5; // rdi
  DWORD64 v6; // rsi
  DWORD64 v7; // r8
  DWORD64 v8; // r9
  DWORD64 v9; // r10
  DWORD64 v10; // r11
  DWORD64 v11; // r12
  DWORD64 v12; // r13
  DWORD64 v13; // r14
  DWORD64 v14; // r15
  M128A v15; // xmm0
  M128A v16; // xmm1
  M128A v17; // xmm2
  M128A v18; // xmm3
  M128A v19; // xmm4
  M128A v20; // xmm5
  M128A v21; // xmm6
  M128A v22; // xmm7
  M128A v23; // xmm8
  M128A v24; // xmm9
  M128A v25; // xmm10
  M128A v26; // xmm11
  M128A v27; // xmm12
  M128A v28; // xmm13
  M128A v29; // xmm14
  M128A v30; // xmm15
  DWORD v31; // [rsp+0h] [rbp-8h]
  DWORD64 retaddr; // [rsp+8h] [rbp+0h]
  char v33; // [rsp+10h] [rbp+8h] BYREF

  ContextRecord->Rax = v1;
  ContextRecord->Rcx = (DWORD64)ContextRecord;
  ContextRecord->Rdx = v2;
  ContextRecord->R8 = v7;
  ContextRecord->R9 = v8;
  ContextRecord->R10 = v9;
  ContextRecord->R11 = v10;
  ContextRecord->FltSave.XmmRegisters[0] = v15;
  ContextRecord->FltSave.XmmRegisters[1] = v16;
  ContextRecord->FltSave.XmmRegisters[2] = v17;
  ContextRecord->FltSave.XmmRegisters[3] = v18;
  ContextRecord->FltSave.XmmRegisters[4] = v19;
  ContextRecord->FltSave.XmmRegisters[5] = v20;
  ContextRecord->SegCs = __CS__;
  ContextRecord->SegDs = __DS__;
  ContextRecord->SegEs = __ES__;
  ContextRecord->SegSs = __SS__;
  ContextRecord->SegFs = __FS__;
  ContextRecord->SegGs = __GS__;
  ContextRecord->Rbx = v3;
  ContextRecord->Rbp = v4;
  ContextRecord->Rsi = v6;
  ContextRecord->Rdi = v5;
  ContextRecord->R12 = v11;
  ContextRecord->R13 = v12;
  ContextRecord->R14 = v13;
  ContextRecord->R15 = v14;
  *(_DWORD *)((char *)&ContextRecord->Header[0].Low + 2) = 0;
  ContextRecord->FltSave.XmmRegisters[6] = v21;
  ContextRecord->FltSave.XmmRegisters[7] = v22;
  ContextRecord->FltSave.XmmRegisters[8] = v23;
  ContextRecord->FltSave.XmmRegisters[9] = v24;
  ContextRecord->FltSave.XmmRegisters[10] = v25;
  ContextRecord->FltSave.XmmRegisters[11] = v26;
  ContextRecord->FltSave.XmmRegisters[12] = v27;
  ContextRecord->FltSave.XmmRegisters[13] = v28;
  ContextRecord->FltSave.XmmRegisters[14] = v29;
  ContextRecord->FltSave.XmmRegisters[15] = v30;
  ContextRecord->FltSave.MxCsr = _mm_getcsr();
  ContextRecord->MxCsr = _mm_getcsr();
  ContextRecord->Rsp = (DWORD64)&v33;
  ContextRecord->Rip = retaddr;
  ContextRecord->EFlags = v31;
  ContextRecord->ContextFlags = 1048591;
}
