/*
 * XREFs of sub_1409D1A80 @ 0x1409D1A80
 * Callers:
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 */

__int64 __fastcall sub_1409D1A80(__int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  const void *v4; // r14
  __int16 v5; // ax
  unsigned int v8; // edi
  __int64 v9; // rax
  size_t v10; // rcx
  PVOID v11; // rax
  __int64 v12; // rcx

  v3 = 0;
  v4 = (const void *)(a1 + 2);
  v5 = *(_WORD *)(a1 + 2);
  v8 = 1;
  while ( v5 != 34 && v5 )
    v5 = *(_WORD *)(a1 + 2LL * ++v8);
  if ( *(_WORD *)(a1 + 2LL * v8) )
  {
    v9 = *a2;
    *(_BYTE *)(*a2 + 1) = 16;
    if ( v8 <= 1 )
    {
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0LL;
    }
    else
    {
      v10 = 2 * v8 - 2;
      *(_DWORD *)(v9 + 4) = v10;
      if ( 2 * v8 != 2 )
      {
        v11 = sub_14067757C(v10);
        v12 = *a2;
        *(_QWORD *)(*a2 + 8) = v11;
        if ( !v11 )
          return 8;
        memmove(v11, v4, *(unsigned int *)(v12 + 4));
      }
    }
    *a3 = v8 + 1;
    return v3;
  }
  return 1336;
}
