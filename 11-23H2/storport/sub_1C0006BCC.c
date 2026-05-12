/*
 * XREFs of sub_1C0006BCC @ 0x1C0006BCC
 * Callers:
 *     sub_1C00042F0 @ 0x1C00042F0 (sub_1C00042F0.c)
 *     sub_1C0022A14 @ 0x1C0022A14 (sub_1C0022A14.c)
 *     sub_1C004096C @ 0x1C004096C (sub_1C004096C.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_1C0006BCC(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 22) & 6) != 0 )
  {
    --*(_DWORD *)(a1 + 16);
  }
  else
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFF00000000uLL);
    if ( *(_BYTE *)(a2 + 22) )
      --*(_DWORD *)(a1 + 32);
  }
  if ( (*(_BYTE *)(a2 + 22) & 8) != 0 )
    --*(_DWORD *)(a1 + 20);
  return result;
}
