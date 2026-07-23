/*
 * XREFs of sub_140764DB0 @ 0x140764DB0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_140661C18 @ 0x140661C18 (sub_140661C18.c)
 *     sub_140762C04 @ 0x140762C04 (sub_140762C04.c)
 *     sub_140762F18 @ 0x140762F18 (sub_140762F18.c)
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_140764EC8 @ 0x140764EC8 (sub_140764EC8.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_14084F808 @ 0x14084F808 (sub_14084F808.c)
 *     sub_140860758 @ 0x140860758 (sub_140860758.c)
 *     sub_140953700 @ 0x140953700 (sub_140953700.c)
 *     sub_140953894 @ 0x140953894 (sub_140953894.c)
 */

__int64 __fastcall sub_140764DB0(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  IRP *v9; // rcx
  PVOID FsContext2; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = (unsigned __int8)sub_14078A600(128LL) == 0 ? 0xC0000022 : 0;
    a2->IoStatus.Status = Status;
LABEL_12:
    v9 = a2;
    goto LABEL_13;
  }
  if ( MajorFunction != 14 )
  {
    if ( MajorFunction == 2 )
    {
      FsContext2 = CurrentStackLocation->FileObject->FsContext2;
      if ( FsContext2 )
      {
        sub_140661C18(FsContext2);
        CurrentStackLocation->FileObject->FsContext2 = 0LL;
      }
    }
    else
    {
      if ( MajorFunction != 18 )
        return Status;
      if ( CurrentStackLocation->FileObject->FsContext2 )
        sub_140953700();
    }
    Status = 0;
    a2->IoStatus.Status = 0;
    goto LABEL_12;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x470400u:
      return (unsigned int)sub_140764EC8(a2);
    case 0x470404u:
      return (unsigned int)sub_140762C04(a2, (__int64)a2, a3);
    case 0x470408u:
      return (unsigned int)sub_14076308C(a2, (__int64)a2, a3);
    case 0x47040Cu:
      return (unsigned int)sub_140860758(a2);
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654096 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654100 )
      return (unsigned int)sub_140762F18(a2, (__int64)a2, a3);
    v9 = a2;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654104 )
      return (unsigned int)sub_140953894(a2);
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
LABEL_13:
    IofCompleteRequest(v9, 0);
    return Status;
  }
  return (unsigned int)sub_14084F808(a2);
}
