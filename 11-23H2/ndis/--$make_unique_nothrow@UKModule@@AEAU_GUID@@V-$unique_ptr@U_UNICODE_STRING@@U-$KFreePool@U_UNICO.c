/*
 * XREFs of ??$make_unique_nothrow@UKModule@@AEAU_GUID@@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AV?$unique_ptr@UKModule@@U?$default_delete@UKModule@@@wistd@@@wistd@@AEAU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@2@@Z @ 0x1C00D0094
 * Callers:
 *     CreateKModule @ 0x1C0141160 (CreateKModule.c)
 * Callees:
 *     ??0KModule@@QEAA@AEBU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C014211C (--0KModule@@QEAA@AEBU_GUID@@$$QEAV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 */

__int64 *__fastcall wil::make_unique_nothrow<KModule,_GUID &,wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  PVOID PoolWithTag; // rcx
  __int64 v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x62694C4Eu);
  v7 = 0LL;
  if ( PoolWithTag )
    v7 = KModule::KModule(PoolWithTag, a2, a3);
  *a1 = v7;
  return a1;
}
