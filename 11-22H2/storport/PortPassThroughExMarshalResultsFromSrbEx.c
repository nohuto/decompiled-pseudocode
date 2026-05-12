/*
 * XREFs of PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0078738
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C001E46C (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C0023680 (memmove.c)
 *     PortPassThroughExApplyNormalizedRequest @ 0x1C00785AC (PortPassThroughExApplyNormalizedRequest.c)
 *     PortPassThroughExNormalize @ 0x1C007890C (PortPassThroughExNormalize.c)
 */

void __fastcall PortPassThroughExMarshalResultsFromSrbEx(PIRP Irp, __int64 a2, char a3, __int64 a4)
{
  _IRP *MasterIrp; // rax
  unsigned int v9; // r10d
  unsigned __int64 v10; // r12
  unsigned int *Pool2; // rax
  unsigned __int8 *v12; // rbx
  int v13; // edi
  unsigned __int8 v14; // bp
  int v15; // r8d
  unsigned __int8 v16; // cl
  const void *v17; // r9
  unsigned int Length; // r10d
  int *v19; // rax
  int v20; // edx
  unsigned __int8 v21; // dl
  char *v22; // rax
  unsigned __int8 v23; // cl
  unsigned int v24; // eax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // [rsp+50h] [rbp+8h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  *(_QWORD *)(a4 + 8) = 0LL;
  v9 = LODWORD(MasterIrp->MdlAddress) + 63;
  if ( v9 < 0x40 )
  {
    v13 = -1073741675;
    goto LABEL_38;
  }
  v10 = v9;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, v9, 1766878288LL);
  v12 = (unsigned __int8 *)Pool2;
  if ( Pool2 )
  {
    v13 = PortPassThroughExNormalize(Pool2, Irp);
    if ( v13 < 0 )
    {
LABEL_36:
      ExFreePoolWithTag(v12, 0x69506C50u);
      goto LABEL_38;
    }
    v14 = 0;
    v15 = *(_DWORD *)a4;
    v16 = 0;
    v17 = 0LL;
    Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    v19 = (int *)(a2 + *(unsigned int *)(a2 + 120));
    v27 = Length;
    v20 = *v19;
    if ( *v19 == 64 || v20 == 65 )
    {
      v17 = (const void *)*((_QWORD *)v19 + 2);
    }
    else
    {
      if ( v20 != 66 )
      {
LABEL_11:
        v12[16] = v14;
        if ( *(char *)(a2 + 3) >= 0 )
        {
          v12[17] = 0;
          v21 = 0;
        }
        else
        {
          v21 = v12[17];
          if ( v21 )
          {
            v22 = (char *)Irp->AssociatedIrp.MasterIrp + *((unsigned int *)v12 + 7);
            if ( v22 )
            {
              v12[17] = v16;
              memmove(v22, v17, v16);
              v21 = v12[17];
              Length = v27;
            }
          }
          v15 = 0;
        }
        v13 = 0;
        v23 = v12[18];
        v24 = *(_DWORD *)(a2 + 60);
        if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 0x12 )
          v13 = v15;
        if ( v23 == 1 )
        {
          *((_DWORD *)v12 + 9) = v24;
        }
        else
        {
          *((_DWORD *)v12 + 8) = v24;
          if ( v23 == 3 && v24 && *((_DWORD *)v12 + 9) )
            *((_DWORD *)v12 + 9) = *(_DWORD *)(*(unsigned int *)(a2 + 124) + a2 + 8);
        }
        if ( v21 )
        {
          v25 = (unsigned int)v21 + *((_DWORD *)v12 + 7);
        }
        else
        {
          v25 = v10;
          if ( v13 < 0 && v14 )
          {
            v13 = 0;
            v25 = 8LL;
          }
        }
        if ( !a3 )
        {
          v26 = *((_QWORD *)v12 + 6);
          if ( v26 )
            v25 = v26 + *((unsigned int *)v12 + 9);
        }
        if ( v25 >= Length )
          v25 = Length;
        *(_QWORD *)(a4 + 8) = v25;
        PortPassThroughExApplyNormalizedRequest((__int128 *)v12, Irp);
        goto LABEL_36;
      }
      v17 = (const void *)*((_QWORD *)v19 + 3);
    }
    v14 = *((_BYTE *)v19 + 8);
    v16 = *((_BYTE *)v19 + 9);
    goto LABEL_11;
  }
  v13 = -1073741670;
LABEL_38:
  *(_DWORD *)a4 = v13;
}
