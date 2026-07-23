/*
 * XREFs of sub_1409429D4 @ 0x1409429D4
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_14085CB2C @ 0x14085CB2C (sub_14085CB2C.c)
 */

__int64 __fastcall sub_1409429D4(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 v2; // rdi
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // esi
  BOOLEAN v6; // al
  __int64 v7; // rcx
  wchar_t *Buffer; // rax

  v2 = a1 + 56;
  v4 = *(UNICODE_STRING **)(a1 + 56);
  v5 = -1073741275;
  if ( v4 != (UNICODE_STRING *)(a1 + 56) )
  {
    while ( 1 )
    {
      v6 = RtlEqualUnicodeString(v4 + 1, a2, 0);
      v7 = *(_QWORD *)&v4->Length;
      if ( v6 )
        break;
      v4 = *(UNICODE_STRING **)&v4->Length;
      if ( v7 == v2 )
        return v5;
    }
    if ( *(UNICODE_STRING **)(v7 + 8) != v4 || (Buffer = v4->Buffer, *(UNICODE_STRING **)Buffer != v4) )
      __fastfail(3u);
    *(_QWORD *)Buffer = v7;
    *(_QWORD *)(v7 + 8) = Buffer;
    sub_14085CB2C(v4);
    return 0;
  }
  return v5;
}
