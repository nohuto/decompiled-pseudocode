/*
 * XREFs of KdLogDbgPrint @ 0x140A73FF0
 * Callers:
 *     sub_140A7434C @ 0x140A7434C (sub_140A7434C.c)
 *     sub_140A744CC @ 0x140A744CC (sub_140A744CC.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 */

struct _KPRCB *__fastcall KdLogDbgPrint(unsigned __int16 *a1)
{
  struct _KPRCB *result; // rax
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // r9
  unsigned int v5; // ebx
  unsigned int v6; // eax
  signed __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  char *v10; // rcx
  unsigned int v11; // ebx
  char *v12; // rcx
  unsigned int v13; // edi
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF

  result = KeGetCurrentPrcb();
  v19 = 0;
  if ( (struct _KPRCB *)qword_140D01938 == result )
  {
    _InterlockedIncrement(&dword_140C32E84);
    return result;
  }
  _InterlockedIncrement((_DWORD *)&qword_140D01930 + 1);
  while ( (_DWORD)qword_140D01930 )
    _mm_pause();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( off_140C070A0 )
  {
    v5 = *a1;
    v6 = (unsigned int)dword_140C0C6CC >> 3;
    if ( (unsigned int)dword_140C0C6CC >> 3 > 0x200 )
      v6 = 512;
    if ( v5 > v6 )
    {
      v5 = v6;
      _InterlockedIncrement(&dword_140C32E88);
    }
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)&off_140C070A8, 0LL, 0LL);
    do
    {
      v8 = v5 + v7 - (unsigned int)dword_140C0C6CC;
      v9 = v7;
      if ( (unsigned __int64)v5 + v7 < (unsigned __int64)off_140C070A0 + (unsigned int)dword_140C0C6CC )
        v8 = v5 + v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)&off_140C070A8, v8, v7);
    }
    while ( v7 != v9 );
    if ( v8 < v9 )
      _InterlockedIncrement(&dword_140C32E80);
    v10 = (char *)*((_QWORD *)a1 + 1);
    if ( v5 + v9 > (unsigned __int64)off_140C070A0 + (unsigned int)dword_140C0C6CC )
    {
      v13 = dword_140C0C6CC + (_DWORD)off_140C070A0 - v9;
      sub_140A6F124(v10, v9, v13, 0, 4, &v19);
      if ( v19 < v13 )
        memset((void *)(v9 + v19), 0, v13 - v19);
      v11 = v5 - v13;
      if ( v19 == v13 )
      {
        sub_140A6F124((char *)(*((_QWORD *)a1 + 1) + v13), (__int64)off_140C070A0, v11, 0, 4, &v19);
        if ( v19 >= v11 )
          goto LABEL_31;
        v11 -= v19;
        v12 = (char *)off_140C070A0 + v19;
      }
      else
      {
        v12 = (char *)off_140C070A0;
      }
    }
    else
    {
      sub_140A6F124(v10, v9, v5, 0, 4, &v19);
      if ( v19 >= v5 )
        goto LABEL_31;
      v11 = v5 - v19;
      v12 = (char *)(v9 + v19);
    }
    memset(v12, 0, v11);
  }
LABEL_31:
  _InterlockedAdd((_DWORD *)&qword_140D01930 + 1, 0xFFFFFFFF);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = (struct _KPRCB *)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
