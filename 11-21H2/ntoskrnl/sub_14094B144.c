/*
 * XREFs of sub_14094B144 @ 0x14094B144
 * Callers:
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 * Callees:
 *     sub_1402D19FC @ 0x1402D19FC (sub_1402D19FC.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_140A2D760 @ 0x140A2D760 (sub_140A2D760.c)
 */

__int64 __fastcall sub_14094B144(__int64 *a1, const WCHAR *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r14d
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  void *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  wchar_t *Buffer; // rbx
  __int64 *v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  int v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+20h] [rbp-E0h]
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v32; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v35; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v36[28]; // [rsp+80h] [rbp-80h] BYREF

  v3 = a1[1];
  Handle = 0LL;
  KeyHandle = 0LL;
  v35 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v32.Length = 0LL;
  v32.Buffer = 0LL;
  v30 = 0;
  if ( *(_QWORD *)&qword_140D00AC0 )
    v5 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
  else
    v5 = 0LL;
  v6 = sub_14077FFEC(v5, v3, (__int64)a2, 0, 0x20019u, (__int64)&Handle);
  v7 = v6;
  if ( v6 == -1073741772 )
  {
LABEL_5:
    v7 = 0;
    goto LABEL_59;
  }
  if ( v6 >= 0 )
  {
    memset(v36, 0, sizeof(v36));
    v36[2] = L"ClassGuid";
    LODWORD(v36[4]) = 0x1000000;
    LODWORD(v36[1]) = 288;
    v36[3] = &UnicodeString;
    LODWORD(v36[15]) = 288;
    v36[9] = L"LocationPaths";
    LODWORD(v36[11]) = 117440512;
    v36[10] = &v32;
    v36[16] = L"Persist";
    v36[17] = &v30;
    LODWORD(v36[8]) = 304;
    LODWORD(v36[18]) = 0x4000000;
    v7 = sub_140781F40(-1073741824, (const WCHAR *)Handle, (__int64)v36, 0LL);
    if ( v7 >= 0 )
    {
      if ( !UnicodeString.Length && UnicodeString.Buffer )
        RtlFreeUnicodeString(&UnicodeString);
      if ( v32.Buffer && !sub_1402D19FC(v32.Buffer, v32.Length) )
        RtlFreeUnicodeString(&v32);
      if ( v30 )
        goto LABEL_5;
      ZwClose(Handle);
      v9 = a1[1];
      Handle = 0LL;
      if ( *(_QWORD *)&qword_140D00AC0 && (v10 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
        v11 = *(_QWORD *)(v10 + 8);
      else
        LODWORD(v11) = 0;
      LOBYTE(v8) = 1;
      sub_140A2D760(v9, (_DWORD)a2, v8, v11, v26);
      v12 = (void *)a1[3];
      if ( v12 )
      {
        DestinationString = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
          ZwDeleteValueKey(v12, &DestinationString);
      }
      v13 = a1[2];
      if ( v13 && UnicodeString.Buffer )
      {
        v14 = 0LL;
        if ( *(_QWORD *)&qword_140D00AC0 )
          v14 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
        if ( (int)sub_14077FFEC(v14, v13, (__int64)UnicodeString.Buffer, 0, 0xF003Fu, (__int64)&KeyHandle) >= 0 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
            ZwDeleteValueKey(KeyHandle, &DestinationString);
          ZwClose(KeyHandle);
        }
        if ( *(_QWORD *)&qword_140D00AC0 && (v15 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
          v16 = *(_QWORD *)(v15 + 8);
        else
          LODWORD(v16) = 0;
        sub_140A2D760(a1[2], UnicodeString.Buffer, 0, v16, v27);
      }
      Buffer = v32.Buffer;
      if ( v32.Buffer )
      {
        v18 = a1 + 4;
        if ( !a1[4] )
        {
          v19 = 0LL;
          if ( *(_QWORD *)&qword_140D00AC0 )
            v19 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
          v20 = sub_14077FFEC(v19, *a1, (__int64)L"Locations", 0, 0xF003Fu, (__int64)(a1 + 4));
          if ( v20 == -1073741772 )
          {
            *v18 = 0LL;
          }
          else if ( v20 < 0 )
          {
            v7 = v20;
            goto LABEL_59;
          }
          Buffer = v32.Buffer;
          if ( !*v18 )
            goto LABEL_59;
        }
        while ( *Buffer )
        {
          v21 = 0LL;
          if ( *(_QWORD *)&qword_140D00AC0 )
            v21 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL);
          if ( (int)sub_14077FFEC(v21, *v18, (__int64)Buffer, 0, 0xF003Fu, (__int64)&v35) >= 0 )
          {
            DestinationString = 0LL;
            if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
              ZwDeleteValueKey(v35, &DestinationString);
            ZwClose(v35);
          }
          if ( *(_QWORD *)&qword_140D00AC0 && (v22 = *(_QWORD *)(*(_QWORD *)&qword_140D00AC0 + 224LL)) != 0 )
            v23 = *(_QWORD *)(v22 + 8);
          else
            LODWORD(v23) = 0;
          sub_140A2D760(*v18, (_DWORD)Buffer, 0, v23, v28);
          v24 = -1LL;
          do
            ++v24;
          while ( Buffer[v24] );
          Buffer += v24 + 1;
        }
      }
    }
  }
LABEL_59:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v32);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v7;
}
