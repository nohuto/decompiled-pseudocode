/*
 * XREFs of sub_14023C084 @ 0x14023C084
 * Callers:
 *     sub_1403C6970 @ 0x1403C6970 (sub_1403C6970.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 * Callees:
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F6BC0 @ 0x1402F6BC0 (sub_1402F6BC0.c)
 */

__int64 __fastcall sub_14023C084(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  int v6; // r13d
  volatile CCHAR v7; // cl
  unsigned __int64 v8; // rbx
  char CurrentIrql; // r15
  _QWORD *v10; // rdi
  _QWORD *v11; // rdx
  __int64 v13; // rax
  __int64 v14; // r9

  v4 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = KeNumberProcessors[1];
  v8 = (unsigned __int64)((a2 * (unsigned __int128)(unsigned __int64)qword_140D06FF0) >> 64) >> v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  sub_1402F3290(a1);
  v10 = *(_QWORD **)(a1 + 16);
  while ( v10 != (_QWORD *)(a1 + 8) && v4 < a3 )
  {
    v11 = v10;
    v10 = (_QWORD *)v10[1];
    if ( *((_BYTE *)v11 + 16) == 3 )
    {
      if ( v6 - *(_DWORD *)(v11[3] + 436LL) < (unsigned int)v8 )
        break;
      v13 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v10 != v11 )
        __fastfail(3u);
      *v10 = v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( (unsigned __int8)sub_1402F6BC0(KeGetCurrentPrcb(), v11, 258LL, 0LL) )
        ++v4;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  sub_1402B0820((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
  return v4;
}
