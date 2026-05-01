/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopCollection@@V1@AEAPEAUIThumbnailDeviceSource@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopCollection@@AEAPEAUIThumbnailDeviceSource@@@Z @ 0x18013DDF8
 * Callers:
 *     ?VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x18013F2D4 (-VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0VirtualDesktopCollection@@QEAA@XZ @ 0x18013E238 (--0VirtualDesktopCollection@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopCollection2@5678@UIVirtualDesktopCollectionInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141010 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCo.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollection,VirtualDesktopCollection,IThumbnailDeviceSource * &>(
        VirtualDesktopCollection **a1,
        __int64 *a2)
{
  VirtualDesktopCollection *v4; // rax
  volatile int *v5; // rdx
  VirtualDesktopCollection *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  unsigned int v11; // esi

  *a1 = 0LL;
  v4 = (VirtualDesktopCollection *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = VirtualDesktopCollection::VirtualDesktopCollection(v4);
    v7 = *a2;
    v8 = *((_QWORD *)v6 + 32);
    *((_QWORD *)v6 + 32) = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v6 )
    {
      v9 = *((_QWORD *)v6 + 10);
      while ( v9 >= 0 )
      {
        if ( (_DWORD)v9 != 0x7FFFFFFF )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 10, v9 + 1, v9);
          if ( v10 != v9 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v9 + 16), v5);
LABEL_11:
      v11 = 0;
      *a1 = v6;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection2,IVirtualDesktopCollectionInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(v6);
    }
    else
    {
      *a1 = 0LL;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v11;
}
