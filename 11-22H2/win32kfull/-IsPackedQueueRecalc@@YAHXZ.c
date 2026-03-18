/*
 * XREFs of ?IsPackedQueueRecalc@@YAHXZ @ 0x1C005C618
 * Callers:
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C005C4B0 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C005C4E0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C005C5D4 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPackedQueueRecalc(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetUserSessionState(a1);
  return *(_QWORD *)(v1 + 16880) != v1 + 16880;
}
