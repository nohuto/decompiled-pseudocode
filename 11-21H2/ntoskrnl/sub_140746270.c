/*
 * XREFs of sub_140746270 @ 0x140746270
 * Callers:
 *     sub_1407449E0 @ 0x1407449E0 (sub_1407449E0.c)
 * Callees:
 *     sub_14025D12C @ 0x14025D12C (sub_14025D12C.c)
 *     sub_1402D1DA4 @ 0x1402D1DA4 (sub_1402D1DA4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140745620 @ 0x140745620 (sub_140745620.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_1407472EC @ 0x1407472EC (sub_1407472EC.c)
 *     sub_1407474E4 @ 0x1407474E4 (sub_1407474E4.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     NetpGetPrivilege @ 0x14093FF38 (NetpGetPrivilege.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140746270(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, __int64 *a6)
{
  wchar_t *i; // rsi
  int v9; // ebx
  int v10; // ecx
  __int64 Pool2; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rax
  PVOID *v14; // rsi
  int v15; // eax
  int v16; // ecx
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v22; // rax
  int v23; // ecx
  char v24; // al
  char v25; // [rsp+40h] [rbp-C0h] BYREF
  char v26; // [rsp+41h] [rbp-BFh] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v29; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v30; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+84h] [rbp-7Ch]
  HANDLE KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v36; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v38; // [rsp+D0h] [rbp-30h]
  _QWORD v39[28]; // [rsp+E0h] [rbp-20h] BYREF

  v38 = a6;
  v33 = a4;
  v27 = -16777216;
  v34 = a3;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  i = 0LL;
  Handle = 0LL;
  v26 = 0;
  *(_QWORD *)&v36.Length = 0LL;
  v36.Buffer = 0LL;
  v25 = 0;
  v32 = 0LL;
  KeyHandle = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v9 = sub_140745620((int)SourceString, (__int64)&UnicodeString);
  if ( v9 < 0 )
    goto LABEL_41;
  v9 = sub_14077C924(qword_140D00AC0, UnicodeString.Buffer, 8, 131097, 0, (__int64)&Handle);
  if ( v9 < 0 )
    goto LABEL_41;
  memset(v39, 0, 0xC8uLL);
  v39[0] = qword_14000FDD8;
  v39[2] = &v26;
  v39[5] = qword_14000FDC0;
  v39[7] = &v36;
  LODWORD(v39[1]) = 17;
  LODWORD(v39[3]) = 1;
  LODWORD(v39[6]) = 8210;
  HIDWORD(v39[8]) = 6;
  v9 = sub_140746CCC(v10, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v39, 2);
  if ( v9 < 0 )
    goto LABEL_41;
  if ( SLODWORD(v39[4]) >= 0 && v26 == -1 )
  {
    v9 = -1073741738;
    goto LABEL_41;
  }
  if ( SLODWORD(v39[9]) >= 0 && v36.Buffer && v36.Length > 2u )
  {
    for ( i = v36.Buffer; *i; i += v22 + 1 )
    {
      if ( (unsigned __int8)NetpGetPrivilege(i) )
        break;
      v22 = -1LL;
      do
        ++v22;
      while ( i[v22] );
    }
    if ( !*i )
      goto LABEL_60;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_60:
    v9 = -1073740764;
    goto LABEL_41;
  }
  Pool2 = ExAllocatePool2(256LL, 416LL, 1667526736LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_41;
  }
  v13 = (_QWORD *)(Pool2 + 224);
  v13[1] = v13;
  *v13 = v13;
  *(_QWORD *)(v12 + 216) = v12 + 208;
  *(_QWORD *)(v12 + 208) = v12 + 208;
  *(_QWORD *)(v12 + 376) = v12 + 368;
  *(_QWORD *)(v12 + 368) = v12 + 368;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString)
    || !sub_1402D1DA4(v12 + 56, (__int64)&UnicodeString)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 128), i) )
  {
    v9 = -1073741670;
    goto LABEL_65;
  }
  memset(v39, 0, 0xC8uLL);
  v39[0] = qword_14000FDA8;
  LODWORD(v39[1]) = 16;
  v39[5] = qword_14000FD90;
  v39[2] = v12 + 112;
  v39[7] = v12 + 120;
  LODWORD(v39[3]) = 8;
  v39[10] = &qword_14000FD78;
  v14 = (PVOID *)(v12 + 144);
  LODWORD(v39[8]) = 8;
  v39[12] = &v27;
  v39[15] = qword_14000FD60;
  v39[20] = qword_14000FD48;
  HIDWORD(v39[23]) = 2;
  LODWORD(v39[6]) = 9;
  LODWORD(v39[11]) = 7;
  LODWORD(v39[13]) = 4;
  LODWORD(v39[16]) = 13;
  v39[17] = v12 + 188;
  LODWORD(v39[18]) = 16;
  LODWORD(v39[21]) = 4109;
  v39[22] = v12 + 144;
  v9 = sub_140746CCC(16, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v39, 5);
  if ( v9 < 0 )
  {
LABEL_65:
    sub_1407474E4((PVOID)v12);
    goto LABEL_41;
  }
  if ( SLODWORD(v39[4]) < 0 )
    *(_QWORD *)(v12 + 112) = 0LL;
  if ( SLODWORD(v39[9]) < 0 )
    *(_QWORD *)(v12 + 120) = 0LL;
  v15 = v27;
  if ( SLODWORD(v39[14]) < 0 )
    v15 = -16777216;
  v27 = v15;
  if ( SLODWORD(v39[19]) < 0 )
    *(_OWORD *)(v12 + 188) = 0LL;
  if ( SLODWORD(v39[24]) >= 0 )
  {
    if ( (v39[23] & 0xF) != 0 )
    {
      ExFreePoolWithTag(*v14, 0);
      *v14 = 0LL;
    }
    else
    {
      *(_DWORD *)(v12 + 152) = LODWORD(v39[23]) >> 4;
    }
  }
  else
  {
    *v14 = 0LL;
  }
  if ( (a5 & 4) != 0 )
    v16 = -1;
  else
    v16 = (unsigned __int16)v34 | v33 & 0xFF0000 | v27 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  *(_DWORD *)(v12 + 108) = v16;
  if ( (a5 & 2) != 0 )
  {
    memset(v39, 0, 0xC8uLL);
    v39[0] = qword_140017238;
    v39[2] = &v25;
    LODWORD(v39[1]) = 17;
    LODWORD(v39[3]) = 1;
    v9 = sub_140746CCC(v23, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v39, 1);
    if ( v9 < 0 )
      goto LABEL_65;
    v24 = v25;
    if ( SLODWORD(v39[4]) < 0 )
      v24 = 0;
    v25 = v24;
    if ( v24 == -1 )
      *(_DWORD *)(v12 + 184) |= 2u;
  }
  *(_DWORD *)&v32.Length = 1572886;
  v32.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v32;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v9 = v17;
  if ( v17 == -1073741772 )
    goto LABEL_77;
  if ( v17 < 0 )
    goto LABEL_65;
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 72);
  v18 = ZwOpenKey(&v30, 0x20019u, &ObjectAttributes);
  v9 = v18;
  if ( v18 == -1073741772 )
  {
LABEL_77:
    v9 = 0;
  }
  else
  {
    if ( v18 < 0 )
      goto LABEL_65;
    memset(v39, 0, sizeof(v39));
    v39[2] = L"Configuration";
    LODWORD(v39[4]) = 0x1000000;
    v39[3] = v12 + 88;
    LODWORD(v39[1]) = 288;
    v9 = sub_140781F40(3221225472LL, v30, v39, 0LL);
    if ( v9 < 0 )
      goto LABEL_65;
    if ( !*(_WORD *)(v12 + 88) && *(_QWORD *)(v12 + 96) )
      RtlFreeUnicodeString((PUNICODE_STRING)(v12 + 88));
  }
  v19 = *(_QWORD *)(v12 + 96);
  if ( v19 )
  {
    v20 = sub_1407472EC(Handle, v19, &v29);
    v9 = v20;
    if ( v20 != -1073741772 )
    {
      if ( v20 >= 0 )
      {
        memset(v39, 0, sizeof(v39));
        v39[0] = sub_14094CFC0;
        v39[2] = L"DriverDate";
        v39[7] = sub_14094CFC0;
        v39[9] = L"DriverVersion";
        v39[3] = v12 + 112;
        v39[10] = v12 + 120;
        LODWORD(v39[18]) = 117440512;
        v39[16] = L"ExcludeIds";
        v39[17] = v12 + 160;
        LODWORD(v39[15]) = 304;
        v9 = sub_140781F40(3221225472LL, v29, v39, 0LL);
        if ( v9 >= 0 )
        {
          if ( *(_WORD *)(v12 + 160) <= 2u && *(_QWORD *)(v12 + 168) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v12 + 160));
          goto LABEL_39;
        }
      }
      goto LABEL_65;
    }
    v9 = 0;
  }
LABEL_39:
  if ( byte_140C097C4 )
  {
    *(_DWORD *)&v32.Length = 1572886;
    v32.Buffer = L"ConfigFlags";
    if ( !v29 || !sub_14025D12C(v29, &v32) )
      *(_DWORD *)(v12 + 184) |= 4u;
  }
  *(_QWORD *)(v12 + 16) = Handle;
  *(_QWORD *)(v12 + 24) = v30;
  *(_QWORD *)(v12 + 32) = v29;
  Handle = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  *v38 = v12;
LABEL_41:
  if ( Handle )
    ZwClose(Handle);
  if ( v30 )
    ZwClose(v30);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v29 )
    ZwClose(v29);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v36);
  return (unsigned int)v9;
}
