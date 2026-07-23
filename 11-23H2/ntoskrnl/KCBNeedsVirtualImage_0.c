/*
 * XREFs of KCBNeedsVirtualImage_0 @ 0x140616990
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DE24 (CmQueryLayeredKey.c)
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x1406E2A70 (CmpIsKcbInsideVirtualizedHive.c)
 *     CmpIsSystemEntity @ 0x1407BA7DC (CmpIsSystemEntity.c)
 */

bool __fastcall KCBNeedsVirtualImage_0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( !CmpVEEnabled || (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 || !(unsigned __int8)CmpIsKcbInsideVirtualizedHive() )
    return 0;
  LOBYTE(v2) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v2, v1, 0LL) == 0;
}
