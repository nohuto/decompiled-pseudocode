/*
 * XREFs of RaUnitStorageManageBypassIOIoctl @ 0x1C008F8BC
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaUnitStorageManageBypassIOIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int v3; // ebp
  _IRP *MasterIrp; // rdi
  unsigned __int64 v5; // r12
  int v6; // ebx
  size_t Length; // r8
  unsigned int v8; // esi
  $4606AE418BBA55A881C251F1B5BB763E *p_AssociatedIrp; // r15
  __int64 v10; // r13
  int MdlAddress; // ecx
  int v12; // r14d
  int v13; // ecx
  int v14; // ecx
  const wchar_t *v15; // rax
  _OWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  size_t v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int16 v23; // ax
  __int128 Src; // [rsp+20h] [rbp-58h] BYREF
  wchar_t v26; // [rsp+30h] [rbp-48h]
  const wchar_t *v29; // [rsp+90h] [rbp+18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = -1LL;
  v6 = 0;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = 0;
  Src = *(_OWORD *)L"\\Driver\\";
  p_AssociatedIrp = 0LL;
  v26 = aDriver_0[8];
  v10 = -1LL;
  v29 = L"Failure found while processing operation parameters";
  do
    ++v10;
  while ( *((_WORD *)&Src + v10) );
  *(_QWORD *)&Src = *(_QWORD *)L".sys";
  WORD4(Src) = aSys[4];
  if ( CurrentStackLocation->Parameters.Create.Options < 0x18 )
  {
    v6 = -1073741820;
    goto LABEL_42;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 24 )
  {
    v6 = -1073741637;
    goto LABEL_42;
  }
  MdlAddress = (int)MasterIrp->MdlAddress;
  v12 = 2;
  if ( (unsigned int)(MdlAddress - 1) > 2 )
    goto LABEL_8;
  if ( (unsigned int)Length < 8 )
  {
    v6 = -1073741789;
    goto LABEL_42;
  }
  v13 = MdlAddress - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      v8 = 24;
      goto LABEL_18;
    }
    if ( v14 != 1 )
    {
LABEL_8:
      v6 = -1073741811;
      goto LABEL_42;
    }
    v12 = 3;
  }
  else
  {
    v12 = 1;
  }
  v8 = 352;
  p_AssociatedIrp = &MasterIrp->AssociatedIrp;
LABEL_18:
  if ( (unsigned int)Length < v8 )
  {
    memset(MasterIrp, 0, Length);
    *(_DWORD *)(&MasterIrp->Size + 1) = v8;
    v8 = 8;
    *(_DWORD *)&MasterIrp->Type = 352;
    goto LABEL_42;
  }
  if ( a2->RequestorMode )
  {
    v6 = -1073741790;
    v15 = L"Access denied, operation not supported from user mode";
LABEL_25:
    v29 = v15;
    goto LABEL_26;
  }
  if ( v12 != 1 && (unsigned int)(v12 - 2) >= 2 )
  {
    v6 = -1073741811;
    v15 = L"Invalid operation";
    goto LABEL_25;
  }
LABEL_26:
  if ( v8 == 24 )
  {
    memset(MasterIrp, 0, Length);
    *(_DWORD *)&MasterIrp->Type = 352;
    *(_DWORD *)(&MasterIrp->Size + 1) = 24;
    LODWORD(MasterIrp->MdlAddress) = v12;
  }
  else
  {
    memset(MasterIrp, 0, Length);
    *(_DWORD *)&MasterIrp->Type = 352;
    *(_DWORD *)(&MasterIrp->Size + 1) = 352;
    LODWORD(MasterIrp->MdlAddress) = v12;
    if ( v6 < 0 )
    {
      v16 = (_OWORD *)((char *)&p_AssociatedIrp->SystemBuffer + 6);
      p_AssociatedIrp->IrpCount = v6;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v18 = *(unsigned __int16 *)(v17 + 56);
      v19 = v18 - 16;
      v20 = *(_QWORD *)(v17 + 64);
      if ( (unsigned __int64)(v18 - 8) >= 0x40 )
      {
        if ( v19 >= 0x40 )
        {
          *v16 = *(_OWORD *)(v20 + 2LL * (unsigned __int16)v10);
          *(_OWORD *)((char *)&p_AssociatedIrp[2].SystemBuffer + 6) = *(_OWORD *)(v20 + 2LL * (unsigned __int16)v10 + 16);
          *(_OWORD *)((char *)&p_AssociatedIrp[4].SystemBuffer + 6) = *(_OWORD *)(v20 + 2LL * (unsigned __int16)v10 + 32);
          *(_OWORD *)((char *)&p_AssociatedIrp[6].SystemBuffer + 6) = *(_OWORD *)(v20 + 2LL * (unsigned __int16)v10 + 48);
        }
        else
        {
          memmove((char *)&p_AssociatedIrp->SystemBuffer + 6, (const void *)(v20 + 2LL * (unsigned __int16)v10), v19);
          v22 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL);
          memmove((char *)&p_AssociatedIrp->SystemBuffer + 2 * ((v22 >> 1) - (unsigned __int16)v10) + 6, &Src, 80 - v22);
        }
        LOWORD(v21) = 32;
      }
      else
      {
        memmove((char *)&p_AssociatedIrp->SystemBuffer + 6, (const void *)(v20 + 2LL * (unsigned __int16)v10), v19);
        *(void **)((char *)&p_AssociatedIrp->SystemBuffer
                 + 2
                 * (((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL) >> 1)
                  - (unsigned __int16)v10)
                 + 6) = (void *)Src;
        v21 = -1LL;
        do
          ++v21;
        while ( *((_WORD *)v16 + v21) );
      }
      WORD2(p_AssociatedIrp->SystemBuffer) = v21;
      do
        ++v5;
      while ( v29[v5] );
      v23 = 128;
      if ( v5 < 0x80 )
        v23 = v5;
      HIWORD(p_AssociatedIrp[8].SystemBuffer) = v23;
      memmove(&p_AssociatedIrp[9], v29, 2LL * v23);
    }
  }
LABEL_42:
  if ( v8 <= 8 )
    v3 = v6;
  a2->IoStatus.Information = v8;
  return RaidCompleteRequestEx(a2, 0, v3);
}
