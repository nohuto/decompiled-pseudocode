/*
 * XREFs of RtlRestoreContext @ 0x140429CA0
 * Callers:
 *     sub_140294C30 @ 0x140294C30 (sub_140294C30.c)
 * Callees:
 *     sub_140236890 @ 0x140236890 (sub_140236890.c)
 *     sub_14041BFC0 @ 0x14041BFC0 (sub_14041BFC0.c)
 *     sub_140569380 @ 0x140569380 (sub_140569380.c)
 */

void __cdecl RtlRestoreContext(PCONTEXT ContextRecord, _EXCEPTION_RECORD *ExceptionRecord)
{
  ULONG_PTR v2; // rax
  PCONTEXT v5; // rcx
  _QWORD v7[154]; // [rsp-30h] [rbp-520h] BYREF
  _DWORD v8[2]; // [rsp+4A0h] [rbp-50h] BYREF
  DWORD64 P2Home; // [rsp+4A8h] [rbp-48h]
  unsigned int v10; // [rsp+4B8h] [rbp-38h]
  int P4Home_high; // [rsp+4BCh] [rbp-34h]
  _QWORD _4C0[7]; // [rsp+4C0h] [rbp-30h] BYREF
  WORD SegCs; // [rsp+4F8h] [rbp+8h]
  DWORD EFlags; // [rsp+500h] [rbp+10h]
  DWORD64 Rsp; // [rsp+508h] [rbp+18h]
  WORD SegSs; // [rsp+510h] [rbp+20h]
  int v17; // [rsp+560h] [rbp+70h]
  int v18; // [rsp+568h] [rbp+78h]
  int v19; // [rsp+570h] [rbp+80h]
  int v20; // [rsp+578h] [rbp+88h]
  int v21; // [rsp+580h] [rbp+90h]
  int v22; // [rsp+588h] [rbp+98h]
  int v23; // [rsp+590h] [rbp+A0h]
  int v24; // [rsp+598h] [rbp+A8h]
  int v25; // [rsp+5A0h] [rbp+B0h]
  int v26; // [rsp+5A8h] [rbp+B8h]
  int v27; // [rsp+5B0h] [rbp+C0h]
  int v28; // [rsp+5B8h] [rbp+C8h]
  int v29; // [rsp+5C0h] [rbp+D0h]
  int v30; // [rsp+5C8h] [rbp+D8h]
  int v31; // [rsp+5D0h] [rbp+E0h]
  int v32; // [rsp+5D8h] [rbp+E8h]
  int v33; // [rsp+5E0h] [rbp+F0h]
  int v34; // [rsp+5E8h] [rbp+F8h]
  int v35; // [rsp+5F0h] [rbp+100h]
  int v36; // [rsp+5F8h] [rbp+108h]
  int v37; // [rsp+600h] [rbp+110h]
  int v38; // [rsp+608h] [rbp+118h]
  int v39; // [rsp+610h] [rbp+120h]
  int v40; // [rsp+618h] [rbp+128h]
  int v41; // [rsp+620h] [rbp+130h]
  int v42; // [rsp+628h] [rbp+138h]
  __int64 v43; // [rsp+630h] [rbp+140h]

  if ( !ExceptionRecord )
  {
LABEL_6:
    if ( (ContextRecord->ContextFlags & 0xFFFFFF3F) == 0x10000F )
    {
      _mm_setcsr(ContextRecord->MxCsr);
      sub_140236890(ContextRecord->Rip, ContextRecord->Rsp);
      v5 = ContextRecord;
      if ( (byte_140E01841 & 1) != 0 )
      {
        __asm { rdsspq  rdx }
        sub_140569380(ContextRecord, _RDX, ExceptionRecord);
        v5 = ContextRecord;
      }
      SegSs = v5->SegSs;
      Rsp = v5->Rsp;
      EFlags = v5->EFlags;
      SegCs = v5->SegCs;
      _4C0[6] = v5->Rip;
      _disable();
      __asm { iretq }
    }
    sub_14041BFC0((__int64)ContextRecord, 0LL);
    return;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483607 || !ExceptionRecord->NumberParameters )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      v2 = ExceptionRecord->ExceptionInformation[0];
      ContextRecord->Rbx = *(_QWORD *)(v2 + 8);
      ContextRecord->Rsp = *(_QWORD *)(v2 + 16);
      ContextRecord->Rbp = *(_QWORD *)(v2 + 24);
      ContextRecord->Rsi = *(_QWORD *)(v2 + 32);
      ContextRecord->Rdi = *(_QWORD *)(v2 + 40);
      ContextRecord->R12 = *(_QWORD *)(v2 + 48);
      ContextRecord->R13 = *(_QWORD *)(v2 + 56);
      ContextRecord->R14 = *(_QWORD *)(v2 + 64);
      ContextRecord->R15 = *(_QWORD *)(v2 + 72);
      ContextRecord->Rip = *(_QWORD *)(v2 + 80);
      ContextRecord->MxCsr = *(_DWORD *)(v2 + 88);
      ContextRecord->Xmm6 = *(M128A *)(v2 + 96);
      ContextRecord->Xmm7 = *(M128A *)(v2 + 112);
      ContextRecord->Xmm8 = *(M128A *)(v2 + 128);
      ContextRecord->Xmm9 = *(M128A *)(v2 + 144);
      ContextRecord->Xmm10 = *(M128A *)(v2 + 160);
      ContextRecord->Xmm11 = *(M128A *)(v2 + 176);
      ContextRecord->Xmm12 = *(M128A *)(v2 + 192);
      ContextRecord->Xmm13 = *(M128A *)(v2 + 208);
      ContextRecord->Xmm14 = *(M128A *)(v2 + 224);
      ContextRecord->Xmm15 = *(M128A *)(v2 + 240);
    }
    goto LABEL_6;
  }
  qmemcpy(v7, ContextRecord, sizeof(v7));
  if ( (v7[6] & 0x100080) == 0x100080 )
  {
    v10 = (_DWORD)ContextRecord + 1232 - (unsigned int)v8 + LODWORD(ContextRecord[1].P4Home);
    P4Home_high = HIDWORD(ContextRecord[1].P4Home);
    P2Home = ContextRecord[1].P2Home;
    v8[0] = -1232;
    v8[1] = (_DWORD)ContextRecord + 1232 - (unsigned int)v8 + HIDWORD(ContextRecord[1].P1Home);
  }
  _4C0[3] = v7[19];
  _4C0[0] = v7[31];
  sub_140429FE0(
    (_DWORD)ExceptionRecord,
    (unsigned int)sub_140429FE0,
    (unsigned int)_4C0,
    (_DWORD)ExceptionRecord,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
}
