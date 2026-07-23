/*
 * XREFs of sub_1405362A0 @ 0x1405362A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2F5C @ 0x1403A2F5C (sub_1403A2F5C.c)
 */

__int64 __fastcall sub_1405362A0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 138) )
  {
    *(_DWORD *)(a1 + 120) = 3;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 44);
    result = sub_1403A2F5C(a1);
    *(_DWORD *)(a1 + 44) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 1;
    *(_WORD *)(a1 + 40) = *(_WORD *)(a1 + 44);
    result = sub_1403A2F5C(a1);
    *(_WORD *)(a1 + 44) = result;
  }
  return result;
}
