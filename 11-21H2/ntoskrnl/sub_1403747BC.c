/*
 * XREFs of sub_1403747BC @ 0x1403747BC
 * Callers:
 *     sub_140373DA0 @ 0x140373DA0 (sub_140373DA0.c)
 *     sub_140374708 @ 0x140374708 (sub_140374708.c)
 *     sub_140974B60 @ 0x140974B60 (sub_140974B60.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403747BC(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // ecx

  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    {
      v4 = *(_DWORD *)(a1 - 184);
      result = 0LL;
    }
    else
    {
      result = 0LL;
      v4 = 0;
    }
  }
  else
  {
    result = a1 - 216;
    v4 = *(_DWORD *)(a1 - 576);
  }
  *a2 = v4;
  *a3 = result;
  return result;
}
