/*
 * XREFs of IopGraftName @ 0x14087F758
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1407DFCEC (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x1402FDB40 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x1402FDB64 (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x14030192C (IopGetFileObjectExtension.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IopCopyOverNewPathSecure @ 0x14067E86C (IopCopyOverNewPathSecure.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14073E310 (FsRtlFreeExtraCreateParameter.c)
 *     IopGetFileInformation @ 0x14075B04C (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x14075B9E4 (ObQueryNameStringMode.c)
 *     IoGetIrpExtraCreateParameter @ 0x140765520 (IoGetIrpExtraCreateParameter.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1407CDB9C (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1407CDC68 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkRememberJunction @ 0x14087F658 (IopSymlinkRememberJunction.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x14087FD80 (IopSymlinkGetRelatedMountPoint.c)
 *     IopSymlinkUpdateECP @ 0x14088099C (IopSymlinkUpdateECP.c)
 *     IopSymlinkApplyToOpenedName @ 0x140948E80 (IopSymlinkApplyToOpenedName.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall IopGraftName(IRP *a1, __int64 a2, int *a3)
{
  void *v3; // r12
  unsigned int v5; // esi
  IRP *v6; // r15
  NTSTATUS IrpExtraCreateParameter; // edi
  UNICODE_STRING *v8; // r13
  int v9; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  wchar_t *v12; // r9
  int v13; // eax
  unsigned __int16 v14; // r11
  __int64 v15; // rdx
  char *v16; // rax
  unsigned int v17; // r15d
  __int64 FileObjectExtension; // rax
  const void **v19; // r12
  int v20; // eax
  ULONG v21; // ebx
  struct _FILE_OBJECT *v22; // rdi
  struct _IRP *v23; // rax
  struct _IRP *v24; // r15
  int FileInformation; // eax
  unsigned int v26; // ecx
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v28; // r11
  wchar_t *Buffer; // rcx
  PVOID v30; // r15
  unsigned int v31; // r10d
  __int64 v32; // rax
  unsigned int v33; // r12d
  char *v34; // rax
  int v35; // ecx
  char *v36; // rdi
  unsigned int v37; // r12d
  unsigned __int16 *v38; // rbx
  struct _IRP *v39; // rsi
  char *v40; // rbx
  char *v41; // rsi
  unsigned __int16 v42; // si
  PVOID v43; // r15
  unsigned int v44; // r13d
  __int16 v45; // dx
  __int64 v46; // rax
  wchar_t *v47; // r9
  wchar_t *v48; // rcx
  int updated; // eax
  __int64 v50; // [rsp+50h] [rbp-39h] BYREF
  PVOID EcpContext; // [rsp+58h] [rbp-31h] BYREF
  const void **Pool2; // [rsp+60h] [rbp-29h]
  PVOID Object; // [rsp+68h] [rbp-21h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+70h] [rbp-19h] BYREF
  char *v55; // [rsp+78h] [rbp-11h]
  struct _IRP *v56; // [rsp+80h] [rbp-9h]
  PVOID P; // [rsp+88h] [rbp-1h]
  unsigned __int16 *v58; // [rsp+90h] [rbp+7h]
  PVOID v61; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int16 v62; // [rsp+108h] [rbp+7Fh]

  v3 = *(void **)(a2 + 64);
  Object = v3;
  v5 = 0;
  LODWORD(v50) = 0;
  v62 = 0;
  v6 = a1;
  v55 = 0LL;
  EcpContext = 0LL;
  LOBYTE(v61) = 0;
  P = 0LL;
  Pool2 = 0LL;
  v56 = 0LL;
  ExtraCreateParameter = 0LL;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(a1, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v8 = (UNICODE_STRING *)EcpContext;
  v9 = -1073741192;
  v10 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  if ( v6->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  v11 = v6->IoStatus.Information - 2684354563u;
  if ( v11 > 0x16 || !_bittest64(&v10, v11) )
    IrpExtraCreateParameter = -1073741192;
  LOBYTE(v12) = 0;
  if ( !v6->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( *((_WORD *)a3 + 3) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v13 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned int)(v13 + 1610612733) > 0x16 || !_bittest((const int *)&v10, v13 + 1610612733) )
    IrpExtraCreateParameter = -1073741192;
  v58 = (unsigned __int16 *)(a2 + 88);
  if ( !*(_WORD *)(a2 + 88) )
    goto LABEL_93;
  v9 = IrpExtraCreateParameter;
  if ( IrpExtraCreateParameter >= 0 )
  {
    if ( v13 == -1610612733 )
    {
      v14 = *((_WORD *)a3 + 5);
      v55 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 16;
      v62 = v14;
LABEL_21:
      v15 = *((unsigned __int16 *)a3 + 3);
      goto LABEL_46;
    }
    if ( v13 != -1610612724 )
    {
      v9 = -1073741194;
      goto LABEL_93;
    }
    v16 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 20;
    v62 = *((_WORD *)a3 + 5);
    v55 = v16;
    if ( (a3[4] & 1) != 0 )
    {
      LOBYTE(v61) = 1;
      v17 = 256;
      if ( v3 )
      {
        FileObjectExtension = IopGetFileObjectExtension((__int64)v3, 5, 0LL);
        LOBYTE(v12) = 0;
        if ( !FileObjectExtension )
        {
          while ( 1 )
          {
            Pool2 = (const void **)ExAllocatePool2(256LL, v17, 1665560393LL);
            v19 = Pool2;
            if ( !Pool2 )
            {
              v9 = -1073741670;
              goto LABEL_79;
            }
            v20 = ObQueryNameStringMode(*(char **)(a2 + 8), (__int64)Pool2, v17, &v50, 0);
            LOBYTE(v12) = 0;
            v9 = v20;
            if ( v20 >= 0 )
              break;
            if ( v20 != -2147483643 )
              goto LABEL_45;
            v17 = v50;
            if ( (unsigned int)v50 >= 0xFFFF )
            {
LABEL_37:
              v9 = -1073741562;
              goto LABEL_87;
            }
            ExFreePoolWithTag(v19, 0);
          }
          v21 = 256;
          v22 = (struct _FILE_OBJECT *)Object;
          v5 = *(unsigned __int16 *)v19 + *v58 - *((unsigned __int16 *)a3 + 3);
          while ( 1 )
          {
            v23 = (struct _IRP *)ExAllocatePool2(256LL, v21, 1665560393LL);
            P = v23;
            v24 = v23;
            if ( !v23 )
            {
              v9 = -1073741670;
              goto LABEL_87;
            }
            v56 = v23;
            FileInformation = IopGetFileInformation(v22, v21, 9u, v23, &v50);
            LOBYTE(v12) = 0;
            v9 = FileInformation;
            if ( FileInformation >= 0 )
              break;
            if ( FileInformation != -2147483643 )
              goto LABEL_45;
            v21 = *(_DWORD *)&v24->Type + 8;
            if ( v21 >= 0xFFFF )
              goto LABEL_37;
            ExFreePoolWithTag(v24, 0);
          }
          v26 = v5 + *(_DWORD *)&v24->Type;
          if ( v26 < v5 )
          {
            v9 = -1073741675;
            goto LABEL_87;
          }
          v5 += *(_DWORD *)&v24->Type;
          if ( v26 < 0xFFFF )
            goto LABEL_21;
          v9 = -1073741562;
        }
      }
    }
  }
LABEL_45:
  v15 = *((unsigned __int16 *)a3 + 3);
  if ( v9 < 0 )
    goto LABEL_85;
LABEL_46:
  RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v8, v15);
  if ( !RelatedMountPoint )
  {
    RelatedMountPoint = (__int64)v8;
    if ( v8->Buffer != v12 )
    {
      Buffer = v8->Buffer;
      do
      {
        RelatedMountPoint = (__int64)Buffer;
        Buffer = (wchar_t *)*((_QWORD *)Buffer + 1);
      }
      while ( Buffer );
    }
  }
  v30 = Object;
  v31 = *(unsigned __int16 *)(RelatedMountPoint + 16);
  if ( (_BYTE)v61 != (_BYTE)v12 )
  {
    if ( !Object || (v32 = IopGetFileObjectExtension((__int64)Object, 5, 0LL), LOBYTE(v12) = 0, v32) )
    {
      if ( v5 <= v31 )
        v5 = v31;
    }
    else
    {
      v5 += v31;
    }
    v5 += 2;
  }
  v33 = v5 + v28 + *((unsigned __int16 *)a3 + 3) + 4;
  if ( v33 >= 0xFFFF )
  {
    v9 = -1073741562;
    goto LABEL_85;
  }
  v34 = (char *)ExAllocatePool2(256LL, v33, 1665560393LL);
  v35 = v9;
  LOBYTE(v12) = 0;
  v36 = v34;
  if ( !v34 )
    v35 = -1073741670;
  v37 = v33 - 2;
  v9 = v35;
  if ( v35 < 0 )
  {
LABEL_85:
    if ( (_BYTE)v61 == (_BYTE)v12 )
    {
LABEL_90:
      v6 = a1;
LABEL_91:
      if ( v9 >= 0 )
        v9 = 260;
      goto LABEL_93;
    }
LABEL_86:
    v19 = Pool2;
    if ( Pool2 )
LABEL_87:
      ExFreePoolWithTag(v19, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_90;
  }
  if ( (_BYTE)v61 )
  {
    v61 = 0LL;
    if ( v30 && !IopGetFileObjectExtension((__int64)v30, 5, 0LL) )
    {
      v38 = (unsigned __int16 *)Pool2;
      memmove(v36, Pool2[1], *(unsigned __int16 *)Pool2);
      v39 = v56;
      v40 = &v36[2 * ((unsigned __int64)*v38 >> 1)];
      memmove(v40, &v56->Size + 1, *(unsigned int *)&v56->Type);
      v41 = &v40[2 * ((unsigned __int64)*(unsigned int *)&v39->Type >> 1)];
      if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v41 - 1) != 92 )
      {
        *(_WORD *)v41 = 92;
        LOWORD(v41) = (_WORD)v41 + 2;
      }
      v42 = (_WORD)v41 - (_WORD)v36;
      IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
      v43 = EcpContext;
      v44 = *((unsigned __int16 *)EcpContext + 8) + 2 + v42;
      if ( v44 >= 0xFFFF )
      {
        v9 = -1073741562;
LABEL_69:
        ExFreePoolWithTag(v36, 0);
        goto LABEL_86;
      }
      v9 = IopSymlinkAllocateAndAddECP(a1, &v61, v44);
      if ( v9 < 0 )
        goto LABEL_69;
      v45 = v44 + 32;
      v8 = (UNICODE_STRING *)v61;
      IopSymlinkInitializeSymlinkInfo(
        (__int64)v61,
        v45,
        *((const void **)v43 + 3),
        *((_WORD *)v43 + 8),
        *(_WORD *)v43,
        v36,
        v42,
        *(_WORD *)Pool2,
        *((_WORD *)v43 + 1),
        *((_QWORD *)v43 + 1));
      FsRtlFreeExtraCreateParameter(v43);
    }
    v46 = IopSymlinkGetRelatedMountPoint(v8, *((unsigned __int16 *)a3 + 3));
    if ( !v46 )
    {
      v46 = (__int64)v8;
      if ( v8->Buffer != v47 )
      {
        v48 = v8->Buffer;
        do
        {
          v46 = (__int64)v48;
          v48 = (wchar_t *)*((_QWORD *)v48 + 1);
        }
        while ( v48 );
      }
    }
    v9 = IopSymlinkApplyToOpenedName(a2, v46, a3, a1, v36, v37);
    goto LABEL_86;
  }
  v9 = IopCopyOverNewPathSecure(v34, v55, v62, a2, *((_WORD *)a3 + 3));
  if ( v9 >= 0 )
  {
    v6 = a1;
    if ( *a3 == -1610612733 )
      updated = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), a2, (__int64)a1, v8);
    else
      updated = IopSymlinkUpdateECP(a1, v8, 0, v8->MaximumLength & 0xFFFE);
    v9 = updated;
    goto LABEL_91;
  }
  ExFreePoolWithTag(v36, 0);
LABEL_79:
  v6 = a1;
LABEL_93:
  v6->IoStatus.Status = v9;
}
