/*
 * XREFs of sub_1403B40EC @ 0x1403B40EC
 * Callers:
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1405910C0 @ 0x1405910C0 (sub_1405910C0.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 sub_1403B40EC()
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v3; // rsi
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  v2 = *((_DWORD *)CurrentPrcb + 8341);
  if ( word_140D05000 )
  {
    v3 = qword_140C506E0 + 112;
    do
    {
      if ( v1 != v2 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v3 + 128LL));
      v3 += 120LL;
      ++v1;
    }
    while ( v1 < (unsigned __int16)word_140D05000 );
  }
  result = *((_QWORD *)CurrentPrcb + 4199);
  *(_DWORD *)(*(_QWORD *)(result + 12488) + 128LL) = 1;
  return result;
}
