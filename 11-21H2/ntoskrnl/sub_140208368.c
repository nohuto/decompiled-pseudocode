/*
 * XREFs of sub_140208368 @ 0x140208368
 * Callers:
 *     sub_140207A84 @ 0x140207A84 (sub_140207A84.c)
 *     sub_140207CCC @ 0x140207CCC (sub_140207CCC.c)
 * Callees:
 *     sub_140210CE4 @ 0x140210CE4 (sub_140210CE4.c)
 *     sub_140291A94 @ 0x140291A94 (sub_140291A94.c)
 */

void __fastcall sub_140208368(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rax

  *(_BYTE *)(a1 + 112) &= 0xF1u;
  v2 = (*(_BYTE *)(a1 + 112) & 0x20) == 0;
  v4 = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 116) = 0;
  if ( v2 )
  {
    v5 = *(_DWORD **)(a1 + 120);
    if ( v5 )
      *v5 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 128) = 0;
  }
  if ( *(_WORD *)(a1 + 114) )
  {
    if ( !*(_DWORD *)(a1 + 116) )
    {
      do
      {
        v6 = *(_QWORD *)(a1 + 408);
        if ( !v6 )
          break;
        a1 = *(_QWORD *)(a1 + 408);
      }
      while ( !*(_DWORD *)(v6 + 116) );
    }
    v7 = *(_DWORD *)(a1 + 116);
    v8 = 0LL;
    if ( !v7 )
      v8 = a2;
    sub_140291A94(v4, a1 & -(__int64)(v7 != 0), v8, 0LL);
    if ( (*(_BYTE *)(v4 + 112) & 1) != 0 )
    {
      v9 = *(_QWORD *)(v4 + 392);
      if ( (*(_BYTE *)(v4 + 400) & 1) != 0 )
      {
        if ( !v9 )
        {
LABEL_16:
          sub_140210CE4(a2, v4, 0LL);
          return;
        }
        v9 ^= v4 + 392;
      }
      if ( !v9 )
        goto LABEL_16;
    }
  }
}
