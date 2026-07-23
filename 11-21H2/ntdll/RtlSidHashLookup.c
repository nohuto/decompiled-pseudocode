/*
 * XREFs of RtlSidHashLookup @ 0x18007E670
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x180097B10 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  __int16 v6; // r8
  unsigned int v7; // r9d
  SID_HASH_ENTRY i; // rdi
  int v9; // esi
  int v10; // r12d
  _SID_AND_ATTRIBUTES *v11; // r15
  DWORD SidCount; // esi
  unsigned int v13; // edi
  PSID_AND_ATTRIBUTES SidAttr; // rbp
  const void **p_Sid; // rbx
  unsigned int v17; // [rsp+50h] [rbp+8h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = *((unsigned __int8 *)Sid + 1);
  v5 = 0;
  v6 = *(_WORD *)Sid;
  v7 = 4 * v4 + 8;
  v17 = v7;
  for ( i = SidAttrHash->Hash[*((_BYTE *)Sid + 4 * v4 + 4) & 0xF] & SidAttrHash->Hash[((unsigned __int64)*((unsigned __int8 *)Sid + 4 * v4 + 4) >> 4)
                                                                                    + 16]; i; i >>= 8 )
  {
    LOBYTE(v9) = i;
    if ( (_BYTE)i )
    {
      do
      {
        v10 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v9];
        v11 = &SidAttrHash->SidAttr[v10 + (unsigned int)v5];
        if ( *(_WORD *)v11->Sid == v6 )
        {
          if ( !memcmp(Sid, v11->Sid, v7) )
            return v11;
          v6 = *(_WORD *)Sid;
          v7 = v17;
        }
        v9 = (unsigned __int8)v9 ^ (1 << v10);
      }
      while ( (_BYTE)v9 );
    }
    v5 += 8;
  }
  SidCount = SidAttrHash->SidCount;
  v13 = 64;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  SidAttr = SidAttrHash->SidAttr;
  while ( 1 )
  {
    p_Sid = (const void **)&SidAttr[v13].Sid;
    if ( *(_WORD *)*p_Sid != v6 )
      goto LABEL_17;
    if ( !memcmp(Sid, *p_Sid, v7) )
      return &SidAttr[v13];
    v6 = *(_WORD *)Sid;
LABEL_17:
    if ( ++v13 >= SidCount )
      return 0LL;
    v7 = v17;
  }
}
