/*
 * XREFs of sub_14023ECD8 @ 0x14023ECD8
 * Callers:
 *     sub_14023EB78 @ 0x14023EB78 (sub_14023EB78.c)
 * Callees:
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 */

__int64 __fastcall sub_14023ECD8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  char v7; // bl
  struct _KTHREAD *CurrentThread; // r10
  int v10; // r11d

  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = *(_DWORD *)(a4 + 192);
  *a7 = 2;
  if ( (v10 & 0x80u) != 0 && (int)sub_14033D760(CurrentThread) >= 2
    || CurrentThread == *(struct _KTHREAD **)(a4 + 152)
    || (*((_DWORD *)CurrentThread + 29) & 0x8000) != 0
    || *(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 2272LL) && (*(_QWORD *)(a4 + 256) || (v10 & 8) != 0) )
  {
    v7 = 1;
  }
  if ( *(__int64 *)(a5 + 40) < 0 && (*(_DWORD *)(a5 + 16) & 0x400LL) != 0 )
  {
    if ( !*((_DWORD *)CurrentThread + 121)
      && !_bittest((const signed __int32 *)CurrentThread + 29, 0xAu)
      && !*(_BYTE *)(a1 + 68)
      && !v7
      || (v10 & 0x20) != 0 )
    {
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a7 = 1;
    return sub_140339520(a1, a2, a3, a6);
  }
  else
  {
    if ( !*((_BYTE *)CurrentThread + 1390) && (v10 & 8) == 0 && !v7 || (v10 & 0x20) != 0 )
      return 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(a5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a7 = 1;
    return sub_1403927C4(a1, a2, a3, a6);
  }
}
