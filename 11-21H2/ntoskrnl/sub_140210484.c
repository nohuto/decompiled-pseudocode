/*
 * XREFs of sub_140210484 @ 0x140210484
 * Callers:
 *     sub_140210C14 @ 0x140210C14 (sub_140210C14.c)
 *     sub_1402447EC @ 0x1402447EC (sub_1402447EC.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140210484(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 - 96) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 752), 0xFFFBFFFF);
  v3 = *(_QWORD **)a2;
  v4 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v4 != a2 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 32472) ^= 1 << a3;
  --*(_DWORD *)(a1 + 33140);
  result = *(unsigned int *)(a2 + 1432);
  *(_QWORD *)(a1 + 33144) -= result;
  return result;
}
