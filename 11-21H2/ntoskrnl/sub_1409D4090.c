/*
 * XREFs of sub_1409D4090 @ 0x1409D4090
 * Callers:
 *     sub_1409D3EC0 @ 0x1409D3EC0 (sub_1409D3EC0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F464 @ 0x14035F464 (sub_14035F464.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1409D59E8 @ 0x1409D59E8 (sub_1409D59E8.c)
 */

__int64 __fastcall sub_1409D4090(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  unsigned int v5; // r14d
  __int64 v6; // r12
  ULONG_PTR v7; // rbx
  __int64 v8; // rax
  int v9; // ebp
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rax

  v4 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v5 = 1;
    do
    {
      v6 = a2 + 4LL * v4;
      v7 = sub_14035F464(a1, *(_DWORD *)(v6 + 4));
      if ( v7 )
      {
        v8 = a2 + ((unsigned __int64)v4 << 7);
        if ( *(_BYTE *)(v7 + 6020) == 1 )
        {
          v9 = sub_1409D59E8(v7 + 6216, v8 + 132, 128LL);
          if ( v9 < 0 )
          {
            v11 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a1, *(_DWORD *)(v7 + 6016) & 0x3FF);
            sub_1402AD030(v11 + 1);
            return (unsigned int)v9;
          }
        }
        else
        {
          *(_WORD *)(v8 + 132) = 0;
        }
        v10 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a1, *(_DWORD *)(v7 + 6016) & 0x3FF);
        sub_1402AD030(v10 + 1);
      }
      else
      {
        memmove((void *)(v6 + 4), (const void *)(a2 + 4 * (v5-- + 1LL)), 4 * (*(unsigned __int8 *)(a2 + 1) - v4--) - 4);
        --*(_BYTE *)(a2 + 1);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < *(unsigned __int8 *)(a2 + 1) );
  }
  return 0;
}
