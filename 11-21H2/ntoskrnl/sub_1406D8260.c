/*
 * XREFs of sub_1406D8260 @ 0x1406D8260
 * Callers:
 *     <none>
 * Callees:
 *     sub_140202064 @ 0x140202064 (sub_140202064.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14035C864 @ 0x14035C864 (sub_14035C864.c)
 *     sub_1407D6F54 @ 0x1407D6F54 (sub_1407D6F54.c)
 */

void __fastcall sub_1406D8260(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rcx

  if ( byte_140D0505E )
  {
    v2 = *(_DWORD *)(a1 + 2172);
    if ( a2 )
    {
      if ( (v2 & 0x4000000) == 0 )
        return;
      _InterlockedAnd((volatile signed __int32 *)(a1 + 2172), 0xFBFFFFFF);
    }
    else
    {
      if ( (v2 & 0x4000000) != 0 )
        return;
      _InterlockedOr((volatile signed __int32 *)(a1 + 2172), 0x4000000u);
    }
    if ( (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 )
    {
      sub_140202064(a1);
      LOBYTE(v3) = 1;
      sub_1407D6F54(v3);
      sub_14035C864(0, 0, 0LL);
      ExReleaseResourceLite(&stru_140C15AC0);
      KeLeaveCriticalRegion();
    }
  }
}
