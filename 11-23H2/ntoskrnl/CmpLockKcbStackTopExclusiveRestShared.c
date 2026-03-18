/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x14070FB48
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D0A0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A190BC (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140A265AC (CmpPromoteKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1406D57A0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x1406D8468 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  int v1; // edx
  __int16 v2; // di
  __int64 v4; // rax
  __int64 KcbAtLayerHeight; // rax

  v1 = *(__int16 *)(a1 + 2);
  v2 = 0;
  if ( v1 - 1 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
      CmpLockKcbShared(KcbAtLayerHeight);
      LOWORD(v1) = *(_WORD *)(a1 + 2);
      ++v2;
    }
    while ( v2 <= (__int16)v1 - 1 );
  }
  v4 = CmpGetKcbAtLayerHeight(a1, v1);
  return CmpLockKcbExclusive(v4);
}
