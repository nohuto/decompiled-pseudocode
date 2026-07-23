/*
 * XREFs of sub_14090AA30 @ 0x14090AA30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140908DD4 @ 0x140908DD4 (sub_140908DD4.c)
 */

__int64 __fastcall sub_14090AA30(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 48) )
    return 3221227272LL;
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 16), 1) != 2 )
    return (unsigned int)sub_140908DD4((__int64 *)a1);
  return v1;
}
