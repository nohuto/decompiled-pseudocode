/*
 * XREFs of ?GetOptionNameArray@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800A76D4
 * Callers:
 *     ?RegisterShaders@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A7D40 (-RegisterShaders@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEAXXZ.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *ShaderProgramGenerator::ImageProcessingCameraEffects::GetOptionNameArray()
{
  if ( dword_1801D8CA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D8CA8);
    if ( dword_1801D8CA8 == -1 )
    {
      std::string::string(qword_1801D8CB0, (__int64)"ColorGrading");
      std::string::string(qword_1801D8CD0, (__int64)"ContrastCurve");
      std::string::string(qword_1801D8CF0, (__int64)"Diagnostics");
      std::string::string(qword_1801D8D10, (__int64)"GammaEncoding");
      std::string::string(qword_1801D8D30, (__int64)"ToneMapping");
      std::string::string(qword_1801D8D50, (__int64)"Vignette");
      atexit(ShaderProgramGenerator::ImageProcessingCameraEffects::GetOptionNameArray_::_2_::_dynamic_atexit_destructor_for__OptionNameArray__);
      Init_thread_footer(&dword_1801D8CA8);
    }
  }
  return qword_1801D8CB0;
}
