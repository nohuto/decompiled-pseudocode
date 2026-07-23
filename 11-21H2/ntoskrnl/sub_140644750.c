/*
 * XREFs of sub_140644750 @ 0x140644750
 * Callers:
 *     <none>
 * Callees:
 *     sub_140645708 @ 0x140645708 (sub_140645708.c)
 */

__int64 __fastcall sub_140644750(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int128 v8; // xmm0

  if ( a4 < 0xC8 )
    return 3221225507LL;
  if ( *(_DWORD *)(a2 + 56) != 7 )
    return 3221225474LL;
  result = sub_140645708();
  *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 104);
  *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 120);
  v8 = *(_OWORD *)(a1 + 44);
  *(_DWORD *)(a3 + 16) |= 5u;
  *(_OWORD *)(a3 + 32) = v8;
  *(_DWORD *)(a3 + 104) ^= (*(_DWORD *)(a3 + 104) ^ (8 * *(_DWORD *)(a2 + 12))) & 0x10;
  return result;
}
