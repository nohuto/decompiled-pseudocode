/*
 * XREFs of sub_1407BC8F0 @ 0x1407BC8F0
 * Callers:
 *     sub_14030FEC0 @ 0x14030FEC0 (sub_14030FEC0.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 */

unsigned __int64 __fastcall sub_1407BC8F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax

  v3 = *(unsigned int *)(a1 + 52);
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  result = v3 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  if ( result >= 0x7FFFFFFFDLL )
  {
    if ( result == 0x7FFFFFFFDLL )
      return PsReturnProcessNonPagedPoolQuota(a2, 64LL);
  }
  else
  {
    result = PsReturnProcessNonPagedPoolQuota(a2, 136LL);
    if ( a3 )
    {
      result = sub_140319990(a1);
      if ( !(_DWORD)result )
        return PsReturnProcessPagedPoolQuota(
                 a2,
                 8
               * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
               + 8);
    }
  }
  return result;
}
