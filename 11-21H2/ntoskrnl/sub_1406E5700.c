/*
 * XREFs of sub_1406E5700 @ 0x1406E5700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E5700(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // r8
  __int64 v4; // r10

  v1 = *(_QWORD *)(a1 + 1264);
  if ( v1 )
  {
    if ( _bittest((const signed __int32 *)(v1 + 1512), 0xCu) )
      return 0LL;
    v3 = (_QWORD *)(v1 + 1080);
    v4 = 7LL;
    do
    {
      *v3 += *(_QWORD *)((char *)v3 + a1 - v1);
      ++v3;
      --v4;
    }
    while ( v4 );
    *(_QWORD *)(v1 + 1136) += *(_QWORD *)(a1 + 1136);
  }
  if ( !_bittest((const signed __int32 *)(a1 + 1512), 0xCu) )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 1512), 0xCu);
  return 0LL;
}
