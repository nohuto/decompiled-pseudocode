/*
 * XREFs of RaUnitStorageGetDumpInfoIoctl @ 0x1C0085844
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitFreeDumpInfo @ 0x1C0017260 (RaidUnitFreeDumpInfo.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C00172B0 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C0017388 (RaidAdapterFreeDumpInfo.c)
 *     RaidUnitCreateDumpInfo @ 0x1C0085228 (RaidUnitCreateDumpInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C00854DC (RaidAdapterCreateDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageGetDumpInfoIoctl(__int64 a1, IRP *a2)
{
  bool v4; // zf
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rdi
  signed int v7; // ebx
  int v8; // eax
  char v9; // r11
  PVOID *v10; // r8
  PVOID **QuadPart; // rdx
  PVOID *v12; // rax
  PVOID *v13; // rcx
  PVOID *v14; // rax
  _QWORD *v15; // r10
  _NAMED_PIPE_CREATE_PARAMETERS **v16; // r9
  _NAMED_PIPE_CREATE_PARAMETERS *v17; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS **v18; // r9
  _LARGE_INTEGER **v19; // rdx
  PVOID v20; // r14
  PVOID v22; // [rsp+30h] [rbp-10h] BYREF
  PVOID *v23; // [rsp+38h] [rbp-8h] BYREF
  char v24; // [rsp+78h] [rbp+38h] BYREF
  char v25; // [rsp+80h] [rbp+40h] BYREF
  PVOID *v26; // [rsp+88h] [rbp+48h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  a2->IoStatus.Information = 0LL;
  v4 = a2->RequestorMode == 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v24 = 0;
  v25 = 0;
  if ( !v4 )
  {
    v7 = -1073741790;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0x48 )
  {
    v7 = -1073741789;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( Parameters->NamedPipeType != 72 )
  {
    v7 = -1073741811;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  v7 = RaidUnitCreateDumpInfo(a1, (__int64)a2, &v23);
  if ( v7 >= 0 )
  {
    v8 = RaidAdapterCreateDumpInfo(*(_QWORD *)(a1 + 24), Parameters, &v22, &v24, &v26, &v25);
    v9 = v25;
    v7 = v8;
    if ( v8 < 0 )
    {
      v20 = v22;
      v14 = v26;
LABEL_14:
      if ( !v9 && v14 )
        RaidAdapterFreeDriverInfo(&v26);
      if ( !v24 && v20 )
        RaidAdapterFreeDumpInfo(&v22);
      goto LABEL_20;
    }
    v10 = v26;
    if ( !v25 )
    {
      QuadPart = (PVOID **)Parameters[1].DefaultTimeout.QuadPart;
      v12 = v26 + 1;
      if ( *QuadPart != (PVOID *)&Parameters[1].InboundQuota )
        goto LABEL_26;
      *v12 = &Parameters[1].InboundQuota;
      v10[2] = QuadPart;
      *QuadPart = v12;
      Parameters[1].DefaultTimeout.QuadPart = (__int64)v12;
    }
    v13 = v23;
    v14 = 0LL;
    v15 = v22;
    v26 = 0LL;
    v23[8] = v10;
    if ( !v24 )
    {
      v16 = *(_NAMED_PIPE_CREATE_PARAMETERS ***)&Parameters[1].CompletionMode;
      v17 = (_NAMED_PIPE_CREATE_PARAMETERS *)(v15 + 1);
      if ( *v16 != &Parameters[1] )
        goto LABEL_26;
      *(_QWORD *)&v17->NamedPipeType = Parameters + 1;
      v15[2] = v16;
      *v16 = v17;
      *(_QWORD *)&Parameters[1].CompletionMode = v17;
    }
    v13[7] = v15;
    v18 = *(_NAMED_PIPE_CREATE_PARAMETERS ***)&Parameters->TimeoutSpecified;
    v19 = (_LARGE_INTEGER **)(v13 + 1);
    v20 = 0LL;
    v22 = 0LL;
    if ( *v18 == (_NAMED_PIPE_CREATE_PARAMETERS *)&Parameters->DefaultTimeout )
    {
      v23 = 0LL;
      *v19 = &Parameters->DefaultTimeout;
      v13[2] = v18;
      *v18 = (_NAMED_PIPE_CREATE_PARAMETERS *)v19;
      *(_QWORD *)&Parameters->TimeoutSpecified = v19;
      *(_QWORD *)&Parameters->InboundQuota = v13;
      goto LABEL_14;
    }
LABEL_26:
    __fastfail(3u);
  }
LABEL_20:
  if ( v23 )
    RaidUnitFreeDumpInfo(&v23);
  return RaidCompleteRequestEx(a2, 0, v7);
}
