/*
 * XREFs of RaidUnitLogSenseCommandSrb @ 0x1C00618BC
 * Callers:
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0061BA0 (RaidUnitLogSenseTemperatureSrb.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C0072334 (StorpTelemetrySendUnitScsiDiagnostics.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C0017514 (RaSendIrpSynchronous.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001EED0 (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001F014 (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C001F060 (PortSrbTranslateSrbToNtStatus.c)
 */

__int64 __fastcall RaidUnitLogSenseCommandSrb(__int64 a1, __int64 a2, char a3, char a4, __int64 a5, _BYTE *a6)
{
  __int64 v6; // r14
  __int64 v9; // rcx
  unsigned int *v10; // rsi
  char *v11; // r15
  unsigned int *Srb; // rdi
  int Status; // ebx
  __int64 v14; // r8
  void *Pool; // r13
  char v16; // al
  __int64 v17; // rcx
  _BYTE *v18; // r12
  char *v19; // rcx
  IRP *v20; // rax
  IRP *v21; // rbp
  _DWORD *v22; // rcx
  unsigned int v23; // ecx
  __int64 v25; // [rsp+20h] [rbp-58h]
  _IO_STATUS_BLOCK v26; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 v27; // [rsp+80h] [rbp+8h]

  v25 = *(_QWORD *)(a1 + 24);
  v6 = v25;
  v9 = *(_QWORD *)(a1 + 8);
  v26 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Srb = (unsigned int *)RaidAllocateSrb(v9, 0, *(_BYTE *)(v25 + 442), 1);
  if ( !Srb )
    return (unsigned int)-1073741801;
  Pool = (void *)RaidAllocatePool(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    v16 = *(_BYTE *)(v25 + 442);
    *((_BYTE *)Srb + 3) = 0;
    if ( v16 == 1 )
    {
      Srb[8] = -1;
      v10 = Srb;
      v17 = Srb[13];
      Srb[5] = 0;
      v18 = a6;
      *((_QWORD *)Srb + 8) = a6;
      Srb[6] = 524626;
      Srb[15] = *(_DWORD *)a5;
      *((_QWORD *)Srb + 10) = a2;
      Srb[10] = *(_DWORD *)(a1 + 1320);
      *((_BYTE *)Srb + v17 + 8) = *(_BYTE *)(a1 + 96);
      *((_BYTE *)Srb + v17 + 9) = *(_BYTE *)(a1 + 97);
      *((_BYTE *)Srb + v17 + 10) = *(_BYTE *)(a1 + 98);
      v11 = (char *)Srb + Srb[30];
      *(_DWORD *)v11 = 64;
      v19 = v11 + 24;
      *((_DWORD *)v11 + 1) = 32;
      *((_WORD *)v11 + 4) = -256;
      *((_QWORD *)v11 + 2) = Pool;
      v11[10] = 10;
    }
    else
    {
      *((_BYTE *)Srb + 2) = 0;
      v19 = (char *)(Srb + 18);
      v18 = a6;
      *(_WORD *)Srb = 88;
      Srb[3] = 524626;
      *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 96);
      *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 97);
      *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 98);
      *((_BYTE *)Srb + 8) = -1;
      *((_QWORD *)Srb + 3) = a6;
      Srb[4] = *(_DWORD *)a5;
      *((_QWORD *)Srb + 6) = a2;
      Srb[5] = *(_DWORD *)(a1 + 1320);
      *((_WORD *)Srb + 5) = -246;
      *((_QWORD *)Srb + 4) = Pool;
    }
    if ( *((_BYTE *)Srb + 2) == 40 )
      *((_WORD *)Srb + 19) = 32;
    else
      *((_BYTE *)Srb + 9) = 32;
    *(_WORD *)(v19 + 5) = 0;
    v19[3] = a4;
    *v19 = 77;
    v19[2] = a3 & 0x3F;
    v19[8] = *(_BYTE *)a5;
    v19[7] = *(_BYTE *)(a5 + 1);
    v20 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v14, &v26);
    v21 = v20;
    if ( !v20 )
    {
      Status = -1073741801;
LABEL_26:
      ExFreePoolWithTag(Pool, 0x4E536152u);
      v6 = v25;
      goto LABEL_27;
    }
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v20);
    if ( Status >= 0 )
    {
      Status = v21->IoStatus.Status;
      if ( Status >= 0 )
        Status = PortSrbTranslateSrbToNtStatus(*((_BYTE *)Srb + 3));
    }
    v22 = Srb + 4;
    if ( Status == -2147483643 )
    {
      if ( *v22 <= *(_DWORD *)a5 )
      {
        Status = 0;
        *((_BYTE *)Srb + 3) = 1;
      }
    }
    else if ( Status < 0 )
    {
LABEL_25:
      StorFreeSynchronousScsiRequest(v21);
      goto LABEL_26;
    }
    if ( *v22 >= 4u && (HIBYTE(v27) = v18[2], LOBYTE(v27) = v18[3], v23 = v27 + 4, (*v18 & 0x3F) == a3) )
    {
      if ( v23 < *(_DWORD *)a5 )
        *(_DWORD *)a5 = v23;
    }
    else
    {
      Status = -1073741668;
    }
    goto LABEL_25;
  }
  Status = -1073741801;
LABEL_27:
  if ( *(_BYTE *)(v6 + 442) == 1 )
  {
    if ( !v10 )
      v10 = Srb;
    *((_QWORD *)v10 + 10) = 0LL;
    *((_QWORD *)v10 + 13) = 0LL;
    if ( v11 )
      *((_QWORD *)v11 + 2) = 0LL;
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
