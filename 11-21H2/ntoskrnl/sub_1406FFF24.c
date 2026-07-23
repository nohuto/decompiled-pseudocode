/*
 * XREFs of sub_1406FFF24 @ 0x1406FFF24
 * Callers:
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1406FFED4 @ 0x1406FFED4 (sub_1406FFED4.c)
 *     sub_1406FFEFC @ 0x1406FFEFC (sub_1406FFEFC.c)
 */

__int64 __fastcall sub_1406FFF24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v7; // ebx
  __int64 v9; // r14
  int v12; // edi
  _QWORD *i; // rsi

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v9 = a3;
  v12 = 0;
  if ( !a2 && !a4 )
    goto LABEL_14;
  if ( (a6 & 1) == 0 )
  {
    if ( (a6 & 4) != 0 )
      sub_1406FFED4(a1, (__int64)CurrentThread);
    else
      sub_1406FFEFC(a1, (__int64)CurrentThread);
  }
  if ( !a2 || (v12 = sub_14042A5E0(a1, a5), v12 >= 0) )
  {
    if ( a4 )
    {
      for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
      {
        v12 = sub_14042A5E0(i - 185, a5);
        if ( v12 < 0 )
          break;
      }
      v9 = a3;
    }
  }
  if ( (a6 & 1) == 0 )
    sub_1406FFE90(a1, (__int64)CurrentThread);
  if ( v12 < 0 )
  {
    if ( v12 != -1073741536 )
      return (unsigned int)v12;
    return v7;
  }
  else
  {
LABEL_14:
    if ( v9 )
      return (unsigned int)sub_14042A5E0(a1, a5);
  }
  return (unsigned int)v12;
}
