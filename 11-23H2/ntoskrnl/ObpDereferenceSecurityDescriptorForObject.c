/*
 * XREFs of ObpDereferenceSecurityDescriptorForObject @ 0x1406C310C
 * Callers:
 *     ObQuerySecurityDescriptorInfo @ 0x1406C09EC (ObQuerySecurityDescriptorInfo.c)
 *     ObpAdjustCreatorAccessState @ 0x1406C2B38 (ObpAdjustCreatorAccessState.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C30E0 (ObReleaseObjectSecurityEx.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140728C50 (ObDereferenceSecurityDescriptor.c)
 */

signed __int64 __fastcall ObpDereferenceSecurityDescriptorForObject(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a2 + 40));
  result = *(_QWORD *)(a2 + 40);
  if ( (a1 ^ (unsigned __int64)result) >= 0xF )
    return ObDereferenceSecurityDescriptor(a1, 1LL);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), result + 1, result);
    if ( v3 == result )
      break;
    if ( (a1 ^ (unsigned __int64)result) >= 0xF )
      return ObDereferenceSecurityDescriptor(a1, 1LL);
  }
  return result;
}
