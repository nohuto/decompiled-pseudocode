/*
 * XREFs of sub_1407F0E34 @ 0x1407F0E34
 * Callers:
 *     sub_1407F0C38 @ 0x1407F0C38 (sub_1407F0C38.c)
 * Callees:
 *     strncmp @ 0x1403E0910 (strncmp.c)
 */

char __fastcall sub_1407F0E34(__int64 a1)
{
  char v1; // bl
  int v3; // ecx
  int v5; // esi
  const char **i; // r14
  const char *v7; // rdx
  size_t v8; // r8

  v1 = 0;
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( *(_DWORD *)a1 )
    {
      v3 = *(_DWORD *)((a1 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (v3 & 1) == 0 && (v3 & 2) != 0 && *(_QWORD *)(a1 + 8) )
      {
        v5 = 0;
        for ( i = (const char **)off_140D3B6F8; ; ++i )
        {
          v7 = *i;
          v8 = -1LL;
          do
            ++v8;
          while ( v7[v8] );
          if ( !strncmp((const char *)(*(_QWORD *)(a1 + 8) + 1448LL), v7, v8) )
            break;
          if ( (unsigned int)++v5 >= 2 )
            return v1;
        }
        return 1;
      }
    }
  }
  return v1;
}
