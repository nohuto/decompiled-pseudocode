/*
 * XREFs of ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x1800A0D5C
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x1800AF578 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x1800FF354 (-RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewColl.c)
 * Callees:
 *     ?RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ @ 0x1800A0E14 (-RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800EA9C8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18014731C (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rax
  RTL_SRWLOCK *v3; // rbx
  volatile int *v4; // rdx
  int v5; // edi
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (RTL_SRWLOCK *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>(v2);
    v3[5].Ptr = 0LL;
    v3->Ptr = &NotificationDispatcher::`vftable';
    v3[6].Ptr = 0LL;
    v3[7].Ptr = 0LL;
    v3[8].Ptr = 0LL;
    v3[9].Ptr = 0LL;
    InitializeSRWLock(v3 + 10);
    LOBYTE(v3[11].Ptr) = 0;
    v7 = v3;
    v5 = NotificationDispatcher::RuntimeClassInitialize((NotificationDispatcher *)v3);
    if ( v5 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v3[4].Ptr + 4), v4);
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
