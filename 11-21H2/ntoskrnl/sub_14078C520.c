/*
 * XREFs of sub_14078C520 @ 0x14078C520
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1406DD8D0 @ 0x1406DD8D0 (sub_1406DD8D0.c)
 *     sub_14078C5BC @ 0x14078C5BC (sub_14078C5BC.c)
 */

__int64 __fastcall sub_14078C520(__int64 a1, IRP *a2)
{
  int Status; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UCHAR MajorFunction; // al
  IRP *v6; // rcx
  char *FsContext2; // rcx

  Status = a2->IoStatus.Status;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( Status >= 0 )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction )
    {
      if ( MajorFunction == 2 )
      {
        FsContext2 = (char *)CurrentStackLocation->FileObject->FsContext2;
        if ( FsContext2 )
        {
          sub_1406DD8D0(FsContext2, 1);
          CurrentStackLocation->FileObject->FsContext2 = 0LL;
        }
        Status = 0;
        v6 = a2;
        a2->IoStatus.Status = 0;
        goto LABEL_9;
      }
      v6 = a2;
      if ( MajorFunction == 14 )
        return (unsigned int)sub_14078C5BC(a2);
      if ( MajorFunction != 18 )
      {
        Status = -1073741637;
        a2->IoStatus.Status = -1073741637;
        goto LABEL_9;
      }
    }
    else
    {
      v6 = a2;
      CurrentStackLocation->FileObject->FsContext2 = 0LL;
    }
    a2->IoStatus.Status = 0;
LABEL_9:
    IofCompleteRequest(v6, 0);
  }
  return (unsigned int)Status;
}
