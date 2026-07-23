/*
 * XREFs of sub_14064A4B8 @ 0x14064A4B8
 * Callers:
 *     sub_140300374 @ 0x140300374 (sub_140300374.c)
 * Callees:
 *     sub_1402ED98C @ 0x1402ED98C (sub_1402ED98C.c)
 *     sub_14064A444 @ 0x14064A444 (sub_14064A444.c)
 */

__int64 __fastcall sub_14064A4B8(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 **v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdx
  unsigned int v8; // r8d
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r8

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  *(_DWORD *)(a1 + 36) = 0;
  if ( !v1 )
  {
    v4 = sub_14064A444((const UNICODE_STRING *)(a1 + 16));
    if ( !v4 )
      return (unsigned int)-1073741275;
    *(_QWORD *)(a1 + 56) = v4;
    *(_WORD *)(a1 + 32) = *((_WORD *)v4 + 6);
    if ( *((_DWORD *)v4 + 2) == 1 )
    {
      v7 = (__int64 *)(a1 + 64);
      v8 = 2;
      v9 = 0;
      v10 = 2LL;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
      *(_QWORD *)(a1 + 64) = 0LL;
      do
      {
        if ( _bittest64(&v11, v8) )
        {
          ++v9;
          if ( !*v7 )
            *v7 = v10;
        }
        ++v8;
        ++v10;
      }
      while ( v8 <= 0x24 );
      *(_DWORD *)(a1 + 40) = v9;
      if ( !v9 )
        return (unsigned int)-1073741275;
    }
    else
    {
      if ( *((_DWORD *)v4 + 2) == 2 )
      {
        sub_1402ED98C(*(_QWORD *)(a1 + 8));
        v7 = (__int64 *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = MEMORY[8];
      }
      else
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1104LL);
        if ( *((_DWORD *)v4 + 2) == 3 )
        {
          if ( !v5 )
            return (unsigned int)-1073741275;
          v6 = *(unsigned int *)(v5 + 8);
        }
        else
        {
          if ( !v5 )
            return (unsigned int)-1073741275;
          v6 = *(unsigned int *)(v5 + 12);
        }
        v7 = (__int64 *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = v6;
      }
      *(_DWORD *)(a1 + 40) = 1;
    }
LABEL_28:
    *(_QWORD *)(a1 + 48) = v7;
    return v2;
  }
  if ( *(_DWORD *)(v1 + 8) == 1 )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v7 = (__int64 *)(a1 + 64);
    v13 = *(_DWORD *)(a1 + 64);
    while ( ++v13 <= 0x24 )
    {
      v14 = *(_QWORD *)(v12 + 72);
      if ( _bittest64(&v14, v13) )
      {
        *v7 = v13;
        goto LABEL_28;
      }
    }
  }
  return (unsigned int)-2147483622;
}
