/*
 * XREFs of ??$MakeSizedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@K_K@Z @ 0x1C012B3B8
 * Callers:
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x1C012B2F8 (--$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFre.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<_NDIS_PM_WOL_PATTERN>(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *Pool2; // rax
  void *v5; // rdi

  Pool2 = (void *)ExAllocatePool2(64LL, a3, 2021082190);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0xC4uLL);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
