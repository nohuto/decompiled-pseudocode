/*
 * XREFs of ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x1400683E4
 * Callers:
 *     ??1CAPOProcessingHostObject@@UEAA@XZ @ 0x14001DC0C (--1CAPOProcessingHostObject@@UEAA@XZ.c)
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140066420 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CReleaseContext@@QEAA@AEAV?$shared_ptr@VCSerialWorkQueue@@@std@@@Z @ 0x140031FF0 (--0CReleaseContext@@QEAA@AEAV-$shared_ptr@VCSerialWorkQueue@@@std@@@Z.c)
 */

__int64 __fastcall CAPOProcessingHostObject::ShutdownWorkQueue(CAPOProcessingHostObject *this)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v1
    && (v2 = CReleaseContext::CReleaseContext(v1)) != 0LL
    && !TrySubmitThreadpoolCallback(
          (PTP_SIMPLE_CALLBACK)lambda_c342fc516001507c28ba370cc30be3fa_::_lambda_invoker_cdecl_,
          v2,
          0LL) )
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x29,
             (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
             v3);
  }
  else
  {
    return 0LL;
  }
}
