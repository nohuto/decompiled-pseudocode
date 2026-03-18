/*
 * XREFs of CmListGetPrevElement @ 0x1407C5000
 * Callers:
 *     CmpGetEffectiveCellType @ 0x1406804C4 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140680518 (CmpUndoDeleteKeyForTransEx.c)
 *     CmGetKeyLastWriteTime @ 0x1406D51B4 (CmGetKeyLastWriteTime.c)
 *     CmGetKCBCacheSecurity @ 0x1406D57C0 (CmGetKCBCacheSecurity.c)
 *     CmpQueryKeyDataFromNode @ 0x1406DAA50 (CmpQueryKeyDataFromNode.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmGetKeyFlags @ 0x1407EAA30 (CmGetKeyFlags.c)
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
