/*
 * XREFs of sub_140291EE4 @ 0x140291EE4
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     sub_1402EBB58 @ 0x1402EBB58 (sub_1402EBB58.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402EC8A4 @ 0x1402EC8A4 (sub_1402EC8A4.c)
 *     sub_1402EE104 @ 0x1402EE104 (sub_1402EE104.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 */

__int64 __fastcall sub_140291EE4(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // edx
  bool v5; // r9
  __int64 v6; // r10
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // rcx
  bool v11; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(char *)(a2 + 563);
  v4 = *(_DWORD *)(a2 + 540);
  v5 = 0;
  v6 = (unsigned __int8)v4;
  if ( (unsigned __int8)v4 == (_DWORD)v2 )
    return sub_140224100(a2);
  v9 = v4 & 0x100;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v10 + 4 * v2 + 536), 1u);
    v5 = (int)v2 < (int)v6;
  }
  *(_DWORD *)(a2 + 540) = v9 | (unsigned __int8)v2;
  if ( !v5 )
    return sub_140224100(a2);
  v11 = !_interlockedbittestandset(a1, 7u);
  sub_140224100(a2);
  if ( v11 )
    result = sub_1402EC8A4(a1);
  else
    result = sub_1402EE104(a2, a1, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( *((_QWORD *)CurrentPrcb + 1441) )
    return sub_140340390(CurrentPrcb, 1LL, 0LL, 0LL);
  return result;
}
