/*
 * XREFs of PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0068F38
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C0022008 (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C0024080 (memmove.c)
 *     PortPassThroughExApplyNormalizedRequest @ 0x1C0068D7C (PortPassThroughExApplyNormalizedRequest.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0068F10 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExNormalize @ 0x1C0069108 (PortPassThroughExNormalize.c)
 */

void __fastcall PortPassThroughExMarshalResultsFromSrbEx(PIRP Irp, __int64 a2, char a3, __int64 a4)
{
  NTSTATUS BasicStructureSize; // edi
  unsigned __int64 v9; // rsi
  _BYTE *Pool2; // rax
  _BYTE *v11; // rbx
  char v12; // r14
  NTSTATUS v13; // r8d
  unsigned __int8 v14; // cl
  const void *v15; // r9
  unsigned int Length; // r10d
  int *v17; // rax
  int v18; // edx
  unsigned __int8 v19; // dl
  char *v20; // rax
  char v21; // cl
  int v22; // eax
  __int64 v23; // rax
  ULONG v24; // [rsp+68h] [rbp+20h] BYREF

  v24 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  BasicStructureSize = PortPassThroughExGetBasicStructureSize((__int64)Irp, &v24);
  if ( BasicStructureSize < 0 )
    goto LABEL_38;
  v9 = v24;
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, v24, 1766878288LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    BasicStructureSize = -1073741670;
    goto LABEL_38;
  }
  BasicStructureSize = PortPassThroughExNormalize(Pool2, Irp);
  if ( BasicStructureSize >= 0 )
  {
    v12 = 0;
    v13 = *(_DWORD *)a4;
    v14 = 0;
    v15 = 0LL;
    Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    v17 = (int *)(a2 + *(unsigned int *)(a2 + 120));
    v24 = Length;
    v18 = *v17;
    if ( *v17 == 64 || v18 == 65 )
    {
      v15 = (const void *)*((_QWORD *)v17 + 2);
    }
    else
    {
      if ( v18 != 66 )
      {
LABEL_11:
        v11[16] = v12;
        if ( *(char *)(a2 + 3) >= 0 )
        {
          v11[17] = 0;
          v19 = 0;
        }
        else
        {
          v19 = v11[17];
          if ( v19 )
          {
            v20 = (char *)Irp->AssociatedIrp.MasterIrp + *((unsigned int *)v11 + 7);
            if ( v20 )
            {
              v11[17] = v14;
              memmove(v20, v15, v14);
              v19 = v11[17];
              Length = v24;
            }
          }
          v13 = 0;
        }
        BasicStructureSize = 0;
        v21 = v11[18];
        v22 = *(_DWORD *)(a2 + 60);
        if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 0x12 )
          BasicStructureSize = v13;
        if ( v21 == 1 )
        {
          *((_DWORD *)v11 + 9) = v22;
        }
        else
        {
          *((_DWORD *)v11 + 8) = v22;
          if ( v21 == 3 && v22 && *((_DWORD *)v11 + 9) )
            *((_DWORD *)v11 + 9) = *(_DWORD *)(*(unsigned int *)(a2 + 124) + a2 + 8);
        }
        if ( v19 )
        {
          v9 = (unsigned int)v19 + *((_DWORD *)v11 + 7);
        }
        else if ( BasicStructureSize < 0 && v12 )
        {
          BasicStructureSize = 0;
          v9 = 8LL;
        }
        if ( !a3 )
        {
          v23 = *((_QWORD *)v11 + 6);
          if ( v23 )
            v9 = v23 + *((unsigned int *)v11 + 9);
        }
        if ( v9 >= Length )
          v9 = Length;
        *(_QWORD *)(a4 + 8) = v9;
        PortPassThroughExApplyNormalizedRequest((__int128 *)v11, Irp);
        goto LABEL_36;
      }
      v15 = (const void *)*((_QWORD *)v17 + 3);
    }
    v12 = *((_BYTE *)v17 + 8);
    v14 = *((_BYTE *)v17 + 9);
    goto LABEL_11;
  }
LABEL_36:
  if ( v11 )
    ExFreePoolWithTag(v11, 0x69506C50u);
LABEL_38:
  *(_DWORD *)a4 = BasicStructureSize;
}
