/*
 * XREFs of sub_140460684 @ 0x140460684
 * Callers:
 *     sub_140460770 @ 0x140460770 (sub_140460770.c)
 *     sub_14063130C @ 0x14063130C (sub_14063130C.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_140297EF0 @ 0x140297EF0 (sub_140297EF0.c)
 */

void __fastcall sub_140460684(struct _KTHREAD *a1, char a2, char a3, _BYTE *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v8; // cl

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != a1
    || (*((_DWORD *)CurrentThread + 29) & 0x400) != 0
    || (*((_DWORD *)CurrentThread + 344) & 1) != 0 && !a2 )
  {
    goto LABEL_9;
  }
  if ( KeGetEffectiveIrql() < 2u )
  {
    if ( sub_140297EF0()
      && !*((_BYTE *)CurrentThread + 1390)
      && *((_BYTE *)KeGetCurrentThread() + 586) != 1
      && !_bittest((const signed __int32 *)CurrentThread + 29, 5u) )
    {
      *a4 = 1;
      *a5 = 0;
      return;
    }
  }
  else
  {
    v8 = *((_BYTE *)KeGetCurrentPrcb() + 32);
    if ( v8 && (v8 != 1 || !a3) )
    {
LABEL_9:
      *a4 = 0;
      return;
    }
  }
  *a4 = 1;
  *a5 = 1;
}
