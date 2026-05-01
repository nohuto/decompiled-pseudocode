/*
 * XREFs of ?AreVirtualDesktopsEnabled@@YA_NXZ @ 0x1800F4940
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180060A88 (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?IsCloudPCComponentEnabled@@YA_NXZ @ 0x1800F4910 (-IsCloudPCComponentEnabled@@YA_NXZ.c)
 *     _lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator() @ 0x18020E018 (_lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator().c)
 * Callees:
 *     ??R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ @ 0x1800F4C2C (--R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
char AreVirtualDesktopsEnabled(void)
{
  if ( __TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                      + (unsigned int)tls_index)
                                                                    + 16LL) )
  {
    Init_thread_header(&__TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA);
    if ( __TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA == -1 )
    {
      `AreVirtualDesktopsEnabled'::`2'::s_enabled = _lambda_fe990823f78b875c41e1c4896de2e063_::operator()();
      Init_thread_footer(&__TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA);
    }
  }
  return `AreVirtualDesktopsEnabled'::`2'::s_enabled;
}
