/*
 * XREFs of sub_14070A1B8 @ 0x14070A1B8
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 *     sub_140860DAC @ 0x140860DAC (sub_140860DAC.c)
 * Callees:
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 */

__int64 __fastcall sub_14070A1B8(__int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // edi
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  _QWORD *v8; // r12

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = *((_QWORD *)CurrentThread + 23);
  sub_14030B820((__int64)CurrentThread, v6);
  v7 = *a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v7;
      v5 = sub_1407B88C0(v7, a1);
      if ( v5 < 0 )
        break;
      sub_14030E390((__int64)v7, a1, 0);
      v7 = v8;
      if ( !v8 )
        goto LABEL_4;
    }
    sub_140281A58((__int64)CurrentThread, v6);
    *a2 = v7;
  }
  else
  {
LABEL_4:
    sub_140281A58((__int64)CurrentThread, v6);
    *a2 = 0LL;
  }
  return (unsigned int)v5;
}
