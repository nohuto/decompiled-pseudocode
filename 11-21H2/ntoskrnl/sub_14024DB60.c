/*
 * XREFs of sub_14024DB60 @ 0x14024DB60
 * Callers:
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 * Callees:
 *     sub_1402EDC48 @ 0x1402EDC48 (sub_1402EDC48.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_1407A4C90 @ 0x1407A4C90 (sub_1407A4C90.c)
 */

__int64 __fastcall sub_14024DB60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned int v6; // eax
  int v7; // ebx
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 48);
  v7 = a4;
  if ( (v6 & 0x200000) != 0 )
  {
    if ( (v6 & 8) != 0 && ((v6 >> 7) & 4) == 0 && (int)sub_1407A4C90(a4, a2, (int)a3 - (int)a2 + 1, 4, a6) < 0 )
      return 3221225550LL;
  }
  else
  {
    if ( *(_QWORD *)(**(_QWORD **)(a4 + 72) + 64LL) )
      return 3221226051LL;
    if ( ((v6 >> 7) & 4) == 0 )
      return 3221225550LL;
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x100) == 0
    || (*((_DWORD *)KeGetCurrentThread() + 344) & 0x40000) != 0
    || (result = sub_1402EDC48(*((_QWORD *)KeGetCurrentThread() + 23), a1, v7, 4, a2, a3), (int)result >= 0) )
  {
    result = sub_14033E5D0(a2, a3, v7, a5 != 0x80000, 0LL);
    if ( a5 == 0x80000 )
      return 0LL;
  }
  return result;
}
