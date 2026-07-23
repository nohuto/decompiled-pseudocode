/*
 * XREFs of PpHotSwapGetDevnodeRemovalPolicy @ 0x140793314
 * Callers:
 *     PiControlGetPropertyData @ 0x140792940 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x140792B90 (IoGetDeviceProperty.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C99C0 (PpDevNodeLockTree.c)
 *     PiHotSwapGetDetachableNode @ 0x1407DE358 (PiHotSwapGetDetachableNode.c)
 */

void __fastcall PpHotSwapGetDevnodeRemovalPolicy(__int64 a1, char a2, unsigned int *a3)
{
  unsigned __int8 v6; // al
  unsigned int v7; // ebx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  PpDevNodeLockTree(0);
  if ( a2 )
    v6 = *(_BYTE *)(a1 + 466);
  else
    v6 = *(_BYTE *)(a1 + 467);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 != 1 && v6 != 2 && v6 != 3 )
    {
      if ( v6 == 4 || (v7 = 3, v6 != 5) )
        v7 = 2;
    }
  }
  else
  {
    PiHotSwapGetDetachableNode(a1, &v8);
    if ( v8 )
      v7 = (~*(_BYTE *)(v8 + 560) & 8 | 0x10u) >> 3;
    else
      v7 = 1;
  }
  PpDevNodeUnlockTree(0);
  *a3 = v7;
}
