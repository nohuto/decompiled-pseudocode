/*
 * XREFs of sub_1406B8840 @ 0x1406B8840
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406B8840(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  IRP *v3; // r8
  __int64 v4; // rbp
  PFILE_OBJECT FileObject; // r9
  unsigned int v6; // ebx
  wchar_t *Buffer; // rbx
  char *v9; // rax
  unsigned __int64 v10; // rdx
  wchar_t *v11; // rcx
  __int64 v12; // rdi
  int v13; // r11d
  int v14; // r10d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  v4 = a1;
  FileObject = CurrentStackLocation->FileObject;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Buffer = FileObject->FileName.Buffer;
    if ( Buffer )
    {
      v9 = 0LL;
      v10 = 0LL;
      while ( 1 )
      {
        v11 = (&off_140007140)[v10];
        v12 = (char *)Buffer - (char *)v11;
        do
        {
          v13 = *(wchar_t *)((char *)v11 + v12);
          v14 = *v11 - v13;
          if ( v14 )
            break;
          ++v11;
        }
        while ( v13 );
        if ( !v14 )
          break;
        ++v9;
        v10 += 3LL;
        if ( v10 >= 15 )
          goto LABEL_14;
      }
      if ( v9 != (char *)-1LL )
      {
        FileObject->FsContext = v9;
        a2 = v3;
        a1 = v4;
        return (unsigned int)sub_14042A5E0(a1, a2);
      }
    }
LABEL_14:
    v6 = -1073741811;
    v3->IoStatus.Status = -1073741811;
LABEL_16:
    IofCompleteRequest(v3, 0);
    return v6;
  }
  if ( FileObject->FsContext >= (PVOID)5 )
  {
    v6 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    goto LABEL_16;
  }
  return (unsigned int)sub_14042A5E0(a1, a2);
}
