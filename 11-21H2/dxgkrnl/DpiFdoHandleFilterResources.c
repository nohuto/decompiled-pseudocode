/*
 * XREFs of DpiFdoHandleFilterResources @ 0x1C0219D90
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiDisableInterruptResources @ 0x1C0388518 (DpiDisableInterruptResources.c)
 */

__int64 __fastcall DpiFdoHandleFilterResources(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  IRP *v4; // rbp
  __int64 v5; // r15
  __int64 Status; // rbx
  unsigned int *Information; // rsi
  unsigned int v9; // edi
  _OWORD *PoolWithTag; // rax
  _OWORD *v11; // r14
  unsigned int *v12; // r15
  unsigned int v13; // r12d
  unsigned int *v14; // rdi
  unsigned int *v15; // rcx
  __int64 v16; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v5 = *(_QWORD *)(v2 + 40);
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 160), a2);
  Status = v4->IoStatus.Status;
  if ( (int)Status >= 0 )
  {
    Information = (unsigned int *)v4->IoStatus.Information;
    if ( !*(_QWORD *)(v5 + 184) )
      DpiDisableInterruptResources(v4->IoStatus.Information);
    if ( *(_BYTE *)(v2 + 1156) != 1 )
    {
      WdLogSingleEntry1(4LL, a1);
      goto LABEL_3;
    }
    v9 = *Information + 96 * Information[7];
    if ( v9 < *Information )
      goto LABEL_15;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x74727044u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      Status = -1073741801LL;
      v16 = 6LL;
      goto LABEL_17;
    }
    memset(PoolWithTag, 0, v9);
    v12 = Information + 8;
    v13 = 0;
    *v11 = *(_OWORD *)Information;
    v11[1] = *((_OWORD *)Information + 1);
    *(_DWORD *)v11 = v9;
    v14 = (unsigned int *)(v11 + 2);
    if ( Information[7] )
    {
      do
      {
        memmove(v14, v12, 32LL * v12[1] + 8);
        ++v13;
        v15 = &v14[8 * v14[1]];
        *((_WORD *)v15 + 4) = 257;
        *((_BYTE *)v15 + 10) = 3;
        *((_WORD *)v15 + 6) = 1;
        v15[4] = 12;
        v15[5] = 1;
        *((_QWORD *)v15 + 3) = 944LL;
        *((_QWORD *)v15 + 4) = 955LL;
        *((_WORD *)v15 + 20) = 257;
        *((_BYTE *)v15 + 42) = 3;
        *((_WORD *)v15 + 22) = 1;
        v15[12] = 32;
        v15[13] = 1;
        *((_QWORD *)v15 + 7) = 960LL;
        *((_QWORD *)v15 + 8) = 991LL;
        *((_WORD *)v15 + 36) = 769;
        *((_BYTE *)v15 + 74) = 3;
        *((_WORD *)v15 + 38) = 0;
        v15[20] = 0x20000;
        v15[21] = 1;
        *((_QWORD *)v15 + 11) = 655360LL;
        *((_QWORD *)v15 + 12) = 786431LL;
        v14[1] += 3;
        v12 += 8 * v12[1] + 2;
        v14 += 8 * v14[1] + 2;
      }
      while ( v13 < Information[7] );
      v4 = a2;
    }
    ExFreePoolWithTag(Information, 0);
    v4->IoStatus.Information = (ULONG_PTR)v11;
  }
  else if ( !*(_BYTE *)(v2 + 480) && !*(_BYTE *)(v2 + 2695) && !*(_BYTE *)(v2 + 1159) )
  {
LABEL_15:
    v16 = 2LL;
LABEL_17:
    WdLogSingleEntry1(v16, Status);
  }
LABEL_3:
  v4->IoStatus.Status = Status;
  IofCompleteRequest(v4, 1);
  return (unsigned int)Status;
}
