/*
 * XREFs of sub_14076729C @ 0x14076729C
 * Callers:
 *     sub_14065FA0C @ 0x14065FA0C (sub_14065FA0C.c)
 *     sub_140765430 @ 0x140765430 (sub_140765430.c)
 *     sub_14084F060 @ 0x14084F060 (sub_14084F060.c)
 * Callees:
 *     sub_1407673E8 @ 0x1407673E8 (sub_1407673E8.c)
 *     sub_140767730 @ 0x140767730 (sub_140767730.c)
 *     sub_14078C398 @ 0x14078C398 (sub_14078C398.c)
 */

__int64 __fastcall sub_14076729C(
        _QWORD *Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        _DWORD *a11,
        __int64 a12,
        __int64 a13,
        _QWORD *a14)
{
  __int64 v17; // rcx
  unsigned int v18; // ebp
  _QWORD *v19; // rax
  _QWORD *v20; // rbx

  if ( a11 )
    *a11 = 259;
  if ( stru_140C46280.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140CF5F60, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( Object )
    v17 = *(_QWORD *)(Object[39] + 40LL);
  else
    v17 = 0LL;
  v18 = *(unsigned __int16 *)(v17 + 40) + 194;
  v19 = (_QWORD *)sub_140767730(a2 != 0 ? 3 : 0, 256LL, v18, 1265659472LL);
  v20 = v19;
  if ( !v19 )
    return 3221225626LL;
  sub_1407673E8(v19, v18, Object, a3, a4, a5, a6, a7, a8, (__int64)a11, a12, a13);
  v20[4] = 0LL;
  v20[5] = 0LL;
  if ( a14 )
  {
    *a14 = v20;
    ++*((_DWORD *)v20 + 16);
  }
  return sub_14078C398(v20);
}
