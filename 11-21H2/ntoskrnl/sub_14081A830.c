/*
 * XREFs of sub_14081A830 @ 0x14081A830
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1403B4174 @ 0x1403B4174 (sub_1403B4174.c)
 *     sub_1403BF770 @ 0x1403BF770 (sub_1403BF770.c)
 *     sub_140844508 @ 0x140844508 (sub_140844508.c)
 *     sub_140844658 @ 0x140844658 (sub_140844658.c)
 *     sub_140846478 @ 0x140846478 (sub_140846478.c)
 *     sub_1408602B8 @ 0x1408602B8 (sub_1408602B8.c)
 *     sub_140860698 @ 0x140860698 (sub_140860698.c)
 *     sub_1408614B0 @ 0x1408614B0 (sub_1408614B0.c)
 *     sub_140A56C48 @ 0x140A56C48 (sub_140A56C48.c)
 */

NTSTATUS __fastcall sub_14081A830(_QWORD *Object, PIRP Irp)
{
  _DWORD *v2; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int MinorFunction; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int Status; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  NTSTATUS v16; // eax
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx

  v2 = (_DWORD *)Object[8];
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( *v2 == 192 )
  {
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( MinorFunction <= 7 )
    {
      if ( MinorFunction != 7 )
      {
        Status = 0;
        if ( !CurrentStackLocation->MinorFunction )
        {
          if ( v2[8] == 129 )
          {
            sub_1403BF770();
            sub_140A56C48(25LL);
          }
          goto LABEL_16;
        }
        v20 = MinorFunction - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                if ( v23 - 1 > 1 )
                  goto LABEL_7;
              }
            }
          }
          goto LABEL_16;
        }
        Status = v2[8] != 132 ? 0xC0000001 : 0;
        goto LABEL_6;
      }
      v8 = sub_1408602B8(Object);
    }
    else
    {
      v7 = MinorFunction - 8;
      if ( v7 )
      {
        v11 = v7 - 1;
        if ( !v11 )
        {
          SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
          if ( WORD1(SecurityContext->SecurityQos) != 1 )
            goto LABEL_7;
          v18 = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFEC3;
          SecurityContext->FullCreateOptions = 1;
          HIDWORD(SecurityContext->SecurityQos) = v18 | 0xC0;
          Status = 0;
          LODWORD(SecurityContext->AccessState) = -1;
          HIDWORD(SecurityContext->AccessState) = -1;
          HIDWORD(SecurityContext[1].AccessState) = 4;
          SecurityContext[1].DesiredAccess = 4;
          *(PSECURITY_QUALITY_OF_SERVICE *)((char *)&SecurityContext[2].SecurityQos + 4) = 0LL;
          HIDWORD(SecurityContext[2].AccessState) = 0;
          goto LABEL_16;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          v8 = sub_140844508(Object, &Irp->IoStatus.Information);
          goto LABEL_5;
        }
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 8;
          if ( !v14 )
          {
            v8 = sub_140860698(Object, CurrentStackLocation->Parameters.Read.Length, &Irp->IoStatus.Information);
            goto LABEL_5;
          }
          v15 = v14 - 1;
          if ( v15 && v15 != 2 )
            goto LABEL_7;
        }
        else
        {
          v19 = v2[8];
          if ( v19 == 129 )
          {
            v8 = sub_140844658(&Irp->IoStatus.Information);
            goto LABEL_5;
          }
          if ( (unsigned int)(v19 - 130) > 2 )
            goto LABEL_7;
        }
        Status = 0;
        goto LABEL_16;
      }
      v8 = sub_140846478(
             (_DWORD)Object,
             CurrentStackLocation->Parameters.WMI.ProviderId,
             CurrentStackLocation->Parameters.QueryInterface.Version,
             CurrentStackLocation->Parameters.CreatePipe.Parameters,
             CurrentStackLocation->Parameters.QueryInterface.Size,
             CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
             (__int64)&Irp->IoStatus.Information);
    }
LABEL_5:
    Status = v8;
LABEL_6:
    if ( Status == -1073741637 )
    {
LABEL_7:
      Status = Irp->IoStatus.Status;
LABEL_8:
      IofCompleteRequest(Irp, 0);
      return Status;
    }
LABEL_16:
    Irp->IoStatus.Status = Status;
    goto LABEL_8;
  }
  if ( *v2 != 193 )
  {
    Status = -1073741808;
    goto LABEL_16;
  }
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 7u:
      v16 = sub_1408602B8(Object);
      break;
    case 8u:
      v16 = sub_140846478(
              (_DWORD)Object,
              CurrentStackLocation->Parameters.WMI.ProviderId,
              CurrentStackLocation->Parameters.QueryInterface.Version,
              CurrentStackLocation->Parameters.CreatePipe.Parameters,
              CurrentStackLocation->Parameters.QueryInterface.Size,
              CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
              (__int64)&Irp->IoStatus.Information);
      break;
    case 0x13u:
      v16 = sub_1408614B0(
              (unsigned int)CurrentStackLocation->MinorFunction - 8,
              CurrentStackLocation->Parameters.Read.Length,
              &Irp->IoStatus.Information);
      break;
    default:
      return sub_1403B4174((__int64)Object, Irp);
  }
  Status = v16;
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741637 )
    goto LABEL_16;
  if ( v16 != -1073741637 )
    Irp->IoStatus.Status = v16;
  return sub_1403B4174((__int64)Object, Irp);
}
