/*
 * XREFs of sub_140A71270 @ 0x140A71270
 * Callers:
 *     sub_140A71180 @ 0x140A71180 (sub_140A71180.c)
 * Callees:
 *     wcsncmp @ 0x1403E33F0 (wcsncmp.c)
 */

char __fastcall sub_140A71270(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // edx
  int v5; // esi
  char v6; // cl
  char v7; // al
  char v8; // cl
  char v9; // al
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  char v13; // cl
  __int16 v15; // ax
  __int16 v16; // cx
  __int16 v17; // ax
  __int16 v18; // cx
  unsigned int v19; // eax
  int v20; // ecx
  __int16 v21; // ax
  __int16 v22; // cx
  __int16 v23; // cx
  __int16 v24; // ax

  v2 = qword_140C4BED0;
  v4 = *(_DWORD *)(qword_140C4BED0 + 220);
  v5 = *(_DWORD *)(a2 + 220);
  if ( v4 == 2 )
    goto LABEL_4;
  if ( v5 == 2 || v4 == v5 )
  {
    v5 = *(_DWORD *)(qword_140C4BED0 + 220);
LABEL_4:
    if ( (v5 & 0xFFFFFFFD) == 0 )
    {
      v6 = *(_BYTE *)(a2 + 14);
      v7 = *(_BYTE *)(qword_140C4BED0 + 14);
      if ( v6 == -1 || v7 == v6 || v7 == -1 )
      {
        v8 = *(_BYTE *)(a2 + 15);
        v9 = *(_BYTE *)(qword_140C4BED0 + 15);
        if ( v8 == -1 || v9 == v8 || v9 == -1 )
        {
          v10 = *(_DWORD *)qword_140C4BED0;
          if ( *(_DWORD *)a2 == -1 || v10 == *(_DWORD *)a2 || v10 == -1 )
          {
            v11 = *(_DWORD *)(a2 + 4);
            v12 = *(_DWORD *)(qword_140C4BED0 + 4);
            if ( v11 == -1 || v12 == v11 || v12 == -1 )
              return 1;
          }
        }
      }
    }
    if ( v4 == 1 || v5 == 2 )
    {
      v15 = *(_WORD *)(qword_140C4BED0 + 204);
      v16 = *(_WORD *)(a2 + 204);
      if ( v15 == v16 || v15 == -1 || v16 == -1 )
      {
        v17 = *(_WORD *)(qword_140C4BED0 + 206);
        v18 = *(_WORD *)(a2 + 206);
        if ( v17 == v18 || v17 == -1 || v18 == -1 )
        {
          v19 = *(_DWORD *)(qword_140C4BED0 + 232);
          if ( v19 == -1 )
            return 1;
          v20 = *(_DWORD *)(a2 + 232);
          if ( v20 == -1
            || v19 == v20 && !wcsncmp(*(const wchar_t **)(qword_140C4BED0 + 224), *(const wchar_t **)(a2 + 224), v19) )
          {
            return 1;
          }
        }
      }
    }
    v13 = 0;
    if ( v5 != 3 || *(_DWORD *)(v2 + 220) != *(_DWORD *)(a2 + 220) )
      return v13;
    if ( ((v21 = *(_WORD *)(v2 + 204), v22 = *(_WORD *)(a2 + 204), v21 == v22) || v21 == -1 || v22 == -1)
      && ((v23 = *(_WORD *)(v2 + 206), v24 = *(_WORD *)(a2 + 206), v23 == v24) || v23 == -1 || v24 == -1) )
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return 0;
}
