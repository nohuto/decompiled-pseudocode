/*
 * XREFs of EtwpReferenceUmGuidEntry @ 0x18005EF08
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180031F78 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpFindGuidEntry @ 0x18003234C (EtwpFindGuidEntry.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpReferenceUmGuidEntry(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 52));
  v1 = *(_DWORD *)(a1 + 52);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
