/*
 * XREFs of sub_1409379A8 @ 0x1409379A8
 * Callers:
 *     sub_140937CC0 @ 0x140937CC0 (sub_140937CC0.c)
 * Callees:
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     FsRtlRemoveDotsFromPath @ 0x1407F96D0 (FsRtlRemoveDotsFromPath.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1409379A8(
        const wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int16 a6,
        __int16 a7)
{
  unsigned __int16 v7; // bx
  size_t v9; // r13
  unsigned int v11; // esi
  wchar_t *v12; // rdi
  WCHAR *v13; // r14
  wchar_t *v14; // rcx
  const void *v15; // rdx
  WCHAR *v16; // rdi
  __int16 v17; // r15
  _WORD *v18; // rdx
  __int64 v19; // rax
  NTSTATUS result; // eax
  wchar_t *v21; // rcx
  unsigned __int16 v22; // r8
  unsigned __int16 v23; // dx
  __int16 v24; // cx
  __int16 v25; // r9
  unsigned __int16 v26; // r11
  __int64 v27; // r14
  wchar_t v28; // r15
  wchar_t v29; // r8
  _WORD *Src; // [rsp+20h] [rbp-48h]
  __int16 v31; // [rsp+70h] [rbp+8h]
  USHORT NewLength; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 v33; // [rsp+88h] [rbp+20h]

  v7 = a4[5];
  v9 = a4[3];
  LOWORD(v11) = 0;
  NewLength = 0;
  v33 = v7;
  v12 = (wchar_t *)&a1[a2];
  v13 = (WCHAR *)&a1[a5];
  if ( a2 < a5 )
    return -1073741192;
  Src = (unsigned __int16 *)((char *)a4 + a4[4] + 20);
  if ( *Src == 92 )
  {
    if ( wcsnicmp(a1, L"\\Device\\Mup", 0xBuLL) )
      goto LABEL_8;
    v22 = *(_WORD *)(a3 + 88);
    v23 = 0;
    v31 = **(_WORD **)(a3 + 96);
    v24 = v31;
    v25 = (v31 != 59) + 3;
    if ( (v22 & 0xFFFE) != 0 )
    {
      v26 = *(_WORD *)(a3 + 88);
      do
      {
        v27 = *(_QWORD *)(a3 + 96);
        v22 = v26;
        v28 = *(_WORD *)(v27 + 2LL * v23);
        if ( v28 == 92 )
        {
          --v25;
          if ( v24 != 59 && v25 == 2 )
          {
            if ( (unsigned __int16)(v23 + 1) < (unsigned __int16)(v26 >> 1) && *(_WORD *)(v27 + 2LL * v23 + 2) != 59 )
              goto LABEL_36;
            v24 = v31;
          }
          if ( !v25 )
            goto LABEL_36;
        }
        *v12 = v28;
        ++v23;
        v22 = *(_WORD *)(a3 + 88);
        ++v12;
        v26 = v22;
      }
      while ( v23 < (unsigned __int16)(v22 >> 1) );
    }
    if ( !v25 )
    {
LABEL_36:
      if ( v23 < (unsigned __int16)(v22 >> 1) )
      {
        v29 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v23);
        do
        {
          *v12 = v29;
          ++v23;
          ++v12;
          v29 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v23);
        }
        while ( v29 != 92 && v23 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) );
      }
      v7 = v33;
      v17 = 2 * v23 + a6;
      v13 = (WCHAR *)&a1[a5 + v23];
      goto LABEL_9;
    }
    return -1073741192;
  }
  v14 = (wchar_t *)&a1[a2];
  v15 = *(const void **)(a3 + 96);
  NewLength = *(_WORD *)(a3 + 88) - v9;
  v11 = NewLength;
  memmove(v14, v15, NewLength);
  v16 = &v12[(unsigned __int64)v11 >> 1];
  if ( v16 != v13 )
  {
    do
    {
      if ( *v16 == 92 )
        break;
      LOWORD(v11) = v11 - 2;
      *v16-- = 0;
      NewLength = v11;
    }
    while ( v16 != v13 );
    if ( v16 < v13 )
      return -1073741192;
  }
  v12 = v16 + 1;
LABEL_8:
  v17 = a6;
LABEL_9:
  if ( v7 )
  {
    memmove(v12, Src, v7);
    LOWORD(v11) = v33 + v11;
    NewLength = v11;
    v12 += (unsigned __int64)v7 >> 1;
  }
  if ( (_WORD)v9 )
  {
    v18 = (_WORD *)(*(_QWORD *)(a3 + 96) + *(unsigned __int16 *)(a3 + 88) - v9);
    if ( *(v12 - 1) == 92 && *v18 == 92 )
    {
      *v12-- = 0;
      LOWORD(v11) = v11 - 2;
    }
    memmove(v12, v18, v9);
    NewLength = v9 + v11;
    v12 += v9 >> 1;
  }
  *v12 = 0;
  v19 = -1LL;
  do
    ++v19;
  while ( v13[v19] );
  result = FsRtlRemoveDotsFromPath(v13, 2 * v19, &NewLength);
  if ( result >= 0 )
  {
    v21 = *(wchar_t **)(a3 + 96);
    *(_WORD *)(a3 + 88) = v17 + NewLength;
    *(_WORD *)(a3 + 90) = a7;
    if ( a1 != v21 )
    {
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      *(_QWORD *)(a3 + 96) = a1;
    }
    return 0;
  }
  return result;
}
