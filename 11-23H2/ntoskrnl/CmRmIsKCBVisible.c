/*
 * XREFs of CmRmIsKCBVisible @ 0x1407B39E0
 * Callers:
 *     CmRmIsKcbStackVisible @ 0x140680480 (CmRmIsKcbStackVisible.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5680 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DAFD0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1407691C0 (CmEqualTrans.c)
 */

bool __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 240);
  return !v3 || CmEqualTrans(a2, v3) != 0;
}
