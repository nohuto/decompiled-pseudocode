/*
 * XREFs of sub_140460F1A @ 0x140460F1A
 * Callers:
 *     sub_140635A00 @ 0x140635A00 (sub_140635A00.c)
 *     sub_140636520 @ 0x140636520 (sub_140636520.c)
 * Callees:
 *     sub_140297EF0 @ 0x140297EF0 (sub_140297EF0.c)
 */

__int64 __fastcall sub_140460F1A(int a1, BOOL *a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v5; // eax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v5 = (*((_DWORD *)CurrentThread + 344) & 1) != 0 || !*((_QWORD *)CurrentThread + 30);
  *a2 = v5;
  if ( CurrentIrql >= 2u
    || *((_DWORD *)KeGetCurrentThread() + 121)
    || !sub_140297EF0()
    || *((_BYTE *)CurrentThread + 1390) && !a1
    || *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
  {
    return 3221225659LL;
  }
  else
  {
    return 0LL;
  }
}
