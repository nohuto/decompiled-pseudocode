/*
 * XREFs of ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01BE460
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C01BD268 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01BE674 (--$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall BmlFillPathModalityFromVidPn(const struct DMMVIDPN *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v2; // r13
  const struct DMMVIDPN *v3; // r8
  char *v4; // rbp
  char *v6; // r12
  bool v7; // cf
  unsigned int v8; // ebx
  char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  char v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  char *v23; // rax
  unsigned int v25; // [rsp+54h] [rbp+Ch]

  v2 = *((_QWORD *)a1 + 6);
  v3 = (const struct DMMVIDPN *)*((_QWORD *)a1 + 15);
  v4 = 0LL;
  if ( v3 != (const struct DMMVIDPN *)((char *)a1 + 120) )
    v4 = (char *)v3 - 8;
  if ( v4 )
  {
    v6 = (char *)a1 + 120;
    do
    {
      v7 = *((_WORD *)a2 + 10) != 0;
      v8 = 0;
      while ( v7 )
      {
        v9 = (char *)a2 + 296 * v8;
        if ( (*((_QWORD *)v9 + 7) & 0x700000000000LL) == 0x700000000000LL )
        {
          v10 = *(_QWORD *)(v2 + 8);
          if ( !v10 )
          {
            WdLogSingleEntry0(1LL);
            v10 = *(_QWORD *)(v2 + 8);
          }
          v11 = *(_QWORD *)(v10 + 16);
          if ( *((_DWORD *)v9 + 18) == *(_DWORD *)(v11 + 404)
            && *((_DWORD *)v9 + 19) == *(_DWORD *)(v11 + 408)
            && *((_DWORD *)v9 + 20) == *(_DWORD *)(*((_QWORD *)v4 + 11) + 24LL)
            && *((_DWORD *)v9 + 21) == *(_DWORD *)(*((_QWORD *)v4 + 12) + 24LL) )
          {
            LODWORD(v12) = 0;
            v25 = 0;
            v13 = 0;
            if ( (*((_BYTE *)a2 + 24) & 1) != 0 && (*((_QWORD *)v9 + 7) & 0x100LL) != 0 )
            {
              v12 = *((_QWORD *)v9 + 19);
              v13 = 1;
              v25 = HIDWORD(v12);
            }
            _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(v4, v9 + 56);
            v14 = *((_QWORD *)v4 + 11);
            v15 = *(_QWORD *)(v14 + 104);
            if ( v15 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
              v16 = *(_QWORD *)(v14 + 104);
            }
            else
            {
              v16 = 0LL;
            }
            v17 = *(_QWORD *)(v16 + 144);
            if ( v17 )
              v9[184] = (unsigned int)(*(_DWORD *)(v17 + 72) - 3) <= 1;
            v18 = *((_QWORD *)v4 + 12);
            v19 = *(_QWORD *)(v18 + 104);
            if ( v19 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
              v20 = *(_QWORD *)(v18 + 104);
            }
            else
            {
              v20 = 0LL;
            }
            v21 = *(_QWORD *)(v20 + 144);
            if ( v21 )
            {
              *((_DWORD *)v9 + 65) = *(_DWORD *)(v21 + 132);
              v22 = *(_DWORD *)(v21 + 136);
              *((_QWORD *)v9 + 7) |= 8uLL;
            }
            else
            {
              *((_DWORD *)v9 + 65) = 0;
              v22 = 4;
            }
            *((_DWORD *)v9 + 66) = v22;
            if ( v13 && *((_QWORD *)v9 + 19) != __PAIR64__(v25, v12) )
              *((_QWORD *)v9 + 7) &= ~0x20000uLL;
            if ( v20 )
              ReferenceCounted::Release((ReferenceCounted *)(v20 + 88));
            if ( v16 )
              ReferenceCounted::Release((ReferenceCounted *)(v16 + 88));
            break;
          }
        }
        else
        {
          WdLogSingleEntry2(3LL, v8, a2);
        }
        v7 = ++v8 < *((unsigned __int16 *)a2 + 10);
      }
      v23 = (char *)*((_QWORD *)v4 + 1);
      v4 = v23 - 8;
      if ( v23 == v6 )
        v4 = 0LL;
    }
    while ( v4 );
  }
  return 0LL;
}
