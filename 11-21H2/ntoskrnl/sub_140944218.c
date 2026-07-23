/*
 * XREFs of sub_140944218 @ 0x140944218
 * Callers:
 *     IoGetDriverDirectory @ 0x140943930 (IoGetDriverDirectory.c)
 * Callees:
 *     sub_1402D1840 @ 0x1402D1840 (sub_1402D1840.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406DF520 @ 0x1406DF520 (sub_1406DF520.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140769784 @ 0x140769784 (sub_140769784.c)
 *     sub_140944390 @ 0x140944390 (sub_140944390.c)
 */

__int64 __fastcall sub_140944218(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  void *v6; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-18h] BYREF

  v11 = 0LL;
  DestinationString = 0LL;
  v6 = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v8 = sub_1406DF520(
         L"Win32ServiceStateRoot",
         L"\\SystemRoot\\ServiceState",
         LocationTypeFileSystem,
         &DestinationString);
  if ( v8 >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a2 + 2 * v9) );
    if ( DestinationString.Length
       + (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 24LL)
       + 4
       + 2 * (_DWORD)v9 <= 0xFFFE )
    {
      v8 = sub_140769784(
             (__int64)&UnicodeString,
             DestinationString.Length + *(_WORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 4 + 2 * (unsigned __int16)v9);
      if ( v8 >= 0 )
      {
        v8 = sub_1402D1840(
               (__int64)&UnicodeString,
               0LL,
               2048,
               L"%wZ\\%wZ\\%ws",
               &DestinationString,
               *(_QWORD *)(a1 + 48) + 24LL,
               a2);
        if ( v8 >= 0 )
        {
          v8 = sub_140944390(&DestinationString, &UnicodeString, (__int64)&v11);
          if ( v8 < 0 )
            v6 = (void *)v11;
          else
            *a4 = v11;
        }
      }
    }
    else
    {
      v8 = -2147483643;
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)v8;
}
