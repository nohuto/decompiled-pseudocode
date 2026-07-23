/*
 * XREFs of EtwpReferenceGuidEntry @ 0x1406BF944
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x1403697B4 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE840 (EtwpAddRegEntryToGroup.c)
 *     EtwpGetNextGuidEntry @ 0x1406BF110 (EtwpGetNextGuidEntry.c)
 *     EtwpInitializeRegEntry @ 0x1406BF5F0 (EtwpInitializeRegEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406BF850 (EtwpFindGuidEntryByGuid.c)
 *     EtwpCreateUmReplyObject @ 0x14077ECBC (EtwpCreateUmReplyObject.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140780A68 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x140781A68 (EtwpAddGuidEntry.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

char __fastcall EtwpReferenceGuidEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  v1 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 32), v1 + 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
    if ( !v2 )
      return 0;
  }
  if ( v1 < 0 )
    KeBugCheckEx(0x11Du, 9uLL, BugCheckParameter2, 0LL, 0LL);
  return 1;
}
