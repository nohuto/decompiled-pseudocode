/*
 * XREFs of sub_140A139FC @ 0x140A139FC
 * Callers:
 *     sub_140A13764 @ 0x140A13764 (sub_140A13764.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140A13628 @ 0x140A13628 (sub_140A13628.c)
 *     sub_140A1392C @ 0x140A1392C (sub_140A1392C.c)
 *     sub_140A14374 @ 0x140A14374 (sub_140A14374.c)
 *     sub_140A1483C @ 0x140A1483C (sub_140A1483C.c)
 *     sub_140A14ECC @ 0x140A14ECC (sub_140A14ECC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A139FC(__int64 a1, _QWORD *a2, int *a3, int *a4, _WORD *a5, int a6)
{
  __int64 v11; // rbx
  wchar_t *v12; // r12
  __int64 (**v13)[6]; // r8
  unsigned int v14; // edx
  __int64 *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // r15d
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  unsigned __int16 v23; // r15
  wchar_t *v24; // rax
  __int64 v25; // rdx
  wchar_t *Buffer; // rdi
  int v27; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-9h] BYREF
  int v33; // [rsp+E8h] [rbp+77h]

  a6 = 0;
  v27 = 0;
  KeyHandle = 0LL;
  LODWORD(v11) = 0;
  v12 = 0LL;
  Destination = 0LL;
  Source = 0LL;
  if ( !a5 )
    return 0LL;
  *a5 = 0;
  v13 = &off_140C09210;
  v14 = 0;
  while ( 1 )
  {
    v15 = (__int64 *)*v13;
    v16 = (**v13)[0] - *a2;
    if ( !v16 )
      v16 = v15[1] - a2[1];
    if ( !v16 )
      break;
    ++v14;
    v13 += 3;
    if ( v14 >= 3 )
      goto LABEL_7;
  }
  v13 = (__int64 (**)[6])*((unsigned int *)&off_140C09210 + 6 * (int)v14 + 4);
  v18 = *((_DWORD *)&off_140C09210 + 6 * (int)v14 + 2);
  v19 = *((_DWORD *)&off_140C09210 + 6 * (int)v14 + 3);
  a6 = v18;
  v33 = v19;
  if ( !(_DWORD)v13 )
  {
LABEL_7:
    if ( (int)sub_140A1483C(&Source, a2, v13) >= 0
      && (v23 = Source.Length + 184,
          v24 = (wchar_t *)sub_14075B444(v17, (unsigned int)Source.Length + 184),
          (v12 = v24) != 0LL) )
    {
      Destination.MaximumLength = v23;
      Destination.Buffer = v24;
      Destination.Length = 0;
      RtlAppendUnicodeToString(
        &Destination,
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\InstalledSDB");
      RtlAppendUnicodeToString(&Destination, &dword_1400126A8);
      RtlAppendUnicodeStringToString(&Destination, &Source);
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &Destination;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes) >= 0 )
      {
        if ( a3 )
        {
          if ( (int)sub_140A14ECC(&a6, KeyHandle, &qword_14000ACB8) < 0 )
          {
            sub_1406E0C3C(1LL, (__int64)"SdbResolveDatabaseEx");
            *a3 = 0;
            goto LABEL_36;
          }
          *a3 = a6 & 0x7FFFFFFF;
        }
        if ( a4 )
        {
          if ( (int)sub_140A14ECC(&v27, KeyHandle, L".0") < 0 )
          {
            sub_1406E0C3C(1LL, (__int64)"SdbResolveDatabaseEx");
            *a4 = 0;
            goto LABEL_36;
          }
          *a4 = v27;
        }
        if ( sub_140A1392C((int)a5, v25, (__int64)a2, a1 + 576) )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( a5[v11] );
        }
        else
        {
          sub_1406E0C3C(1LL, (__int64)"SdbResolveDatabaseEx");
        }
        goto LABEL_36;
      }
      sub_1406E0C3C(1LL, (__int64)"SdbResolveDatabaseEx");
    }
    else
    {
      sub_1406E0C3C(1LL, (__int64)"SdbResolveDatabaseEx");
    }
LABEL_36:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x74705041u);
    Buffer = Source.Buffer;
    if ( Source.Buffer )
    {
      memset(Source.Buffer, 66, Source.MaximumLength);
      ExFreePoolWithTag(Buffer, 0x74705041u);
    }
    return (unsigned int)v11;
  }
  if ( (int)sub_140A14374((_DWORD)a5, v14, (_DWORD)v13, (_DWORD)v15, 0LL, a1 + 576) < 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbResolveDatabaseEx");
  }
  else
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a5[v11] );
  }
  if ( a3 )
    *a3 = v18;
  if ( a4 )
  {
    v21 = sub_140A13628(v20);
    *a4 = v21;
    if ( v33 )
      *a4 = v21 & 0x1B;
  }
  return (unsigned int)v11;
}
