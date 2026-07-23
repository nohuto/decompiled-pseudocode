/*
 * XREFs of sub_140583D08 @ 0x140583D08
 * Callers:
 *     sub_1405A2710 @ 0x1405A2710 (sub_1405A2710.c)
 *     sub_140A81214 @ 0x140A81214 (sub_140A81214.c)
 *     sub_140A898F0 @ 0x140A898F0 (sub_140A898F0.c)
 *     sub_140A89AB0 @ 0x140A89AB0 (sub_140A89AB0.c)
 * Callees:
 *     sub_14056A19C @ 0x14056A19C (sub_14056A19C.c)
 */

__int64 __fastcall sub_140583D08(__int64 a1)
{
  if ( (dword_140D06880 & 0x8000) != 0
    || !(unsigned int)sub_14056A19C(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 48) + *(unsigned int *)(a1 + 64)) )
  {
    return 0LL;
  }
  else
  {
    return 3221228558LL;
  }
}
