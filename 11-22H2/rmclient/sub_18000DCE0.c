/*
 * XREFs of sub_18000DCE0 @ 0x18000DCE0
 * Callers:
 *     pfnti @ 0x18000BF10 (pfnti.c)
 *     sub_180011320 @ 0x180011320 (sub_180011320.c)
 * Callees:
 *     sub_18000D940 @ 0x18000D940 (sub_18000D940.c)
 *     sub_18000F414 @ 0x18000F414 (sub_18000F414.c)
 *     sub_18000F66C @ 0x18000F66C (sub_18000F66C.c)
 *     sub_18000FC54 @ 0x18000FC54 (sub_18000FC54.c)
 */

char __fastcall sub_18000DCE0(__int64 a1)
{
  char result; // al

  result = sub_18000F66C();
  if ( !result )
  {
    result = sub_18000D940((RTL_SRWLOCK *)a1);
    if ( result )
    {
      sub_18000F414((LPCRITICAL_SECTION)(*(_QWORD *)(a1 + 24) + 200LL), *(PSRWLOCK *)(a1 + 24));
      return sub_18000FC54(*(PSRWLOCK *)(a1 + 24));
    }
  }
  return result;
}
