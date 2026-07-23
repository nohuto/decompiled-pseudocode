/*
 * XREFs of sub_1406D2D00 @ 0x1406D2D00
 * Callers:
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 * Callees:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140206FA0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402A2094 @ 0x1402A2094 (sub_1402A2094.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_140742D8C @ 0x140742D8C (sub_140742D8C.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406D2D00(UNICODE_STRING *a1, int a2, ULONG a3, ULONG a4)
{
  _BYTE *v8; // r15
  char v9; // si
  WCHAR *v10; // rdi
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
  __int64 *v23; // [rsp+100h] [rbp+0h]
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
  v8 = qword_140D3CAF8;
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
      && (int)sub_140742D8C(FileHandle) >= 0 )
    {
      if ( (int)SeConvertSecurityDescriptorToStringSecurityDescriptor(v16, 1LL, 12LL, &v17, &v15) >= 0 )
      {
        SeCaptureSubjectContext(&SubjectContext);
        PrimaryToken = SubjectContext.PrimaryToken;
        v9 = 1;
        if ( SubjectContext.ClientToken )
          PrimaryToken = SubjectContext.ClientToken;
        sub_14066A374((__int64)PrimaryToken, v21, 0x44u, 0LL);
        v8 = v21;
      }
      v10 = (WCHAR *)v17;
    }
    if ( (unsigned int)dword_140C03868 > 3 && sub_1402A2000((__int64)&dword_140C03868, 0x200000000008LL) )
    {
      v15 = -1073741790;
      v30 = &v15;
      v31 = 4LL;
      sub_1402A2094((__int64)v32, v10);
      v14 = (unsigned __int8)v8[1];
      v33 = v8;
      v35 = 0;
      v16 = 0x1000000LL;
      v37 = 8LL;
      v34 = 4 * v14 + 8;
      v36 = &v16;
      sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&dword_140029D24, 0LL, 0LL, 6u, &v29);
    }
    if ( v9 )
      SeReleaseSubjectContext(&SubjectContext);
    goto LABEL_22;
  }
  if ( (unsigned int)dword_140C03868 <= 3 )
    return;
  if ( sub_1402A2000((__int64)&dword_140C03868, 0x200000000008LL) )
  {
    v16 = 1LL;
    v23 = &v16;
    v24 = 8LL;
    v25 = &v15;
    v15 = a2;
    v27 = &v17;
    v26 = 4LL;
    v17 = 0x1000000LL;
    v28 = 8LL;
    sub_1402A1A20(
      (__int64)&dword_140C03868,
      (unsigned __int8 *)&dword_140029CCC,
      v11,
      5u,
      (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
    v12 = dword_140C03868;
  }
  if ( v12 > 3 && sub_1402A2000((__int64)&dword_140C03868, 8LL) )
  {
    v15 = a2;
    v23 = (__int64 *)&v15;
    v24 = 4LL;
    sub_14020A9C4(
      (__int64)&dword_140C03868,
      (unsigned __int8 *)&dword_140029C92 + 3,
      0LL,
      0LL,
      3u,
      (PEVENT_DATA_DESCRIPTOR)&SubjectContext);
LABEL_22:
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
}
