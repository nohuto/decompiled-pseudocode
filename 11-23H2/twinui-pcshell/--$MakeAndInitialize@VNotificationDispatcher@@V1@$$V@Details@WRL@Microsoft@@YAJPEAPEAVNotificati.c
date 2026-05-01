/*
 * XREFs of ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x18012F384
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x18012DA34 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x180139174 (-RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewColl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18005F5C4 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18012F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ @ 0x18012F4C4 (-RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>(
        __int64 *a1)
{
  void *v2; // rax
  __int64 v3; // rbx
  volatile int *v4; // rdx
  int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (__int64)v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>(v2);
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)v3 = &NotificationDispatcher::`vftable';
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)(v3 + 56) = 0LL;
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    InitializeSRWLock((PSRWLOCK)(v3 + 80));
    *(_BYTE *)(v3 + 88) = 0;
    v7 = v3;
    v5 = NotificationDispatcher::RuntimeClassInitialize((NotificationDispatcher *)v3);
    if ( v5 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 36), v4);
      v5 = 0;
      *a1 = v3;
    }
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
