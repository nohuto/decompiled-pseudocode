/*
 * XREFs of RaidUnitResetUnit @ 0x1C0055850
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1C0054BE4 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C00145D0 (RaSendIrpSynchronous.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0021A54 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0021AA0 (StorBuildSynchronousScsiRequest.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0quuu_EtwWriteTransfer @ 0x1C004FFE8 (McTemplateK0quuu_EtwWriteTransfer.c)
 *     StorpAggregateHierarchicalResetLun @ 0x1C005DEF0 (StorpAggregateHierarchicalResetLun.c)
 */

__int64 __fastcall RaidUnitResetUnit(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  int v4; // ebx
  __int64 v5; // rcx
  __int64 Srb; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  int Status; // r15d
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // eax
  IRP *v13; // rax
  IRP *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // di
  char v21; // r12
  __int64 v22; // rcx
  char v24; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+49h] [rbp-BFh] BYREF
  char v26; // [rsp+4Bh] [rbp-BDh] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh]
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v29[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  __int64 v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  __int64 *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  char *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  __int16 *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  char *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  char *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  _QWORD *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]

  *(_OWORD *)&v29[1] = 0LL;
  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 96);
  v5 = *(_QWORD *)(a1 + 8);
  v27 = v4;
  Srb = RaidAllocateSrb(v5, 0x20u, *(_BYTE *)(v3 + 442), 0);
  v8 = Srb;
  if ( Srb )
  {
    if ( *(_BYTE *)(v3 + 442) == 1 )
    {
      v10 = *(unsigned int *)(Srb + 52);
      *(_DWORD *)(Srb + 20) = 32;
      *(_BYTE *)(v10 + Srb + 8) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v10 + Srb + 9) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v10 + Srb + 10) = *(_BYTE *)(a1 + 98);
      *(_DWORD *)(Srb + 32) = -1;
      *(_DWORD *)(Srb + 24) = 524560;
      *(_QWORD *)(Srb + 64) = 0LL;
      *(_DWORD *)(Srb + 60) = 0;
      *(_QWORD *)(Srb + 80) = 0LL;
      if ( *(_BYTE *)(a1 + 3232) )
      {
        v11 = *(_DWORD *)(a1 + 3252);
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 1264);
        if ( v11 < 0x1E )
          v11 = 30;
      }
      *(_DWORD *)(v8 + 40) = v11;
    }
    else
    {
      *(_BYTE *)(Srb + 2) = 32;
      *(_WORD *)Srb = 88;
      *(_BYTE *)(Srb + 5) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(Srb + 6) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(Srb + 7) = *(_BYTE *)(a1 + 98);
      *(_QWORD *)(Srb + 12) = 524560LL;
      *(_BYTE *)(Srb + 8) = -1;
      *(_QWORD *)(Srb + 24) = 0LL;
      *(_QWORD *)(Srb + 48) = 0LL;
      if ( *(_BYTE *)(a1 + 3232) )
      {
        v12 = *(_DWORD *)(a1 + 3252);
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 1264);
        if ( v12 < 0x1E )
          v12 = 30;
      }
      *(_DWORD *)(v8 + 20) = v12;
    }
    v13 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v8, v7, (_IO_STATUS_BLOCK *)&v29[1]);
    v14 = v13;
    if ( v13 )
    {
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v13);
      if ( Status >= 0 )
        Status = v14->IoStatus.Status;
      StorFreeSynchronousScsiRequest(v14);
      LOBYTE(v15) = *(_BYTE *)(v8 + 3);
      StorpAggregateHierarchicalResetLun(*(_QWORD *)(a1 + 24), v15, MEMORY[0xFFFFF78000000014] - v2);
      v20 = BYTE2(v27);
      v21 = BYTE1(v27);
      if ( (unsigned int)dword_1C0079058 > 5 )
      {
        v22 = *(_QWORD *)(a1 + 24);
        v32 = 16LL;
        v34 = 16LL;
        v31 = v22 + 4936;
        v33 = a1 + 1976;
        LODWORD(v28) = *(_DWORD *)(v22 + 56);
        v35 = &v28;
        v37 = &v24;
        v39 = &v25;
        v41 = (char *)&v25 + 1;
        v26 = *(_BYTE *)(v8 + 3);
        v43 = &v26;
        v45 = v29;
        v36 = 4LL;
        v24 = v4;
        v38 = 1LL;
        v25 = *(_WORD *)((char *)&v27 + 1);
        v40 = 1LL;
        v42 = 1LL;
        v44 = 1LL;
        v29[0] = v18;
        v46 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(v22, (unsigned __int8 *)dword_1C006CEDC, v18, v19, 0xAu, &v30);
      }
      if ( (Microsoft_Windows_StorPortEnableBits & 1) != 0 )
        McTemplateK0quuu_EtwWriteTransfer(v17, v16, v18, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v21, v20);
    }
    else
    {
      Status = -1073741801;
    }
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
