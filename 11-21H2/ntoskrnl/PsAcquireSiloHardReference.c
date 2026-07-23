/*
 * XREFs of PsAcquireSiloHardReference @ 0x14020B190
 * Callers:
 *     sub_14071CAFC @ 0x14071CAFC (sub_14071CAFC.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PsAcquireSiloHardReference(_DWORD *Object)
{
  signed __int64 v2; // rax
  unsigned __int64 i; // rcx
  signed __int64 v4; // rtt

  if ( !Object )
    return 0LL;
  if ( (Object[378] & 0x40000000) == 0 )
    __int2c();
  _m_prefetchw(Object + 428);
  v2 = *((_QWORD *)Object + 214);
  for ( i = v2 + 1; i > 1; i = v2 + 1 )
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 214, i, v2);
    if ( v4 == v2 )
    {
      ObfReferenceObjectWithTag(Object, 0x486C6953u);
      return 0LL;
    }
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 3221225738LL;
}
