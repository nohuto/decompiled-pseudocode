/*
 * XREFs of RtlpUnwindEpilogue @ 0x18010FAE4
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180039210 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlpVirtualPopShadowStack @ 0x1800849C0 (RtlpVirtualPopShadowStack.c)
 *     RtlpUnwindOpSlots @ 0x18008C570 (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  int v8; // esi
  _BYTE *v9; // r14
  unsigned int v10; // r15d
  unsigned int i; // edi
  unsigned __int16 v12; // cx
  int v13; // ecx
  __int64 v14; // r9
  unsigned int j; // r11d
  __int16 v17; // ax
  unsigned int v18; // esi
  _QWORD *v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // r9
  _QWORD *v23; // rdx

  v8 = 0;
  while ( 1 )
  {
    v9 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v10 = (unsigned __int8)v9[2];
    for ( i = 0; ; i += RtlpUnwindOpSlots(v12) )
    {
      if ( i >= v10 )
        goto LABEL_8;
      v12 = *(_WORD *)&v9[2 * i + 4];
      if ( (v12 & 0xF00) == 0 || (HIBYTE(v12) & 0xF) == 0xA )
        break;
    }
    if ( i < v10 )
      break;
LABEL_8:
    if ( (*v9 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v8 > 0x20 )
      return 3221225727LL;
    v13 = (unsigned __int8)v9[2];
    v14 = (unsigned int)(v13 + 1);
    if ( (v13 & 1) == 0 )
      v14 = (unsigned __int8)v9[2];
    a4 = &v9[2 * v14 + 4];
  }
  for ( j = 0; ; j += 2 - (v18 < 8) )
  {
    if ( i >= v10 )
      goto LABEL_40;
    v17 = *(_WORD *)&v9[2 * i + 4];
    v18 = HIBYTE(v17) >> 4;
    if ( (v17 & 0xF00) != 0 )
      break;
    if ( j >= a3 )
    {
      v19 = *(_QWORD **)(a5 + 152);
      if ( *(_QWORD *)a6
        && ((unsigned __int64)v19 < **(_QWORD **)a6 || (unsigned __int64)v19 > **(_QWORD **)(a6 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      *(_QWORD *)(a5 + 152) += 8LL;
      *(_QWORD *)(a5 + 120 + 8LL * v18) = *v19;
      v20 = *(_QWORD *)(a6 + 16);
      if ( v20 )
        *(_QWORD *)(v20 + 8LL * v18 + 128) = v19;
    }
    ++i;
  }
  if ( i >= v10 )
    goto LABEL_40;
  if ( (HIBYTE(v17) & 0xF) == 2 && !v18 )
  {
    if ( j >= a3 )
      *(_QWORD *)(a5 + 152) += 8LL;
    ++i;
  }
  if ( i >= v10 || (v9[2 * i + 5] & 0xF) != 0xA )
  {
LABEL_40:
    v23 = *(_QWORD **)(a5 + 152);
    if ( !*(_QWORD *)a6
      || (unsigned __int64)v23 >= **(_QWORD **)a6 && (unsigned __int64)v23 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *v23;
      *(_QWORD *)(a5 + 152) += 8LL;
      RtlpVirtualPopShadowStack(a5);
      return 0LL;
    }
    return 3221225512LL;
  }
  v21 = *(_QWORD **)(a5 + 152);
  v22 = v21 + 3;
  if ( *(_QWORD *)a6 && ((unsigned __int64)v21 < **(_QWORD **)a6 || (unsigned __int64)v21 > **(_QWORD **)(a6 + 8) - 8LL)
    || *(_QWORD *)a6 && ((unsigned __int64)v22 < **(_QWORD **)a6 || (unsigned __int64)v22 > **(_QWORD **)(a6 + 8) - 8LL) )
  {
    return 3221225512LL;
  }
  *(_QWORD *)(a5 + 248) = *v21;
  *(_QWORD *)(a5 + 152) = *v22;
  return 0LL;
}
