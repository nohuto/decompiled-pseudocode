/*
 * XREFs of sub_1406A9C60 @ 0x1406A9C60
 * Callers:
 *     sub_1406A9B40 @ 0x1406A9B40 (sub_1406A9B40.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1406A9C60(__int64 a1, const UNICODE_STRING *a2, __int64 a3, char a4)
{
  BOOLEAN v5; // bp
  __int64 **v7; // rdi
  __int64 *v8; // rbx
  __int64 result; // rax

  v5 = (a4 & 0x40) != 0;
  v7 = (__int64 **)(a1 + 8LL * *(unsigned __int8 *)(a3 + 20));
  v8 = *v7;
  if ( !*v7 )
    return 0LL;
  do
  {
    if ( *((_DWORD *)v8 + 4) == *(_DWORD *)(a3 + 16)
      && RtlEqualUnicodeString(
           a2,
           (PCUNICODE_STRING)(v8[1] - 48 - byte_140C25440[*(_BYTE *)(v8[1] - 48 + 26) & 3] + 8),
           v5) )
    {
      break;
    }
    v7 = (__int64 **)v8;
    v8 = (__int64 *)*v8;
  }
  while ( v8 );
  if ( !v8 )
    return 0LL;
  result = v8[1];
  *(_QWORD *)(a3 + 8) = v7;
  return result;
}
