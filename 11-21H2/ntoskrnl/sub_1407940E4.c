/*
 * XREFs of sub_1407940E4 @ 0x1407940E4
 * Callers:
 *     sub_1406E6D40 @ 0x1406E6D40 (sub_1406E6D40.c)
 *     sub_1406EF020 @ 0x1406EF020 (sub_1406EF020.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1407940E4(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  if ( !a2 )
    return 0LL;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 16) )
    return 0LL;
  while ( 1 )
  {
    v7 = sub_140797594(a1, v6, 0LL);
    v8 = v7;
    if ( v7 )
      break;
LABEL_7:
    if ( ++v6 >= *(_DWORD *)(a1 + 16) )
      return 0LL;
  }
  if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 136), a2, 1u) )
  {
    v9 = 0LL;
LABEL_6:
    sub_1407981E8(v8, v9);
    goto LABEL_7;
  }
  if ( a3 )
    KeWaitForSingleObject((PVOID)(v8 + 632), Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(v8 + 320) )
  {
    LOBYTE(v9) = a3;
    goto LABEL_6;
  }
  return v8;
}
