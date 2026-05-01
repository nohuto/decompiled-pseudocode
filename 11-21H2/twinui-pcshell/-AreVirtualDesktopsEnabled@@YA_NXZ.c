/*
 * XREFs of ?AreVirtualDesktopsEnabled@@YA_NXZ @ 0x1800CAD10
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     _lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_::operator() @ 0x1800F4C08 (_lambda_bbf3cdef3b46e36cc2ca39d617d8ce03_--operator().c)
 * Callees:
 *     ??R_lambda_75e5b5e40d3ee59a799a62b8fd66d884_@@QEBA_NXZ @ 0x1800CAD78 (--R_lambda_75e5b5e40d3ee59a799a62b8fd66d884_@@QEBA_NXZ.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
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
      `AreVirtualDesktopsEnabled'::`2'::s_enabled = _lambda_75e5b5e40d3ee59a799a62b8fd66d884_::operator()();
      Init_thread_footer(&__TSS0__1__AreVirtualDesktopsEnabled__YA_NXZ_4HA);
    }
  }
  return `AreVirtualDesktopsEnabled'::`2'::s_enabled;
}
