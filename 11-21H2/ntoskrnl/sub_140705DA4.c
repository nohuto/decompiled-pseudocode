/*
 * XREFs of sub_140705DA4 @ 0x140705DA4
 * Callers:
 *     sub_1402985E4 @ 0x1402985E4 (sub_1402985E4.c)
 *     sub_140705578 @ 0x140705578 (sub_140705578.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140705DA4(unsigned int a1, __int64 a2)
{
  _DWORD *v2; // r9
  unsigned int v3; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v6; // [rsp+10h] [rbp+10h]

  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 || *((_BYTE *)CurrentThread + 586) == 1 )
      a2 = 0LL;
    else
      a2 = *((_QWORD *)CurrentThread + 30);
  }
  v2 = (_DWORD *)((a2 + 0x2000) & -(__int64)(a2 != 0));
  v6 = v2[1];
  v3 = v2[2];
  if ( a1 >= v3 && a1 <= v6 )
    return 1LL;
  return v3 != v2[899] && a1 >= v3 - 4096 && a1 <= v6;
}
