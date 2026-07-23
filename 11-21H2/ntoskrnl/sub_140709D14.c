/*
 * XREFs of sub_140709D14 @ 0x140709D14
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_140709E04 @ 0x140709E04 (sub_140709E04.c)
 */

__int64 __fastcall sub_140709D14(int a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v2; // edi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 *i; // rsi
  unsigned __int64 v8; // rcx
  int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v4 = 0LL;
  v5 = *((_QWORD *)CurrentThread + 23);
  v6 = *(_QWORD *)(v5 + 1680);
  if ( *(_QWORD *)(v6 + 264) )
  {
    for ( i = (__int64 *)(v6 + 64); ; i += 9 )
    {
      v8 = (unsigned __int64)i[6] >> 15 << 12;
      *i = i[6] & 0x7FFF;
      *(i - 1) = qword_140C51BE8 + 4 * (v8 >> 2);
      if ( a1 )
        *(i - 2) = 0LL;
      sub_14030B820((__int64)CurrentThread, v5);
      v9 = sub_140709E04(i - 2, 1LL);
      i[2] = *i;
      sub_140281A58((__int64)CurrentThread, v5);
      if ( !v9 )
        break;
      if ( (unsigned __int64)++v4 >= *(_QWORD *)(v6 + 264) )
        return v2;
    }
    return (unsigned int)-1073741801;
  }
  return v2;
}
