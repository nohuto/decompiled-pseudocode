/*
 * XREFs of RtlpTraverseParents @ 0x18006337C
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x180063260 (RtlpIsQualifiedLanguage.c)
 *     RtlpTraverseParents @ 0x18006337C (RtlpTraverseParents.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800FA0D0 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlpTraverseParents @ 0x18006337C (RtlpTraverseParents.c)
 *     LdrpGetMUILangConfigNode @ 0x1800F9FF8 (LdrpGetMUILangConfigNode.c)
 */

char __fastcall RtlpTraverseParents(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  char v6; // bl
  unsigned int v11; // r12d
  int v12; // r8d
  int v13; // ecx
  int v15; // ecx
  unsigned int v16; // ebp
  __int64 v17; // r14
  __int16 v18; // r8
  _WORD *v19; // rdx
  int i; // ebp
  __int16 v21; // dx
  __int16 v22; // cx
  __int16 v23; // ax
  __int16 v24; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  v24 = -1;
  if ( !a1 )
    return 0;
  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  v11 = a5;
  if ( a5 > 4 )
    return 0;
  v12 = a6;
  if ( a6 <= 1 )
    return 0;
  v13 = (*a1 & 7) - 1;
  if ( !v13 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v6 = 1;
    *(_WORD *)a2 = a1[2];
    *(_WORD *)(a2 + 2) = a1[3];
    return v6;
  }
  v15 = v13 - 1;
  if ( !v15 || v15 == 2 )
  {
    if ( a4 )
    {
      if ( (int)LdrpGetMUILangConfigNode(a1, a3, a4, &v24) >= 0 )
      {
        v16 = 0;
        v17 = *(_QWORD *)(a4 + 8) + 12LL * v24;
        do
        {
          v18 = (*(_WORD *)(v17 + 2) >> (2 * v16)) & 3;
          if ( v18 )
          {
            v19 = (_WORD *)(a2 + 8);
            if ( v18 != 2 )
            {
              if ( v18 == 1 )
              {
                v22 = *(_WORD *)(v17 + 2LL * v16 + 6);
                *(_WORD *)(a2 + 10) = -1;
                *v19 = v22;
              }
              else
              {
                *v19 = 0;
                *(_WORD *)(a2 + 10) = *(_WORD *)(v17 + 2LL * v16 + 6);
              }
              *(_DWORD *)(a2 + 12) = 1;
LABEL_34:
              *(_DWORD *)(a2 + 4) = 1;
              v6 = 1;
              *(_WORD *)a2 = a1[2];
              *(_WORD *)(a2 + 2) = a1[3];
              return v6;
            }
            if ( (unsigned __int8)RtlpTraverseParents(
                                    *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL) + 28 * *(__int16 *)(v17 + 2LL * v16 + 6),
                                    (_DWORD)v19,
                                    a3,
                                    a4,
                                    v11 + 1,
                                    a6 - 1) )
              goto LABEL_34;
          }
          ++v16;
        }
        while ( (int)v16 < 3 );
      }
      v12 = a6;
    }
    for ( i = 0; i < 4; ++i )
    {
      v21 = (a1[4] >> (2 * i)) & 3;
      if ( v21 == 2 )
      {
        if ( (unsigned __int8)RtlpTraverseParents(
                                *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL) + 28 * (__int16)a1[i + 6],
                                (int)a2 + 8,
                                a3,
                                a4,
                                v11 + 1,
                                v12 - 1) )
          goto LABEL_34;
      }
      else if ( ((v21 - 1) & 0xFFFD) == 0 )
      {
        v23 = a1[i + 6];
        if ( v21 == 1 )
          *(_WORD *)(a2 + 8) = v23;
        else
          *(_WORD *)(a2 + 10) = v23;
        *(_DWORD *)(a2 + 12) = 1;
        goto LABEL_34;
      }
      v12 = a6;
    }
  }
  return v6;
}
