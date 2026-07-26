/*
 * XREFs of ?PollDriver@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C0874
 * Callers:
 *     ?EvtPollDriver@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x1C00C0760 (-EvtPollDriver@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

void __fastcall NdisPoll::PollDriver(NdisPoll *this, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // ecx
  int v14; // ecx
  void (__fastcall *v15)(_QWORD); // rax
  _OWORD v16[10]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v16, 0, 0x98uLL);
  v4 = v16[1];
  *((_OWORD *)this + 8) = v16[0];
  v5 = v16[2];
  *((_OWORD *)this + 9) = v4;
  v6 = v16[3];
  *((_OWORD *)this + 10) = v5;
  v7 = v16[4];
  *((_OWORD *)this + 11) = v6;
  v8 = v16[5];
  *((_OWORD *)this + 12) = v7;
  v9 = v16[6];
  *((_OWORD *)this + 13) = v8;
  v10 = v16[8];
  *((_OWORD *)this + 14) = v9;
  v11 = *(_QWORD *)&v16[9];
  *((_OWORD *)this + 15) = v16[7];
  *((_OWORD *)this + 16) = v10;
  *((_QWORD *)this + 34) = v11;
  v12 = (_DWORD *)*((_QWORD *)this + 74);
  *((_BYTE *)this + 128) = 0x80;
  *((_BYTE *)this + 129) = 1;
  *((_WORD *)this + 65) = 152;
  if ( *(_BYTE *)a2 == 2 )
    v13 = v12[12];
  else
    v13 = v12[11];
  *((_DWORD *)this + 52) = v13;
  if ( *(_BYTE *)a2 == 2 )
    v14 = v12[10];
  else
    v14 = v12[9];
  v15 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 73);
  *((_DWORD *)this + 34) = v14;
  v15(*((_QWORD *)this + 71));
}
