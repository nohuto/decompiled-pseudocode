/*
 * XREFs of sub_1403A2850 @ 0x1403A2850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E08 @ 0x1403A2E08 (sub_1403A2E08.c)
 */

__int64 __fastcall sub_1403A2850(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  if ( *(_DWORD *)(a1 + 112) == 154 || *(_DWORD *)(a1 + 124) != 32 )
  {
    sub_1403A2E08(a1, *(unsigned __int16 *)(a1 + 58));
    sub_1403A2E08(a1, *(unsigned int *)(a1 + 20));
    result = *(unsigned __int16 *)(a1 + 82);
    *(_WORD *)(a1 + 58) = result;
  }
  else
  {
    result = sub_1403A2E08(a1, *(unsigned int *)(a1 + 20));
  }
  *(_DWORD *)(a1 + 20) = v2;
  return result;
}
