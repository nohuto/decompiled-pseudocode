/*
 * XREFs of ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18030C3B8
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180081F20 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@@Z @ 0x180304770 (-GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CImmersiveApplicationWindow@@QEAA@PEAUHWND__@@@Z @ 0x18030C334 (--0CImmersiveApplicationWindow@@QEAA@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApplicationWindow_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  CImmersiveApplicationWindow *v5; // rax
  CImmersiveApplicationWindow *v6; // rax
  CImmersiveApplicationWindow *v7; // rbx
  unsigned int v8; // edi

  *a3 = 0LL;
  v5 = (CImmersiveApplicationWindow *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CImmersiveApplicationWindow::CImmersiveApplicationWindow(v5, a1);
    v7 = v6;
    if ( v6 )
    {
      v8 = (**(__int64 (__fastcall ***)(CImmersiveApplicationWindow *, GUID *, void **))v6)(
             v6,
             &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
             a3);
      goto LABEL_6;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v8 = -2147024882;
LABEL_6:
  if ( v7 )
    (*(void (__fastcall **)(CImmersiveApplicationWindow *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
