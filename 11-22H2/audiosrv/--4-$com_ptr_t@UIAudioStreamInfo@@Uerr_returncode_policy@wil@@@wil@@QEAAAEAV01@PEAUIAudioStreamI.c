/*
 * XREFs of ??4?$com_ptr_t@UIAudioStreamInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioStreamInfo@@@Z @ 0x1801338B8
 * Callers:
 *     ??4CStreamResource@Sarm@@QEAAAEAV01@AEBV01@@Z @ 0x180133964 (--4CStreamResource@Sarm@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180138F2C (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IAudioStreamInfo,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
