/*
 * XREFs of CmListGetPrevElement @ 0x1407C52D0
 * Callers:
 *     CmpGetEffectiveCellType @ 0x1406804C4 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140680518 (CmpUndoDeleteKeyForTransEx.c)
 *     CmGetKeyLastWriteTime @ 0x1406D51E4 (CmGetKeyLastWriteTime.c)
 *     CmGetKCBCacheSecurity @ 0x1406D57F0 (CmGetKCBCacheSecurity.c)
 *     CmpQueryKeyDataFromNode @ 0x1406DAA80 (CmpQueryKeyDataFromNode.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmGetKeyFlags @ 0x1407EAD00 (CmGetKeyFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmListGetPrevElement(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8

  v2 = *a2;
  if ( !*a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *a2 = v2;
  }
  if ( a1 == v2 )
    return 0LL;
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 - 32;
}
