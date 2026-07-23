/*
 * XREFs of RtlpHpSegLargeRangeAllocate @ 0x1801201F4
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180018680 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x180015220 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180016948 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeSplit @ 0x180120908 (RtlpHpSegPageRangeSplit.c)
 */

unsigned __int64 __fastcall RtlpHpSegLargeRangeAllocate(__int64 a1, unsigned __int64 i, int a3, int a4)
{
  char v4; // r11
  unsigned int v6; // r10d
  __int64 v9; // r8
  unsigned __int8 v10; // al
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  int v13; // ebx
  __int16 *v14; // rdx
  unsigned __int64 j; // rcx
  unsigned __int64 v16; // rax
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rbx

  v4 = *(_BYTE *)(a1 + 8);
  v6 = a3 << v4;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(i + 31) << v4;
    if ( !a4 )
      goto LABEL_7;
    v10 = *(_BYTE *)(i + 30);
    if ( v10 <= 2u )
      break;
LABEL_14:
    v17 = *(_QWORD ***)(i + 8);
    v18 = i;
    if ( v17 )
    {
      v19 = *v17;
      for ( i = *(_QWORD *)(i + 8); v19; v19 = (_QWORD *)*v19 )
        i = (unsigned __int64)v19;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v18 )
          break;
        v18 = i;
      }
    }
    if ( !i )
      return 0LL;
  }
  if ( !v10 && (v6 <= ((unsigned int)v9 & 0x1FFFFF) || (v9 & 0x1FFFFF) == 0) )
  {
    v21 = 0;
LABEL_26:
    RtlpHpSegFreeRangeRemove(a1, i);
    goto LABEL_27;
  }
LABEL_7:
  v11 = (i & *(_QWORD *)a1) + ((__int64)(i - (i & *(_QWORD *)a1)) >> 5 << v4);
  v12 = v11 + v9;
  v13 = v11;
  v14 = (__int16 *)(*(_QWORD *)((v11 & *(_QWORD *)a1) + 0x18)
                  + 2 * ((v11 - ((unsigned __int64)v11 & *(_QWORD *)a1)) >> 21));
  for ( j = (v11 + 0x200000) & 0xFFFFFFFFFFE00000uLL; ; j += 0x200000LL )
  {
    if ( *v14 < 0 )
    {
      v16 = v12;
      if ( j < v12 )
        v16 = j;
      j = v16;
      if ( (int)v16 - v13 >= v6 )
        break;
    }
    if ( j >= v12 )
      goto LABEL_14;
    v13 = j;
    ++v14;
  }
  v21 = v13 - v11;
  if ( a4 )
    goto LABEL_26;
LABEL_27:
  if ( v21 )
  {
    LOBYTE(j) = *(_BYTE *)(a1 + 8);
    v22 = RtlpHpSegPageRangeSplit(j, i, v21 >> j);
    RtlpHpSegFreeRangeInsert(a1, i, 0);
    return v22;
  }
  return i;
}
