/*
 * XREFs of sub_140298680 @ 0x140298680
 * Callers:
 *     sub_1402985E4 @ 0x1402985E4 (sub_1402985E4.c)
 * Callees:
 *     sub_1402989A8 @ 0x1402989A8 (sub_1402989A8.c)
 *     PsWow64GetProcessMachine @ 0x1407048B0 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall sub_140298680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001 )
    return 0LL;
  if ( (unsigned __int16)PsWow64GetProcessMachine(v5) != 332 && (!*(_QWORD *)(v5 + 2240) || *(_WORD *)(a2 + 56) != 35) )
    *(_WORD *)(a2 + 56) = 51;
  if ( !a4 )
    return 0LL;
  result = sub_1402989A8(a1, a2, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
