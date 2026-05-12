/*
 * XREFs of RaidUnitLogSenseCommandSrb @ 0x1C002141C
 * Callers:
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C002129C (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0054E88 (RaidUnitLogSenseTemperatureSrb.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C00145D0 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0021A54 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0021AA0 (StorBuildSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0021CDC (PortSrbTranslateSrbToNtStatus.c)
 */

__int64 __fastcall RaidUnitLogSenseCommandSrb(__int64 a1, __int64 a2, char a3, char a4, char *a5, _BYTE *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rcx
  _BYTE *v9; // rsi
  char *v10; // r15
  _BYTE *Srb; // rdi
  __int64 v12; // r8
  void *Pool; // r13
  char v14; // al
  char *v15; // r14
  char *v16; // rcx
  IRP *v17; // rax
  IRP *v18; // rbp
  __int64 v19; // rcx
  int Status; // ebx
  __int64 v22; // rcx
  unsigned int v23; // ecx
  __int64 v24; // [rsp+20h] [rbp-68h]
  __int128 v25[6]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int16 v26; // [rsp+90h] [rbp+8h]

  v24 = *(_QWORD *)(a1 + 24);
  v6 = v24;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 0LL;
  v25[0] = 0LL;
  v10 = 0LL;
  Srb = (_BYTE *)RaidAllocateSrb(v8, 0, *(_BYTE *)(v24 + 442), 1);
  if ( !Srb )
    return (unsigned int)-1073741801;
  Pool = (void *)RaidAllocatePool(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
  if ( !Pool )
  {
    Status = -1073741801;
    goto LABEL_14;
  }
  v14 = *(_BYTE *)(v24 + 442);
  Srb[3] = 0;
  if ( v14 != 1 )
  {
    Srb[2] = 0;
    v15 = a5;
    v16 = Srb + 72;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 3) = 524626;
    Srb[5] = *(_BYTE *)(a1 + 96);
    Srb[6] = *(_BYTE *)(a1 + 97);
    Srb[7] = *(_BYTE *)(a1 + 98);
    Srb[8] = -1;
    *((_QWORD *)Srb + 3) = a6;
    *((_DWORD *)Srb + 4) = *(_DWORD *)a5;
    *((_QWORD *)Srb + 6) = a2;
    *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1264);
    *((_WORD *)Srb + 5) = -246;
    *((_QWORD *)Srb + 4) = Pool;
LABEL_5:
    Srb[9] = 32;
    goto LABEL_6;
  }
  *((_DWORD *)Srb + 8) = -1;
  v9 = Srb;
  v22 = *((unsigned int *)Srb + 13);
  *((_DWORD *)Srb + 5) = 0;
  v15 = a5;
  *((_DWORD *)Srb + 6) = 524626;
  *((_QWORD *)Srb + 8) = a6;
  *((_DWORD *)Srb + 15) = *(_DWORD *)a5;
  *((_QWORD *)Srb + 10) = a2;
  *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1264);
  Srb[v22 + 8] = *(_BYTE *)(a1 + 96);
  Srb[v22 + 9] = *(_BYTE *)(a1 + 97);
  Srb[v22 + 10] = *(_BYTE *)(a1 + 98);
  v10 = &Srb[*((unsigned int *)Srb + 30)];
  *(_DWORD *)v10 = 64;
  v16 = v10 + 24;
  *((_DWORD *)v10 + 1) = 32;
  *((_WORD *)v10 + 4) = -256;
  *((_QWORD *)v10 + 2) = Pool;
  v10[10] = 10;
  if ( Srb[2] != 40 )
    goto LABEL_5;
  *((_WORD *)Srb + 19) = 32;
LABEL_6:
  *(_WORD *)(v16 + 5) = 0;
  v16[3] = a4;
  *v16 = 77;
  v16[2] = a3 & 0x3F;
  v16[8] = *v15;
  v16[7] = v15[1];
  v17 = (IRP *)StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), Srb, v12, v25);
  v18 = v17;
  if ( !v17 )
  {
    Status = -1073741801;
    goto LABEL_13;
  }
  Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v17);
  if ( Status >= 0 )
  {
    Status = v18->IoStatus.Status;
    if ( Status >= 0 )
    {
      LOBYTE(v19) = Srb[3];
      Status = PortSrbTranslateSrbToNtStatus(v19);
    }
  }
  if ( Status == -2147483643 )
  {
    if ( *((_DWORD *)Srb + 4) <= *(_DWORD *)v15 )
    {
      Status = 0;
      Srb[3] = 1;
    }
    goto LABEL_25;
  }
  if ( Status >= 0 )
  {
LABEL_25:
    if ( *((_DWORD *)Srb + 4) >= 4u && (HIBYTE(v26) = a6[2], LOBYTE(v26) = a6[3], v23 = v26 + 4, (*a6 & 0x3F) == a3) )
    {
      if ( v23 < *(_DWORD *)v15 )
        *(_DWORD *)v15 = v23;
    }
    else
    {
      Status = -1073741668;
    }
  }
  StorFreeSynchronousScsiRequest(v18);
LABEL_13:
  ExFreePoolWithTag(Pool, 0x4E536152u);
  v6 = v24;
LABEL_14:
  if ( *(_BYTE *)(v6 + 442) == 1 )
  {
    if ( !v9 )
      v9 = Srb;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 13) = 0LL;
    if ( v10 )
      *((_QWORD *)v10 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
    *((_QWORD *)Srb + 4) = 0LL;
  }
  ExFreePoolWithTag(Srb, 0x72536152u);
  return (unsigned int)Status;
}
