/*
 * XREFs of sub_1405790F8 @ 0x1405790F8
 * Callers:
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 * Callees:
 *     sub_140568560 @ 0x140568560 (sub_140568560.c)
 */

signed __int64 sub_1405790F8()
{
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = _InterlockedCompareExchange64(&qword_140C2AAB0, (signed __int64)CurrentPrcb, 0LL);
  if ( !result )
  {
    sub_140568560(1);
    LODWORD(dword_140C2AAB8) = *((_DWORD *)CurrentPrcb + 8279);
    result = *((unsigned int *)CurrentPrcb + 8280);
    LODWORD(dword_140C2AABC) = *((_DWORD *)CurrentPrcb + 8280);
  }
  return result;
}
