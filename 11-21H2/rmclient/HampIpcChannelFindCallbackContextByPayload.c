/*
 * XREFs of HampIpcChannelFindCallbackContextByPayload @ 0x180009AF0
 * Callers:
 *     HamIpcChannelObjectMakeZombie @ 0x1800099BC (HamIpcChannelObjectMakeZombie.c)
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x180008680 (HampIpcChannelObjectComparePayloadForTree.c)
 */

__int64 __fastcall HampIpcChannelFindCallbackContextByPayload(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 v3; // rcx
  int v4; // esi
  __int64 v6; // rbx
  int v8; // eax
  __int64 v9; // rax

  v2 = *(_BYTE *)(a1 + 32);
  v3 = a1 + 24;
  v4 = v2 & 1;
  v6 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v6 )
      return 0LL;
    v6 ^= v3;
  }
  if ( !v6 )
    return 0LL;
  do
  {
    v8 = HampIpcChannelObjectComparePayloadForTree(a2, v6);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        return v6;
      v9 = *(_QWORD *)(v6 + 8);
      if ( !v4 || !v9 )
      {
LABEL_9:
        v6 = v9;
        continue;
      }
    }
    else
    {
      v9 = *(_QWORD *)v6;
      if ( !v4 || !v9 )
        goto LABEL_9;
    }
    v6 ^= v9;
  }
  while ( v6 );
  return 0LL;
}
