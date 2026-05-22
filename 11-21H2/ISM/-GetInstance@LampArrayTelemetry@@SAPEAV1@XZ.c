/*
 * XREFs of ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800D4E2C
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x18003DF70 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800DA7D0 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     atexit @ 0x18004A308 (atexit.c)
 *     _Init_thread_footer @ 0x18004AD68 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004ADD0 (_Init_thread_header.c)
 *     wil::init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___ @ 0x1800D4CE0 (wil--init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___.c)
 */

struct LampArrayTelemetry *__fastcall LampArrayTelemetry::GetInstance(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_1802437B8 > *(_DWORD *)(v3 + 16) )
  {
    Init_thread_header(&dword_1802437B8);
    if ( dword_1802437B8 == -1 )
    {
      atexit(LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_1802437B8);
    }
  }
  wil::init_once_nothrow__lambda_058a17f7b797e76983050a020a22a1d6___(v3, 0LL, a3);
  return qword_180242D40;
}
