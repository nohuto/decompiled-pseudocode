/*
 * XREFs of sub_1407048D8 @ 0x1407048D8
 * Callers:
 *     sub_1402985E4 @ 0x1402985E4 (sub_1402985E4.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1407048D8(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v6; // [rsp+10h] [rbp+10h]

  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 || *((_BYTE *)CurrentThread + 586) == 1 )
      a2 = 0LL;
    else
      a2 = (_QWORD *)*((_QWORD *)CurrentThread + 30);
  }
  v6 = a2[1];
  v3 = a2[2];
  if ( a1 >= v3 && a1 <= v6 )
    return 1LL;
  return v3 != a2[655] && a1 >= v3 - 4096 && a1 <= v6;
}
