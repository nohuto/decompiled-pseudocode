/*
 * XREFs of sub_14098C094 @ 0x14098C094
 * Callers:
 *     sub_14099613C @ 0x14099613C (sub_14099613C.c)
 *     sub_14099F0A0 @ 0x14099F0A0 (sub_14099F0A0.c)
 * Callees:
 *     sub_14099EB84 @ 0x14099EB84 (sub_14099EB84.c)
 */

__int64 __fastcall sub_14098C094(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 824));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++dword_140C24074;
    ++dword_140C24258;
    return sub_14099EB84(*(_QWORD *)(a1 + 48));
  }
  return result;
}
