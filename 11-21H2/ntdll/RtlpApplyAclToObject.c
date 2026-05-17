/*
 * XREFs of RtlpApplyAclToObject @ 0x18000F1D0
 * Callers:
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlMapGenericMask @ 0x180012190 (RtlMapGenericMask.c)
 */

void __fastcall RtlpApplyAclToObject(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 *i; // rbx
  int v6; // ecx
  int v7; // eax

  if ( a1 )
  {
    v2 = 0;
    for ( i = (unsigned __int8 *)(a1 + 8); v2 < *(unsigned __int16 *)(a1 + 4); i += *((unsigned __int16 *)i + 1) )
    {
      if ( (*i < 0xBu || (unsigned __int8)(*i - 13) <= 1u) && (i[1] & 8) == 0 )
      {
        RtlMapGenericMask(i + 4, a2);
        if ( *i <= 0xAu && (v6 = 1651, _bittest(&v6, *i)) )
          v7 = *(_DWORD *)(a2 + 12);
        else
          v7 = *(_DWORD *)(a2 + 12) | 0x1000000;
        *((_DWORD *)i + 1) &= v7;
      }
      ++v2;
    }
  }
}
