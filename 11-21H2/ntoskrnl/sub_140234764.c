/*
 * XREFs of sub_140234764 @ 0x140234764
 * Callers:
 *     KeRundownQueue @ 0x140234660 (KeRundownQueue.c)
 *     sub_140234678 @ 0x140234678 (sub_140234678.c)
 *     sub_140796530 @ 0x140796530 (sub_140796530.c)
 * Callees:
 *     sub_140234888 @ 0x140234888 (sub_140234888.c)
 *     sub_140234D1C @ 0x140234D1C (sub_140234D1C.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 */

_QWORD *__fastcall sub_140234764(_QWORD *SystemArgument1, char a2)
{
  char CurrentIrql; // si
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v8; // r9
  _QWORD *v9; // rcx
  int v10; // [rsp+20h] [rbp-18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  sub_1402F3290(SystemArgument1);
  v5 = SystemArgument1 + 3;
  v6 = (_QWORD *)SystemArgument1[3];
  if ( v6 == SystemArgument1 + 3 )
  {
    v6 = 0LL;
  }
  else
  {
    *((_DWORD *)SystemArgument1 + 1) = 0;
    v9 = (_QWORD *)SystemArgument1[4];
    if ( (_QWORD *)v6[1] != v5 || (_QWORD *)*v9 != v5 )
      __fastfail(3u);
    *v9 = v6;
    v6[1] = v9;
    SystemArgument1[4] = SystemArgument1 + 3;
    *v5 = v5;
  }
  LOBYTE(v10) = a2;
  sub_140234888(SystemArgument1, v10);
  _InterlockedAnd((volatile signed __int32 *)SystemArgument1, 0xFFFFFF7F);
  if ( a2 )
    sub_140234D1C(SystemArgument1);
  sub_1402B0820((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
  return v6;
}
