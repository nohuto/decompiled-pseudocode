/*
 * XREFs of sub_1408264C0 @ 0x1408264C0
 * Callers:
 *     sub_140826270 @ 0x140826270 (sub_140826270.c)
 * Callees:
 *     sub_1402201F8 @ 0x1402201F8 (sub_1402201F8.c)
 *     sub_1402D17BC @ 0x1402D17BC (sub_1402D17BC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_14095BFCC @ 0x14095BFCC (sub_14095BFCC.c)
 *     sub_14095D488 @ 0x14095D488 (sub_14095D488.c)
 */

__int64 __fastcall sub_1408264C0(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // eax
  int v6; // ebx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // r9
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = 1;
  if ( (*(_DWORD *)(a1 + 492) & 1) == 0
    || (v5 = sub_14077FFEC(0LL, a2, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&Handle),
        v6 = v5,
        v5 == -1073741772) )
  {
    v6 = 0;
    goto LABEL_4;
  }
  if ( v5 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 64);
    if ( (v8 & 1) == 0 && sub_1402201F8() )
      v4 = 3;
    if ( (v8 & 8) == 0 )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, L"\\SystemRoot") )
      {
LABEL_13:
        v6 = -1073741670;
        goto LABEL_4;
      }
LABEL_18:
      v10 = sub_14095BFCC(a1, &v13);
      v11 = v13;
      if ( v10 < 0 )
        v11 = 0LL;
      v6 = sub_14095D488(a2, v4, &DestinationString, v11);
      goto LABEL_4;
    }
    v9 = *(unsigned __int16 *)(a1 + 18) + 38;
    if ( v9 > 0xFFFE )
    {
      v6 = -2147483643;
      goto LABEL_4;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v9;
    DestinationString.Buffer = (wchar_t *)sub_1406BE560(v9);
    if ( !DestinationString.Buffer )
      goto LABEL_13;
    v6 = sub_1402D17BC(&DestinationString, L"%ws\\%wZ", L"\\DriverStore\\Nodes", a1 + 16);
    if ( v6 >= 0 )
      goto LABEL_18;
  }
LABEL_4:
  RtlFreeUnicodeString(&DestinationString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
