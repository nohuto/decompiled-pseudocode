/*
 * XREFs of RtlSidHashInitialize @ 0x1402E1660
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     sub_1402E1484 @ 0x1402E1484 (sub_1402E1484.c)
 *     sub_14066B830 @ 0x14066B830 (sub_14066B830.c)
 *     sub_1406A293C @ 0x1406A293C (sub_1406A293C.c)
 *     sub_1406B6958 @ 0x1406B6958 (sub_1406B6958.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_140799BB0 @ 0x140799BB0 (sub_140799BB0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     sub_1409CE94C @ 0x1409CE94C (sub_1409CE94C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __cdecl RtlSidHashInitialize(
        PSID_AND_ATTRIBUTES SidAttr,
        ULONG SidCount,
        PSID_AND_ATTRIBUTES_HASH SidAttrHash)
{
  __int64 v6; // rax
  __int64 v7; // r9
  _BYTE *Sid; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx

  if ( !SidAttrHash )
    return -1073741811;
  memset(SidAttrHash, 0, sizeof(_SID_AND_ATTRIBUTES_HASH));
  if ( SidAttr && SidCount )
  {
    SidAttrHash->SidAttr = SidAttr;
    SidAttrHash->SidCount = SidCount;
    if ( SidCount > 0x40 )
      SidCount = 64;
    v6 = 1LL;
    v7 = SidCount;
    do
    {
      Sid = SidAttr->Sid;
      ++SidAttr;
      v9 = (unsigned __int8)Sid[4 * (unsigned __int8)Sid[1] + 4];
      v10 = Sid[4 * (unsigned __int8)Sid[1] + 4] & 0xF;
      SidAttrHash->Hash[v10] |= v6;
      SidAttrHash->Hash[((unsigned __int64)v9 >> 4) + 16] |= v6;
      v6 = __ROL8__(v6, 1);
      --v7;
    }
    while ( v7 );
  }
  return 0;
}
