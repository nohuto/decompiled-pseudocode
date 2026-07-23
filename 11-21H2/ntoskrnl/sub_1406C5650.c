/*
 * XREFs of sub_1406C5650 @ 0x1406C5650
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406C5724 @ 0x1406C5724 (sub_1406C5724.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

char __fastcall sub_1406C5650(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  char v7; // di
  PCUNICODE_STRING v8; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v11 = 0;
  DestinationString = 0LL;
  if ( !*(_BYTE *)(a4 + 8) || (int)sub_1406C5724(a1, a2, &v11) >= 0 && v11 )
  {
    v8 = *(PCUNICODE_STRING *)a4;
    if ( !*(_QWORD *)a4
      || v8->Length < 2u
      || !*v8->Buffer
      || RtlInitUnicodeStringEx(&DestinationString, a2) >= 0
      && RtlPrefixUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
    {
      v7 = 1;
      if ( *(_QWORD *)(a4 + 16) )
        return sub_14042A5E0(a1, a2);
    }
  }
  return v7;
}
