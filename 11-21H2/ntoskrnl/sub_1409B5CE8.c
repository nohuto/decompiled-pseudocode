/*
 * XREFs of sub_1409B5CE8 @ 0x1409B5CE8
 * Callers:
 *     sub_14097AD20 @ 0x14097AD20 (sub_14097AD20.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 */

unsigned __int8 __fastcall sub_1409B5CE8(unsigned int a1)
{
  int v2; // eax
  unsigned __int8 v3; // bl

  v2 = *(_DWORD *)(4 * ((unsigned __int64)a1 >> 8) - 0x87FFFFFFC94LL);
  v3 = _bittest(&v2, a1 & 0x1F);
  if ( PsIsCurrentThreadInServerSilo() && a1 == 8 )
    return 0;
  return v3;
}
