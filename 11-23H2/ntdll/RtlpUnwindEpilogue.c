/*
 * XREFs of RtlpUnwindEpilogue @ 0x180111104
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180020E30 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlpVirtualPopShadowStack @ 0x18007CF7C (RtlpVirtualPopShadowStack.c)
 *     RtlpUnwindOpSlots @ 0x1800896AC (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  int v7; // esi
  _BYTE *v8; // r14
  unsigned int v9; // r15d
  unsigned int i; // edi
  unsigned __int16 v11; // cx
  int v12; // eax
  unsigned int v14; // r9d
  unsigned int v15; // r11d
  __int16 v16; // ax
  unsigned int v17; // esi
  _QWORD *v18; // r11
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *v21; // r9
  _QWORD *v22; // r9

  v7 = 0;
  while ( 1 )
  {
    v8 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v9 = (unsigned __int8)v8[2];
    for ( i = 0; ; i += RtlpUnwindOpSlots(v11) )
    {
      if ( i >= v9 )
        goto LABEL_8;
      v11 = *(_WORD *)&v8[2 * i + 4];
      if ( (v11 & 0xF00) == 0 || (HIBYTE(v11) & 0xF) == 0xA )
        break;
    }
    if ( i < v9 )
      break;
LABEL_8:
    if ( (*v8 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v7 > 0x20 )
      return 3221225727LL;
    v12 = (unsigned __int8)v8[2];
    if ( (v12 & 1) != 0 )
      ++v12;
    a4 = &v8[2 * v12 + 4];
  }
  v14 = 0;
  v15 = a3;
  while ( 1 )
  {
    if ( i >= v9 )
      goto LABEL_41;
    v16 = *(_WORD *)&v8[2 * i + 4];
    v17 = HIBYTE(v16) >> 4;
    if ( (v16 & 0xF00) != 0 )
      break;
    if ( v14 >= v15 )
    {
      v18 = *(_QWORD **)(a5 + 152);
      if ( *(_QWORD *)a6
        && ((unsigned __int64)v18 < **(_QWORD **)a6 || (unsigned __int64)v18 > **(_QWORD **)(a6 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      *(_QWORD *)(a5 + 152) += 8LL;
      *(_QWORD *)(a5 + 120 + 8LL * v17) = *v18;
      v19 = *(_QWORD *)(a6 + 16);
      if ( v19 )
        *(_QWORD *)(v19 + 8LL * v17 + 128) = v18;
      v15 = a3;
    }
    ++i;
    v14 += 2 - (v17 < 8);
  }
  if ( i >= v9 )
    goto LABEL_41;
  if ( (HIBYTE(v16) & 0xF) == 2 && !v17 )
  {
    if ( v14 >= v15 )
      *(_QWORD *)(a5 + 152) += 8LL;
    ++i;
  }
  if ( i >= v9 || (v8[2 * i + 5] & 0xF) != 0xA )
  {
LABEL_41:
    v22 = *(_QWORD **)(a5 + 152);
    if ( !*(_QWORD *)a6
      || (unsigned __int64)v22 >= **(_QWORD **)a6 && (unsigned __int64)v22 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *v22;
      *(_QWORD *)(a5 + 152) += 8LL;
      RtlpVirtualPopShadowStack(a5);
      return 0LL;
    }
    return 3221225512LL;
  }
  v20 = *(_QWORD **)(a5 + 152);
  v21 = v20 + 3;
  if ( *(_QWORD *)a6 && ((unsigned __int64)v20 < **(_QWORD **)a6 || (unsigned __int64)v20 > **(_QWORD **)(a6 + 8) - 8LL)
    || *(_QWORD *)a6 && ((unsigned __int64)v21 < **(_QWORD **)a6 || (unsigned __int64)v21 > **(_QWORD **)(a6 + 8) - 8LL) )
  {
    return 3221225512LL;
  }
  *(_QWORD *)(a5 + 248) = *v20;
  *(_QWORD *)(a5 + 152) = *v21;
  return 0LL;
}
