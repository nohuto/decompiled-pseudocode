/*
 * XREFs of sub_1407546B8 @ 0x1407546B8
 * Callers:
 *     sub_1405F3E6C @ 0x1405F3E6C (sub_1405F3E6C.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     sub_1402D6A64 @ 0x1402D6A64 (sub_1402D6A64.c)
 */

char __fastcall sub_1407546B8(_DWORD *a1, __int64 a2)
{
  char v2; // bl
  unsigned int v4; // edi
  const UNICODE_STRING *v5; // rcx

  v2 = 0;
  if ( *a1 == 1 )
    return 1;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 4) )
  {
    while ( 1 )
    {
      v5 = (const UNICODE_STRING *)(*(_QWORD *)(a2 + 8) + 40LL * v4);
      if ( v5 )
      {
        if ( sub_1402D6A64(v5) )
          break;
      }
      if ( ++v4 >= *(_DWORD *)(a2 + 4) )
        return v2;
    }
    return 1;
  }
  return v2;
}
