/*
 * XREFs of sub_140917A40 @ 0x140917A40
 * Callers:
 *     sub_140917F4C @ 0x140917F4C (sub_140917F4C.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14041C2E0 (ZwSetInformationObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     RtlAppendStringToString @ 0x1406E24E0 (RtlAppendStringToString.c)
 *     sub_14070AAD0 @ 0x14070AAD0 (sub_14070AAD0.c)
 *     sub_140917DC4 @ 0x140917DC4 (sub_140917DC4.c)
 *     sub_140917E18 @ 0x140917E18 (sub_140917E18.c)
 *     sub_1409180B0 @ 0x1409180B0 (sub_1409180B0.c)
 *     sub_14091D570 @ 0x14091D570 (sub_14091D570.c)
 *     sub_1409220A0 @ 0x1409220A0 (sub_1409220A0.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4C18 @ 0x140AB4C18 (sub_140AB4C18.c)
 */

__int64 __fastcall sub_140917A40(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  wchar_t *v3; // rdi
  int v4; // esi
  void *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  int v16; // ebx
  void *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rcx
  unsigned int ObjectInformation; // [rsp+50h] [rbp-B0h] BYREF
  char FileInformation[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  int v29[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v33[3]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v34[432]; // [rsp+D0h] [rbp-30h] BYREF
  char v35; // [rsp+280h] [rbp+180h] BYREF

  v1 = a1;
  FileInformation[0] = 1;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v30 = 0LL;
  ObjectInformation = 0;
  DestinationString = 0LL;
  *(_QWORD *)v29 = 0LL;
  v27 = 0;
  IoStatusBlock = 0LL;
  memset(v33, 0, sizeof(v33));
  memset(v34, 0, sizeof(v34));
  v2 = 23 * v1;
  v3 = off_140C02530[v2 + 6];
  if ( !dword_140C54900 )
    return (unsigned int)-1073741431;
  *(_DWORD *)&Destination.Length = 0x800000;
  Destination.Buffer = &v35;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, off_140C02530[v2]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v5 = (void *)*((_QWORD *)v3 + 196);
  if ( v5 )
  {
    v4 = sub_14091D570(v5, 0LL, 1);
    if ( v4 >= 0 )
    {
      Destination.Length -= 8;
      *((_QWORD *)v3 + 196) = 0LL;
      if ( (int)sub_140917E18(v3, off_140C02530[v2]) >= 0 )
      {
        sub_140AB4550(v33);
        sub_140AB4370(v7, v6, v8);
        sub_140AB41FC(v3);
        if ( (int)sub_1409220A0(v3, &ObjectInformation, v29, &v27) < 0
          || (v10 = *(_QWORD *)v29, (int)sub_140AB4C18(v3, v9, *(_QWORD *)v29) < 0) )
        {
          sub_140AB41E0(v3);
          sub_140AB4260(v20, v19, v21, v22);
          sub_140AB4580(v33);
        }
        else
        {
          sub_140AB41E0(v3);
          sub_140AB4260(v12, v11, v13, v14);
          sub_140AB4580(v33);
          v16 = sub_1409180B0(v15, ObjectInformation, v10, v27, *((HANDLE *)v3 + 196));
          sub_140917DC4(ObjectInformation, v10);
          if ( v16 >= 0 )
          {
            v17 = (void *)*((_QWORD *)v3 + 196);
            LOWORD(ObjectInformation) = 0;
            ZwSetInformationObject(v17, ObjectHandleFlagInformation, &ObjectInformation, 2u);
            ZwClose(*((HANDLE *)v3 + 196));
            *((_QWORD *)v3 + 196) = 0LL;
            LOBYTE(ObjectInformation) = 0;
            v4 = sub_14070AAD0((int)&Destination, 0, (int)&ObjectInformation, (__int64)&v30, 17367041, 0, 0LL, 0LL, v34);
            if ( v4 >= 0 )
            {
              v18 = v30;
              *((_QWORD *)v3 + 196) = *(_QWORD *)(v30 + 1544);
              *(_QWORD *)(v18 + 1544) = 0LL;
              sub_140AB4550(v33);
              sub_14065A7E0(v18);
              sub_140AB4580(v33);
              ZwSetInformationFile(v5, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
              LOWORD(ObjectInformation) = 0;
              ZwSetInformationObject(v5, ObjectHandleFlagInformation, &ObjectInformation, 2u);
              ZwClose(v5);
              return (unsigned int)v4;
            }
          }
        }
      }
      v23 = (void *)*((_QWORD *)v3 + 196);
      if ( v23 )
      {
        LOWORD(ObjectInformation) = 0;
        ZwSetInformationObject(v23, ObjectHandleFlagInformation, &ObjectInformation, 2u);
        ZwClose(*((HANDLE *)v3 + 196));
        *((_QWORD *)v3 + 196) = 0LL;
      }
      v4 = sub_14091D570(v5, 0LL, 1);
      if ( v4 >= 0 )
        *((_QWORD *)v3 + 196) = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v4;
}
