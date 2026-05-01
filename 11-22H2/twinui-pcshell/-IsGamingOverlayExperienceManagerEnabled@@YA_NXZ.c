/*
 * XREFs of ?IsGamingOverlayExperienceManagerEnabled@@YA_NXZ @ 0x180154890
 * Callers:
 *     ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800E852C (-Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??R_lambda_cb59e4c85f894ce28dd09636182d7590_@@QEBA@XZ @ 0x1801548FC (--R_lambda_cb59e4c85f894ce28dd09636182d7590_@@QEBA@XZ.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
bool IsGamingOverlayExperienceManagerEnabled(void)
{
  if ( __TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                    + (unsigned int)tls_index)
                                                                                  + 16LL) )
  {
    Init_thread_header(&__TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA);
    if ( __TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA == -1 )
    {
      `IsGamingOverlayExperienceManagerEnabled'::`2'::isComponentEnabled = (unsigned __int8)_lambda_cb59e4c85f894ce28dd09636182d7590_::operator()();
      Init_thread_footer(&__TSS0__1__IsGamingOverlayExperienceManagerEnabled__YA_NXZ_4HA);
    }
  }
  return `IsGamingOverlayExperienceManagerEnabled'::`2'::isComponentEnabled != 0;
}
