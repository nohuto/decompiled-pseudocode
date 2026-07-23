/*
 * XREFs of sub_1406C9BF4 @ 0x1406C9BF4
 * Callers:
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14079B0D0 @ 0x14079B0D0 (sub_14079B0D0.c)
 *     sub_14091AB6C @ 0x14091AB6C (sub_14091AB6C.c)
 * Callees:
 *     sub_140248E20 @ 0x140248E20 (sub_140248E20.c)
 *     sub_1403C2120 @ 0x1403C2120 (sub_1403C2120.c)
 */

__int64 __fastcall sub_1406C9BF4(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6)
{
  unsigned int v6; // ebx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    sub_1403C2120(a2 + a4, a5, a6 != 0 ? 4 : 2);
    return 0;
  }
  else
  {
    v6 = 0;
    if ( a6 )
    {
      if ( !(unsigned int)sub_140248E20() )
        return (unsigned int)-1073741670;
    }
    else
    {
      sub_140248E20();
    }
  }
  return v6;
}
