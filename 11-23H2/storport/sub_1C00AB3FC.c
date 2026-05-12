/*
 * XREFs of sub_1C00AB3FC @ 0x1C00AB3FC
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00AB3FC(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int v3; // ebp
  unsigned __int64 v4; // r12
  struct _IRP *MasterIrp; // rdi
  size_t Length; // r8
  int v8; // ebx
  unsigned int v9; // esi
  union _IRP::$CBBBB9F4F0755A16DC8A369061485BEC *p_AssociatedIrp; // r15
  __int64 v11; // rax
  int MdlAddress; // ecx
  int v13; // r14d
  int v14; // ecx
  int v15; // ecx
  const wchar_t *v16; // rax
  int v17; // r14d
  _OWORD *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  size_t v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  _OWORD *v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int16 v26; // ax
  const wchar_t *v28; // [rsp+28h] [rbp-70h]
  unsigned __int16 v29; // [rsp+30h] [rbp-68h]
  __int128 Src; // [rsp+38h] [rbp-60h] BYREF
  __int16 v31; // [rsp+48h] [rbp-50h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v4 = -1LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v31 = 0;
  v8 = 0;
  v28 = L"Failure found while processing operation parameters";
  v9 = 0;
  p_AssociatedIrp = 0LL;
  Src = xmmword_1C008A858;
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)&Src + v11) );
  v29 = v11;
  WORD4(Src) = 0;
  *(_QWORD *)&Src = 0x7300790073002ELL;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x18 )
  {
    v8 = -1073741820;
    goto LABEL_44;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 24 )
  {
    v8 = -1073741637;
    goto LABEL_44;
  }
  MdlAddress = (int)MasterIrp->MdlAddress;
  v13 = 2;
  if ( (unsigned int)(MdlAddress - 1) > 2 )
    goto LABEL_13;
  if ( (unsigned int)Length < 8 )
  {
    v8 = -1073741789;
    goto LABEL_44;
  }
  v14 = MdlAddress - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      v9 = 24;
      goto LABEL_18;
    }
    if ( v15 != 1 )
    {
LABEL_13:
      v8 = -1073741811;
      goto LABEL_44;
    }
    v13 = 3;
  }
  else
  {
    v13 = 1;
  }
  v9 = 352;
  p_AssociatedIrp = &MasterIrp->AssociatedIrp;
LABEL_18:
  if ( (unsigned int)Length < v9 )
  {
    memset_0(MasterIrp, 0, Length);
    *(_DWORD *)(&MasterIrp->Size + 1) = v9;
    v9 = 8;
    *(_DWORD *)&MasterIrp->Type = 352;
    goto LABEL_44;
  }
  if ( a2->RequestorMode )
  {
    v8 = -1073741790;
    v16 = L"Access denied, operation not supported from user mode";
LABEL_27:
    v28 = v16;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x40) == 0 )
  {
    v8 = -1073741637;
    v16 = L"Bypass IO not supported";
    goto LABEL_27;
  }
  if ( v13 != 1 && (unsigned int)(v13 - 2) >= 2 )
  {
    v8 = -1073741811;
    v16 = L"Invalid operation";
    goto LABEL_27;
  }
LABEL_28:
  if ( v9 == 24 )
  {
    memset_0(MasterIrp, 0, Length);
    *(_DWORD *)&MasterIrp->Type = 352;
    *(_DWORD *)(&MasterIrp->Size + 1) = 24;
    LODWORD(MasterIrp->MdlAddress) = v13;
  }
  else
  {
    memset_0(MasterIrp, 0, Length);
    LODWORD(MasterIrp->MdlAddress) = v13;
    *(_DWORD *)(&MasterIrp->Size + 1) = 352;
    v17 = v8;
    *(_DWORD *)&MasterIrp->Type = 352;
    if ( v8 < 0 )
    {
      p_AssociatedIrp->IrpCount = v8;
      v18 = (_OWORD *)((char *)&p_AssociatedIrp->SystemBuffer + 6);
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v20 = *(unsigned __int16 *)(v19 + 56);
      v21 = v20 - 16;
      v22 = *(_QWORD *)(v19 + 64);
      if ( (unsigned __int64)(v20 - 8) >= 0x40 )
      {
        v24 = (_OWORD *)(v22 + 2LL * v29);
        if ( v21 >= 0x40 )
        {
          *v18 = *v24;
          *(_OWORD *)((char *)&p_AssociatedIrp[2].SystemBuffer + 6) = v24[1];
          *(_OWORD *)((char *)&p_AssociatedIrp[4].SystemBuffer + 6) = v24[2];
          *(_OWORD *)((char *)&p_AssociatedIrp[6].SystemBuffer + 6) = v24[3];
        }
        else
        {
          memmove((char *)&p_AssociatedIrp->SystemBuffer + 6, (const void *)(v22 + 2LL * v29), v21);
          v25 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL);
          memmove((char *)&p_AssociatedIrp->SystemBuffer + 2 * ((v25 >> 1) - v29) + 6, &Src, 80 - v25);
        }
        LOWORD(v23) = 32;
      }
      else
      {
        memmove((char *)&p_AssociatedIrp->SystemBuffer + 6, (const void *)(v22 + 2LL * v29), v21);
        *(PVOID *)((char *)&p_AssociatedIrp->SystemBuffer
                 + 2
                 * (((unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 56LL) >> 1) - v29)
                 + 6) = (PVOID)Src;
        v23 = -1LL;
        do
          ++v23;
        while ( *((_WORD *)v18 + v23) );
      }
      WORD2(p_AssociatedIrp->SystemBuffer) = v23;
      do
        ++v4;
      while ( v28[v4] );
      v26 = 128;
      if ( v4 < 0x80 )
        v26 = v4;
      HIWORD(p_AssociatedIrp[8].SystemBuffer) = v26;
      memmove(&p_AssociatedIrp[9], v28, 2LL * v26);
      v9 = 352;
      v8 = v17;
    }
  }
LABEL_44:
  if ( v9 <= 8 )
    v3 = v8;
  a2->IoStatus.Information = v9;
  return sub_1C0003440(a2, 0, v3);
}
