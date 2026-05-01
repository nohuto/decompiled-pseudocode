/*
 * XREFs of ?s_CreateInstance@CDesktopVisibilityChangeHelper@@SAJPEAUIDesktopVisibilityChangesNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B6510
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800B6134 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z @ 0x1800B7464 (--0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopVisibilityChangeHelper::s_CreateInstance(
        struct IDesktopVisibilityChangesNotification *a1,
        const struct _GUID *a2,
        void **a3)
{
  CDesktopVisibilityChangeHelper *v5; // rax
  CDesktopVisibilityChangeHelper *v6; // rax
  CDesktopVisibilityChangeHelper *v7; // rbx
  unsigned int v8; // edi

  *a3 = 0LL;
  v5 = (CDesktopVisibilityChangeHelper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CDesktopVisibilityChangeHelper::CDesktopVisibilityChangeHelper(v5, a1);
    v7 = v6;
    if ( v6 )
    {
      v8 = (**(__int64 (__fastcall ***)(CDesktopVisibilityChangeHelper *, GUID *, void **))v6)(
             v6,
             &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
             a3);
      goto LABEL_4;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v8 = -2147024882;
LABEL_4:
  if ( v7 )
    (*(void (__fastcall **)(CDesktopVisibilityChangeHelper *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
