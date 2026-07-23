/*
 * XREFs of KiTraceSetTimer @ 0x140462E80
 * Callers:
 *     KiCommitThreadWait @ 0x140241FF0 (KiCommitThreadWait.c)
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x140253650 (KeSetTimerEx.c)
 *     KiResumeThread @ 0x14030AF88 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x14039A7C4 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall KiTraceSetTimer(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ecx
  __int64 Prcb; // rax
  __int16 v8; // cx
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 v11; // [rsp+40h] [rbp-30h]
  char v12; // [rsp+42h] [rbp-2Eh]
  char v13; // [rsp+43h] [rbp-2Dh]
  int v14; // [rsp+44h] [rbp-2Ch]
  char v15; // [rsp+48h] [rbp-28h]
  char v16; // [rsp+49h] [rbp-27h]
  __int16 Flink; // [rsp+4Ah] [rbp-26h]
  int v18; // [rsp+4Ch] [rbp-24h]
  _QWORD *v19; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+5Ch] [rbp-14h]

  v18 = 0;
  v4 = *(unsigned __int16 *)(a1 + 56);
  v13 = 0;
  v10[0] = *(_QWORD *)(a1 + 24);
  v14 = *(_DWORD *)(a1 + 60);
  v15 = *(_BYTE *)(a1 + 1) >> 2;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  Prcb = KeGetPrcb(v4);
  v10[1] = a1;
  v11 = *(unsigned __int8 *)(Prcb + 208);
  v12 = *(_BYTE *)(Prcb + 209);
  v13 = 0;
  v16 = 0;
  Flink = (__int16)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v13 = v15 != 0;
  if ( a2 )
    v13 = (v15 != 0) | 2;
  if ( *(_DWORD *)(a1 + 60) )
  {
    v8 = 3922;
  }
  else
  {
    v8 = 3924;
    if ( !a3 )
      v8 = 3923;
  }
  v21 = 0;
  v19 = v10;
  v20 = 32;
  return EtwTraceKernelEvent((int)&v19, 1, 0x40020000u, v8, a3 != 0 ? 1538 : 6298370);
}
