/*
 * XREFs of sub_1C0066FC8 @ 0x1C0066FC8
 * Callers:
 *     sub_1C00031D0 @ 0x1C00031D0 (sub_1C00031D0.c)
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 *     sub_1C0066E34 @ 0x1C0066E34 (sub_1C0066E34.c)
 * Callees:
 *     sub_1C0066DC8 @ 0x1C0066DC8 (sub_1C0066DC8.c)
 */

__int64 __fastcall sub_1C0066FC8(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(result + 904) > 1u && a2 )
    {
      return sub_1C0066DC8(*(_QWORD *)(a1 + 48));
    }
    else if ( *(_DWORD *)(a1 + 40) )
    {
      result = *(unsigned int *)(a1 + 28);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 32) = result;
    }
  }
  return result;
}
