/*
 * XREFs of ndisPeriodicReceivesTimer @ 0x1C00A4F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisPeriodicReceivesTimer(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  _QWORD *v4; // rbx
  char *v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  LARGE_INTEGER v8; // rdx
  __int64 *v9; // rax
  __int16 v10; // [rsp+28h] [rbp-19h] BYREF
  __int128 v11; // [rsp+2Ah] [rbp-17h]
  _BYTE v12[22]; // [rsp+3Ah] [rbp-7h]
  __int16 v13; // [rsp+50h] [rbp+Fh]
  _WORD v14[3]; // [rsp+52h] [rbp+11h]
  __int16 WnodeEventItem; // [rsp+58h] [rbp+17h] BYREF
  __int128 v16; // [rsp+5Ah] [rbp+19h]
  __m256i v17; // [rsp+6Ah] [rbp+29h]
  int v18; // [rsp+8Ah] [rbp+49h]
  __int16 v19; // [rsp+8Eh] [rbp+4Dh]

  v4 = 0LL;
  v5 = (char *)qword_1C00EC280 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 2);
  v6 = *(__int64 **)v5;
  if ( *(char **)v5 == v5 )
    goto LABEL_8;
  v4 = *(_QWORD **)v5;
  if ( (char *)v6[1] != v5 || (v7 = *v6, *(_QWORD **)(v7 + 8) != v4) )
LABEL_11:
    __fastfail(3u);
  *(_QWORD *)v5 = v7;
  *(_QWORD *)(v7 + 8) = v5;
  v4[1] = 0LL;
  *v4 = 0LL;
  --*((_DWORD *)v5 + 6);
  if ( *(char **)v5 == v5 )
  {
LABEL_8:
    *((_DWORD *)qword_1C00EC278 + KeGetPcr()->Prcb.Number) = 0;
  }
  else
  {
    v8 = DueTime;
    if ( !DueTime.QuadPart )
      v8.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C00EC270 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v8,
      (PKDPC)qword_1C00EC270 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
  if ( v4 == (_QWORD *)((char *)ndisPerCpuPoisonPills + 32 * KeGetPcr()->Prcb.Number) )
  {
    v9 = *(__int64 **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
      goto LABEL_11;
    *v4 = v9;
    v4[1] = v5;
    v9[1] = (__int64)v4;
    *(_QWORD *)v5 = v4;
    ++*((_DWORD *)v5 + 6);
    v4 = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 2);
  if ( v4 )
  {
    if ( (_BYTE)word_1C00EE5EC )
    {
      v18 = 0;
      *(_OWORD *)&v17.m256i_u64[2] = 0LL;
      v19 = 0;
      v16 = 0LL;
      WnodeEventItem = 56;
      v17.m256i_i64[0] = 0LL;
      *(_QWORD *)((char *)&v16 + 6) = qword_1C00EE5E0;
      *(__int32 *)((char *)&v17.m256i_i32[6] + 2) = 0x20000;
      BYTE2(v16) = 22;
      *(GUID *)&v17.m256i_u16[3] = EtwGuidNdisReceive;
      v17.m256i_i8[30] = 1;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    ((void (__fastcall *)(_QWORD))v4[2])(v4[3]);
    if ( (_BYTE)word_1C00EE5EC )
    {
      v13 = 0;
      v14[0] = 0;
      v11 = 0LL;
      v10 = 48;
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)((char *)&v11 + 6) = qword_1C00EE5E0;
      *(_DWORD *)&v14[1] = 0x20000;
      BYTE2(v11) = 23;
      *(GUID *)&v12[6] = EtwGuidNdisReceive;
      IoWMIWriteEvent(&v10);
    }
  }
}
