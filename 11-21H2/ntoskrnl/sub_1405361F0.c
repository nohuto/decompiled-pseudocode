/*
 * XREFs of sub_1405361F0 @ 0x1405361F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E08 @ 0x1403A2E08 (sub_1403A2E08.c)
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     sub_140537B84 @ 0x140537B84 (sub_140537B84.c)
 */

__int64 __fastcall sub_1405361F0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  int *v4; // rax

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  result = *(unsigned int *)(a1 + 112);
  if ( (_DWORD)result == 204 )
  {
    v3 = 3;
    goto LABEL_9;
  }
  if ( (_DWORD)result == 206 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x800) == 0 )
      return result;
    v3 = 4;
    goto LABEL_9;
  }
  v3 = *(unsigned __int8 *)(a1 + 108);
  if ( v3 != 66 )
  {
    if ( v3 != 26 || (result = sub_140537B84(), !(_BYTE)result) )
    {
LABEL_9:
      sub_1403A2E08(a1, *(_DWORD *)(a1 + 16));
      sub_1403A2E08(a1, *(unsigned __int16 *)(a1 + 58));
      sub_1403A2E08(a1, *(_DWORD *)(a1 + 20));
      v4 = sub_1403A3520(0, 0);
      *(_WORD *)(a1 + 58) = HIWORD(v4[v3]);
      result = LOWORD(v4[v3]);
      *(_DWORD *)(a1 + 20) = result;
    }
  }
  return result;
}
