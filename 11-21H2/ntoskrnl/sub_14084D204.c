/*
 * XREFs of sub_14084D204 @ 0x14084D204
 * Callers:
 *     sub_14084CCD8 @ 0x14084CCD8 (sub_14084CCD8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403D06E8 @ 0x1403D06E8 (sub_1403D06E8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406A0F30 @ 0x1406A0F30 (sub_1406A0F30.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_1407B0FE0 @ 0x1407B0FE0 (sub_1407B0FE0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14084D204()
{
  unsigned int v0; // edi
  wchar_t *Buffer; // r13
  unsigned int i; // ebx
  int v3; // esi
  unsigned int v4; // ebx
  char v5; // r14
  UNICODE_STRING *v6; // rsi
  char *v8; // r14
  __int64 Pool2; // rax
  void *v10; // r15
  HANDLE v11; // rcx
  HANDLE Handle; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v14; // [rsp+48h] [rbp-49h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-41h]
  int v16; // [rsp+58h] [rbp-39h]
  int v17; // [rsp+5Ch] [rbp-35h]
  __int128 v18; // [rsp+60h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  WCHAR SourceString[32]; // [rsp+80h] [rbp-11h] BYREF

  v13[1] = 0;
  DestinationString = 0LL;
  v17 = 0;
  v0 = 0;
  Handle = 0LL;
  sub_1403D06E8(SourceString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  Buffer = DestinationString.Buffer;
  for ( i = 0; i < 0x1A; ++i )
  {
    v13[0] = 48;
    Buffer[12] = i + 65;
    v14 = 0LL;
    p_DestinationString = &DestinationString;
    v16 = 576;
    v18 = 0LL;
    v3 = sub_1406A0F30((unsigned __int64)&Handle, 1, (__int64)v13);
    if ( v3 >= 0 )
    {
      *((_WORD *)&unk_140D3D8A0 + 12 * v0) = Buffer[12];
      v8 = (char *)&unk_140D3D8A0 + 24 * v0;
      Pool2 = ExAllocatePool2(256LL, 256LL, 1799447891LL);
      v10 = (void *)Pool2;
      if ( !Pool2 )
        return 3221225495LL;
      v11 = Handle;
      *((_DWORD *)v8 + 2) = 0x1000000;
      *((_QWORD *)v8 + 2) = Pool2;
      v3 = sub_1407B0FE0(v11, (unsigned __int64)(v8 + 8), 0LL);
      NtClose(Handle);
      if ( v3 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        RtlInitUnicodeString((PUNICODE_STRING)(v8 + 8), 0LL);
      }
      else
      {
        ++v0;
      }
    }
  }
  if ( v3 == -1073741801 )
    return 3221225495LL;
  v4 = 0;
  while ( v4 < v0 )
  {
    v13[0] = 48;
    v14 = 0LL;
    v5 = 0;
    v16 = 576;
    v18 = 0LL;
    v6 = (UNICODE_STRING *)((char *)&unk_140D3D8A0 + 16 * v4 + 8 * v4 + 8);
    p_DestinationString = v6;
    if ( (int)sub_1406A0F30((unsigned __int64)&Handle, 1, (__int64)v13) >= 0 )
    {
      if ( (int)sub_1407B0FE0(Handle, (unsigned __int64)v6, 0LL) < 0 )
      {
        ExFreePoolWithTag(v6->Buffer, 0);
        RtlInitUnicodeString(v6, 0LL);
      }
      else
      {
        v5 = 1;
      }
      NtClose(Handle);
      if ( v5 )
        continue;
    }
    ++v4;
  }
  return 0LL;
}
