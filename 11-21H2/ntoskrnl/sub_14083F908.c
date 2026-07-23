/*
 * XREFs of sub_14083F908 @ 0x14083F908
 * Callers:
 *     sub_14084028C @ 0x14084028C (sub_14084028C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14041BDA0 (ZwEnumerateKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     RtlUnicodeStringToInteger @ 0x140698DE0 (RtlUnicodeStringToInteger.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_140840760 @ 0x140840760 (sub_140840760.c)
 *     sub_140840870 @ 0x140840870 (sub_140840870.c)
 */

__int64 __fastcall sub_14083F908(HANDLE KeyHandle, ULONG Index, GUID *Guid)
{
  NTSTATUS v6; // ebx
  unsigned int v7; // edx
  __int64 v8; // rax
  WCHAR v9; // cx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r9d
  WCHAR *v13; // r8
  WCHAR v14; // cx
  int v15; // eax
  char v16; // cl
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD KeyInformation[40]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[64]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR v30[64]; // [rsp+180h] [rbp+80h] BYREF

  Handle = 0LL;
  ResultLength = 0;
  Value = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0LL;
  DestinationString = 0LL;
  if ( !KeyHandle || !Guid )
    return (unsigned int)-1073741811;
  memset(KeyInformation, 0, 0x98uLL);
  v6 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
  if ( v6 >= 0 )
  {
    if ( KeyInformation[3] >= 0x80u )
    {
      v6 = -2147483643;
      goto LABEL_29;
    }
    *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
    memset(SourceString, 0, sizeof(SourceString));
    memset(v30, 0, sizeof(v30));
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(_WORD *)((char *)&KeyInformation[4] + v8 * 2);
      if ( v9 == 59 )
        break;
      SourceString[v8] = v9;
      ++v7;
      ++v8;
      if ( v7 >= 0x40 )
        goto LABEL_36;
    }
    v10 = v7;
    if ( v10 >= 64 )
      sub_140502A3C();
    v11 = v7 + 1;
    SourceString[v10] = 0;
    v12 = 0;
    if ( (unsigned int)v11 >= 0x40 )
    {
LABEL_36:
      v6 = -1073741823;
      goto LABEL_29;
    }
    v13 = (WCHAR *)&KeyInformation[4] + v11;
    while ( 1 )
    {
      v14 = *v13;
      v30[v12] = *v13;
      if ( !v14 )
        break;
      LODWORD(v11) = v11 + 1;
      ++v13;
      ++v12;
      if ( (unsigned int)v11 >= 0x40 )
        goto LABEL_36;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = RtlGUIDFromString(&DestinationString, Guid);
    if ( v6 < 0 )
      goto LABEL_29;
    RtlInitUnicodeString(&DestinationString, v30);
    v6 = RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
    if ( v6 < 0 )
      goto LABEL_29;
    LOWORD(Guid[1].Data1) = Value;
    v6 = sub_140840870((PCWSTR)&KeyInformation[4]);
    if ( v6 < 0 )
      goto LABEL_29;
    v15 = sub_140840760(Handle, &v23, (__int64)&ResultLength);
    v6 = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -1073741772 )
        goto LABEL_29;
      BYTE2(Guid[1].Data1) = -1;
    }
    else
    {
      v16 = v23;
      if ( !v23 )
        v16 = -1;
      BYTE2(Guid[1].Data1) = v16;
    }
    v17 = sub_140840760(Handle, &v26, (__int64)&ResultLength);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v18 = v26;
      if ( !v26 )
        v18 = -1LL;
      *(_QWORD *)Guid[1].Data4 = v18;
      goto LABEL_26;
    }
    if ( v17 == -1073741772 )
    {
      *(_QWORD *)Guid[1].Data4 = -1LL;
LABEL_26:
      v19 = sub_140840760(Handle, &v24, (__int64)&ResultLength);
      v6 = v19;
      if ( v19 >= 0 )
      {
        *(_DWORD *)&Guid[2].Data2 = v24;
      }
      else if ( v19 == -1073741772 )
      {
        v6 = 0;
        *(_DWORD *)&Guid[2].Data2 = 0;
      }
    }
  }
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
