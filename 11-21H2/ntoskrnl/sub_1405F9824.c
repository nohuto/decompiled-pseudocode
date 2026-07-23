/*
 * XREFs of sub_1405F9824 @ 0x1405F9824
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_1405F80DC @ 0x1405F80DC (sub_1405F80DC.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_1403792A8 @ 0x1403792A8 (sub_1403792A8.c)
 *     sub_14038770C @ 0x14038770C (sub_14038770C.c)
 *     sub_1403905FC @ 0x1403905FC (sub_1403905FC.c)
 *     sub_140391CE4 @ 0x140391CE4 (sub_140391CE4.c)
 *     sub_140394A84 @ 0x140394A84 (sub_140394A84.c)
 *     sub_1405F97E0 @ 0x1405F97E0 (sub_1405F97E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405F9824(__int64 a1, char a2, unsigned __int64 a3)
{
  int v4; // edx
  int v7; // ebx
  unsigned int v8; // ebp
  char v9; // di
  unsigned int v10; // r10d
  __int64 v11; // rdx
  unsigned int v12; // r9d
  _DWORD *v13; // r11
  _DWORD *v14; // r8
  __int64 v15; // rdx
  int v16; // edx
  __int64 v17; // r10
  _DWORD *v18; // r8
  unsigned int v19; // ecx
  unsigned int i; // eax
  unsigned int v21; // r13d
  __int64 v22; // r12
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdi
  void *v26; // rbx
  __int64 v27; // rcx
  int v28; // r9d
  int v29; // ecx
  __int16 v30; // ax
  int v32; // [rsp+70h] [rbp+8h]
  char v33; // [rsp+78h] [rbp+10h]
  int v34; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v32 = 0;
  v7 = 0;
  if ( a3 )
  {
    _InterlockedAnd16((volatile signed __int16 *)(a3 + 12), 0xFFFEu);
    *(_WORD *)(a3 + 14) &= ~1u;
  }
  v8 = 0;
  v9 = a2 & 1;
  v33 = v9;
  while ( 1 )
  {
LABEL_4:
    v10 = *(_DWORD *)(a1 + 840);
    if ( v10 <= v8 )
      goto LABEL_44;
    v11 = *(_QWORD *)(a1 + 848);
    v12 = v8;
    v13 = (_DWORD *)(v11 + 4 * ((unsigned __int64)(v10 - 1) >> 5));
    v14 = (_DWORD *)(v11 + 4 * ((unsigned __int64)v8 >> 5));
    if ( v14 != v13 )
    {
      v15 = v8 & 0x1F;
      if ( (*v14 | *((_DWORD *)qword_140015FA0 + v15)) == -1 )
      {
        v12 = v8 - v15 + 32;
        for ( ++v14; v14 < v13 && *v14 == -1; ++v14 )
          v12 += 32;
      }
    }
    for ( ; v12 < v10; ++v12 )
    {
      if ( !_bittest(*(const signed __int32 **)(a1 + 848), v12) )
        break;
    }
    v16 = 0;
    if ( v14 != v13 )
    {
      v17 = v12 & 0x1F;
      if ( (*v14 & ~*((_DWORD *)qword_140015FA0 + v17)) == 0 )
      {
        v16 = 32 - v17;
        if ( (_DWORD)v17 == 33 )
          goto LABEL_25;
        v18 = v14 + 1;
        while ( v18 < v13 && !*v18 )
        {
          ++v18;
          v16 += 32;
          if ( v16 == -1 )
            goto LABEL_25;
        }
      }
    }
    v19 = *(_DWORD *)(a1 + 840);
    for ( i = v16 + v12; i < v19; ++v16 )
    {
      if ( _bittest(*(const signed __int32 **)(a1 + 848), i) )
        break;
      if ( v16 == -1 )
        break;
      ++i;
    }
LABEL_25:
    v8 = v12;
    if ( !v16 )
      break;
    v21 = v16 + v12;
    v4 = v32;
    if ( v12 < v21 )
    {
      v22 = 2LL * v12;
      while ( 1 )
      {
        v34 = ++v7;
        if ( (v7 & 0xF) == 0
          && a3
          && (unsigned int)sub_140394A84(*(_DWORD **)(a1 + 800), *(_BYTE *)(*(_QWORD *)(a1 + 800) + 6022LL) == 0) )
        {
          v29 = 1;
          v4 = 1;
          goto LABEL_45;
        }
        if ( (unsigned int)sub_1405F97E0(a1, v8) != 8 )
          goto LABEL_39;
        v24 = *(_QWORD *)(a1 + 800);
        if ( (*(_WORD *)(v22 + *(_QWORD *)(a1 + 1032)) & 0x1FFF) != 0 )
        {
          if ( !sub_14038770C(v24, v8) || sub_1403792A8(v27, v8, 0, v28, 8) != 3 )
            goto LABEL_39;
        }
        else
        {
          if ( (*(_BYTE *)(v24 + 6021) & 4) == 0 )
          {
            v25 = *(_QWORD *)(v24 + 6216);
            v26 = (void *)(*(_QWORD *)(v25 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL);
            sub_140221A30((ULONG_PTR)v26, 0);
            ExFreePoolWithTag(v26, 0);
            *(_QWORD *)(v25 + 8LL * v8) = 0LL;
            v7 = v34;
            v9 = v33;
LABEL_39:
            v4 = v32;
            _bittestandset(*(signed __int32 **)(a1 + 848), v8);
            goto LABEL_40;
          }
          if ( (int)sub_1403905FC(v24, v8, v9 | 2u, v23) >= 0 )
            goto LABEL_39;
        }
        v4 = 1;
        v32 = 1;
LABEL_40:
        ++v8;
        v22 += 2LL;
        if ( v8 >= v21 )
          goto LABEL_4;
      }
    }
  }
  v4 = v32;
LABEL_44:
  v29 = 0;
  if ( a3 )
  {
LABEL_45:
    v30 = *(_WORD *)(a3 + 12) & 1;
    if ( v30 || v4 )
    {
      if ( v29 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v30 )
        sub_140391CE4(a1, a3);
    }
  }
  return 0LL;
}
