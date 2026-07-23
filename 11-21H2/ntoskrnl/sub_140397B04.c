/*
 * XREFs of sub_140397B04 @ 0x140397B04
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x140397A80 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403565F8 @ 0x1403565F8 (sub_1403565F8.c)
 *     sub_14035666C @ 0x14035666C (sub_14035666C.c)
 *     sub_1403567F8 @ 0x1403567F8 (sub_1403567F8.c)
 *     sub_140356BCC @ 0x140356BCC (sub_140356BCC.c)
 */

__int64 __fastcall sub_140397B04(__int64 a1)
{
  KIRQL v2; // si
  unsigned int v4; // ebx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v4 = *(_DWORD *)(a1 + 120);
    sub_140356BCC(a1, 0LL, 0, 0);
    sub_1403567F8(a1, 0LL, 1);
    sub_14035666C(v4, *(_DWORD *)(a1 + 120));
  }
  return sub_1403565F8(a1, 0LL, 1, v2);
}
