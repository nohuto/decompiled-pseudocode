/*
 * XREFs of sub_140A51338 @ 0x140A51338
 * Callers:
 *     sub_140A50D3C @ 0x140A50D3C (sub_140A50D3C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140A51338(char a1, __int64 a2)
{
  char v2; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  v2 = 1;
  if ( (a1 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a2 + 136));
    v4 = *(_DWORD *)(a2 + 136);
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 136), v4, v4);
    }
    while ( v5 != v4 );
    return BYTE1(v4) & 1;
  }
  return v2;
}
