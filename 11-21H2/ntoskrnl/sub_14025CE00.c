/*
 * XREFs of sub_14025CE00 @ 0x14025CE00
 * Callers:
 *     sub_140255E2C @ 0x140255E2C (sub_140255E2C.c)
 * Callees:
 *     <none>
 */

__int64 sub_14025CE00()
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  result = (__int64)KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw((char *)CurrentPrcb + 1772);
  if ( (*((_BYTE *)CurrentPrcb + 1772) & 4) != 0 )
  {
    result = *(_QWORD *)(*(_QWORD *)(result + 184) + 2528LL);
    if ( result != *((_QWORD *)CurrentPrcb + 219) )
    {
      result = 2LL;
      _InterlockedOr16((volatile signed __int16 *)CurrentPrcb + 886, 2u);
    }
  }
  return result;
}
