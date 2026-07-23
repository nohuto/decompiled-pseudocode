/*
 * XREFs of sub_14033FFD4 @ 0x14033FFD4
 * Callers:
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 * Callees:
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 */

__int64 __fastcall sub_14033FFD4(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v6; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 40);
  if ( v3 < 0 )
  {
    if ( (v3 & 0x10000000000LL) == 0 && *(__int64 *)(a2 + 8) > 0 || (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
      return 0LL;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
      return 0LL;
    if ( (sub_140313B20(a2, 0, 0LL) & 0xFFFFFFFD) != 0 )
      return 0LL;
    v6 = a3 << 25 >> 16;
    if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
      return 0LL;
  }
  result = 1LL;
  if ( *(_WORD *)(a2 + 32) != 1 || (*(_BYTE *)(a2 + 34) & 0xC0) != 0x40 || (*(_BYTE *)(a2 + 35) & 0x40) != 0 )
    return 0LL;
  return result;
}
