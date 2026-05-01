/*
 * XREFs of ?ForceReleaseExternalResources@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800829BC
 * Callers:
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18008BA6C (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003AE4C (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceManager::ForceReleaseExternalResources(
        ExecutionModel::ResourceManager *this,
        int a2)
{
  char *v2; // rsi
  char *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = (char *)this + 88;
  v4 = (char *)*((_QWORD *)this + 11);
  while ( v2 != v4 )
  {
    v5 = *((_QWORD *)v4 + 4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v4 = *(char **)v4;
    if ( *(_DWORD *)(v5 + 8) == a2 )
      ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify((HANDLE *)v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v11 = 0;
    v9 = &v7;
    v7 = a2;
    v10 = 4;
    tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_1800C34EB, 0LL, 0LL, 3u, &v8);
  }
}
