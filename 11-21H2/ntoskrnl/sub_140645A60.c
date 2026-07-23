/*
 * XREFs of sub_140645A60 @ 0x140645A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140645708 @ 0x140645708 (sub_140645708.c)
 */

__int64 __fastcall sub_140645A60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( *(_DWORD *)(a2 + 56) == 7 )
    return sub_140645708(a1, a2, a3, a4);
  else
    return 3221225474LL;
}
