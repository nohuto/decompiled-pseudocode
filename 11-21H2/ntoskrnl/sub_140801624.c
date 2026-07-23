/*
 * XREFs of sub_140801624 @ 0x140801624
 * Callers:
 *     sub_140801014 @ 0x140801014 (sub_140801014.c)
 *     sub_140801068 @ 0x140801068 (sub_140801068.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     sub_140801784 @ 0x140801784 (sub_140801784.c)
 *     sub_1408017F8 @ 0x1408017F8 (sub_1408017F8.c)
 *     sub_1408018EC @ 0x1408018EC (sub_1408018EC.c)
 *     sub_14081C234 @ 0x14081C234 (sub_14081C234.c)
 */

__int64 __fastcall sub_140801624(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  __int64 v5; // rax
  NTSTATUS Status; // ecx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR v11; // [rsp+48h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+28h] BYREF

  v8 = 0LL;
  P = 0LL;
  v13 = 0;
  IoStatusBlock = 0LL;
  if ( !FileObject )
    goto LABEL_17;
  if ( qword_140C22BD0 == a1 )
  {
LABEL_15:
    Status = 0;
    goto LABEL_16;
  }
  v4 = sub_1408018EC(a1, &v8);
  v5 = v8;
  if ( v4 >= 0 )
    v5 = a1;
  v14 = v5;
  if ( v5 <= 0 )
  {
LABEL_17:
    Status = -1073741823;
    goto LABEL_16;
  }
  FileInformation = v5;
  Status = ZwSetInformationFile(
             *(HANDLE *)&MaxDataSize,
             &IoStatusBlock,
             &FileInformation,
             8u,
             FileAllocationInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v11 = v14;
    Status = ZwSetInformationFile(*(HANDLE *)&MaxDataSize, &IoStatusBlock, &v11, 8u, FileEndOfFileInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Status = sub_1408017F8(MaxDataSize, (_DWORD)FileObject, (unsigned int)&v14, (unsigned int)&P, (__int64)&v13);
      if ( Status >= 0 )
      {
        Status = sub_140801784(P);
        if ( Status >= 0 )
        {
          qword_140C22BD0 = v14;
          sub_14081C234((PFILE_OBJECT)FileObject);
          goto LABEL_15;
        }
      }
    }
  }
LABEL_16:
  *a2 = qword_140C22BD0;
  return (unsigned int)Status;
}
