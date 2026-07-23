/*
 * XREFs of sub_14021984C @ 0x14021984C
 * Callers:
 *     sub_140218F84 @ 0x140218F84 (sub_140218F84.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14064A96C @ 0x14064A96C (sub_14064A96C.c)
 * Callees:
 *     sub_1402199B0 @ 0x1402199B0 (sub_1402199B0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1407CD620 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall sub_14021984C(__int64 a1, char a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned int v4; // edi
  unsigned __int16 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  void *v13; // rax
  size_t v14; // r8
  const void *v15; // rdx
  unsigned int v17; // ebp
  __int64 v18; // rbx
  WCHAR v19; // ax
  unsigned __int16 *v20; // rdx

  v4 = 0;
  *a4 = 0;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    v9 = *(_WORD *)(a1 + 24);
    a3[1] = v9;
    v10 = *(unsigned __int16 *)(a1 + 24);
    *a3 = v10;
    v11 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v9 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 2LL);
    a3[1] = v9;
    v10 = **(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 48LL);
    *a3 = v10;
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 8LL);
  }
  *((_QWORD *)a3 + 1) = v11;
  if ( !(_WORD)v10 || !v11 )
    return (unsigned int)-1073741406;
  v12 = *(_DWORD *)(a1 + 12);
  if ( v12 == 1 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
      goto LABEL_7;
LABEL_11:
    if ( a2 )
    {
      v17 = 0;
      if ( (*a3 & 0xFFFE) != 0 )
      {
        do
        {
          v18 = v17;
          v19 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v17++));
          *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v18) = v19;
        }
        while ( v17 < *a3 >> 1 );
      }
    }
    return v4;
  }
  if ( v12 != 2 )
    goto LABEL_11;
  if ( !a2 )
    return v4;
LABEL_7:
  v13 = (void *)sub_1402199B0(v9, v10, 1632068947LL);
  *((_QWORD *)a3 + 1) = v13;
  if ( v13 )
  {
    if ( *(_DWORD *)(a1 + 12) == 1 )
    {
      v14 = *(unsigned int *)(a1 + 24);
      v15 = *(const void **)(a1 + 32);
    }
    else
    {
      v20 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 48LL);
      v14 = *v20;
      v15 = (const void *)*((_QWORD *)v20 + 1);
    }
    memmove(v13, v15, v14);
    *a4 = 1;
    goto LABEL_11;
  }
  return 3221225495LL;
}
