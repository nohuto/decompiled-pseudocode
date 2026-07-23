/*
 * XREFs of sub_140813960 @ 0x140813960
 * Callers:
 *     sub_14081210C @ 0x14081210C (sub_14081210C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x14041D900 (ZwLoadKey.c)
 *     sub_14041D920 @ 0x14041D920 (sub_14041D920.c)
 *     ZwUnloadKey @ 0x14041F1C0 (ZwUnloadKey.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140813B50 @ 0x140813B50 (sub_140813B50.c)
 *     sub_140813BA8 @ 0x140813BA8 (sub_140813BA8.c)
 *     sub_140813D88 @ 0x140813D88 (sub_140813D88.c)
 *     sub_140813E58 @ 0x140813E58 (sub_140813E58.c)
 */

__int64 __fastcall sub_140813960(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  unsigned int i; // esi
  HANDLE v6; // rdi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-D8h]
  __int64 v13; // [rsp+28h] [rbp-D0h]
  __int64 v14; // [rsp+30h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+70h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  UNICODE_STRING v19; // [rsp+B0h] [rbp-48h] BYREF

  memset(&SourceFile, 0, 44);
  memset(&ObjectAttributes, 0, 44);
  v14 = 0LL;
  v19 = 0LL;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    v6 = 0LL;
    Handle = 0LL;
    if ( (unsigned __int8)sub_140813E58(a2) )
    {
      v7 = sub_140813D88(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
      v8 = v7;
      if ( v7 < 0 )
      {
        sub_1408138F0(4LL, L"Failed open key %ws. Status: %x", L"\\Registry\\Machine", (unsigned int)v7);
        v6 = Handle;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        ObjectAttributes.Length = 48;
        v6 = Handle;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RtlInitUnicodeString(&v19, (PCWSTR)(a2 + 12));
        SourceFile.Length = 48;
        SourceFile.RootDirectory = 0LL;
        SourceFile.Attributes = 576;
        SourceFile.ObjectName = &v19;
        *(_OWORD *)&SourceFile.SecurityDescriptor = 0LL;
        v9 = sub_140813BA8(18LL, &v14);
        v8 = v9;
        if ( v9 < 0 )
        {
          sub_1408138F0(
            4LL,
            L"Failed to acquire permissions to load hive. Status: %x",
            L"\\Registry\\Machine",
            (unsigned int)v9);
        }
        else
        {
          v8 = sub_14041D920((__int64)&ObjectAttributes, (__int64)&SourceFile);
          if ( v8 < 0 )
            v8 = sub_14041D920((__int64)&ObjectAttributes, (__int64)&SourceFile);
          if ( v8 < 0 )
            v8 = ZwLoadKey(&ObjectAttributes, &SourceFile);
          sub_140813B50(&v14);
          if ( v8 < 0 )
          {
            v11 = 2LL;
            if ( v8 != -1073741790 )
              v11 = 4LL;
            LODWORD(v13) = v8;
            sub_1408138F0(
              v11,
              L"Failed load key %ws. Flags: 0x%x File: %s Status: %x",
              SourceString,
              576LL,
              a2 + 12,
              v13,
              v14);
          }
          else
          {
            v8 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
            if ( v8 < 0 )
            {
              sub_140813BA8(17LL, &v14);
              ZwUnloadKey(&ObjectAttributes);
              sub_140813B50(&v14);
              LODWORD(v12) = v8;
              sub_1408138F0(4LL, L"Failed open newly loaded key %ws. Flags: 0x%x Status: %x", SourceString, 576LL, v12);
            }
          }
        }
      }
    }
    else
    {
      v8 = -1073741809;
    }
    if ( v6 )
      ZwClose(v6);
    if ( v8 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)v8;
}
