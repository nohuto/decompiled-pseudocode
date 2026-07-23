/*
 * XREFs of CmpLogHiveFileInaccessible @ 0x14068F4C0
 * Callers:
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 * Callees:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x14020BC70 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140212E94 (_tlgWriteAgg.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402F6E74 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14041B750 (ZwOpenFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14068C0AC (CmpQueryFileSecurityDescriptor.c)
 *     SeQueryUserSidToken @ 0x140715010 (SeQueryUserSidToken.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLogHiveFileInaccessible(UNICODE_STRING *a1, int a2, ULONG a3, ULONG a4)
{
  _BYTE *v8; // r15
  char v9; // si
  size_t *v10; // rdi
  __int64 v11; // r8
  unsigned int v12; // r9d
  PACCESS_TOKEN PrimaryToken; // rcx
  int v14; // eax
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v21[80]; // [rsp+90h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-20h] BYREF
  int *v23; // [rsp+100h] [rbp+0h]
  __int64 v24; // [rsp+108h] [rbp+8h]
  int *v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]
  __int64 *v27; // [rsp+120h] [rbp+20h]
  __int64 v28; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+130h] [rbp+30h] BYREF
  int *v30; // [rsp+150h] [rbp+50h]
  __int64 v31; // [rsp+158h] [rbp+58h]
  _BYTE v32[16]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE *v33; // [rsp+170h] [rbp+70h]
  int v34; // [rsp+178h] [rbp+78h]
  int v35; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v36; // [rsp+180h] [rbp+80h]
  __int64 v37; // [rsp+188h] [rbp+88h]

  memset(v21, 0, 0x44uLL);
  v8 = SeNullSid;
  v16 = 0LL;
  v9 = 0;
  FileHandle = 0LL;
  v10 = 0LL;
  v17 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a2 == -1073741790 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0x20000u, &ObjectAttributes, &IoStatusBlock, a4, a3) >= 0
      && (int)CmpQueryFileSecurityDescriptor(FileHandle, (struct _PRIVILEGE_SET **)&v16) >= 0 )
    {
      if ( (int)SeConvertSecurityDescriptorToStringSecurityDescriptor(v16, 1LL, 12LL, &v17, &v15) >= 0 )
      {
        SeCaptureSubjectContext(&SubjectContext);
        PrimaryToken = SubjectContext.PrimaryToken;
        v9 = 1;
        if ( SubjectContext.ClientToken )
          PrimaryToken = SubjectContext.ClientToken;
        SeQueryUserSidToken(PrimaryToken, v21, 68LL, 0LL);
        v8 = v21;
      }
      v10 = (size_t *)v17;
    }
    if ( (unsigned int)dword_140C04390 > 3 && tlgKeywordOn((__int64)&dword_140C04390, 0x200000000008LL) )
    {
      v15 = -1073741790;
      v30 = &v15;
      v31 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v32, v10);
      v14 = (unsigned __int8)v8[1];
      v33 = v8;
      v35 = 0;
      v16 = 0x1000000LL;
      v37 = 8LL;
      v34 = 4 * v14 + 8;
      v36 = &v16;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04390,
        (unsigned __int8 *)byte_1400379A3,
        0LL,
        0LL,
        6u,
        &v29);
    }
    if ( v9 )
      SeReleaseSubjectContext(&SubjectContext);
    goto LABEL_22;
  }
  if ( (unsigned int)dword_140C04390 > 3 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C04390, 0x200000000008LL) )
    {
      v16 = 1LL;
      v23 = (int *)&v16;
      v24 = 8LL;
      v25 = &v15;
      v15 = a2;
      v27 = &v17;
      v26 = 4LL;
      v17 = 0x1000000LL;
      v28 = 8LL;
      tlgWriteAgg(
        (__int64)&dword_140C04390,
        (unsigned __int8 *)&byte_140037A41,
        v11,
        5u,
        (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
      v12 = dword_140C04390;
    }
    if ( v12 > 3 && tlgKeywordOn((__int64)&dword_140C04390, 8LL) )
    {
      v15 = a2;
      v23 = &v15;
      v24 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04390,
        (unsigned __int8 *)word_140037A0A,
        0LL,
        0LL,
        3u,
        (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
LABEL_22:
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
}
