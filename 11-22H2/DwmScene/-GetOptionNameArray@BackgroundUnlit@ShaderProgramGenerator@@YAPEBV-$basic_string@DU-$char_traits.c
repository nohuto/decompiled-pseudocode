/*
 * XREFs of ?GetOptionNameArray@BackgroundUnlit@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800A577C
 * Callers:
 *     ?RegisterShaders@BackgroundUnlit@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A5868 (-RegisterShaders@BackgroundUnlit@ShaderProgramGenerator@@YAPEAXXZ.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *ShaderProgramGenerator::BackgroundUnlit::GetOptionNameArray()
{
  if ( dword_1801D8A90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D8A90);
    if ( dword_1801D8A90 == -1 )
    {
      std::string::string(qword_1801D8AA0, (__int64)"ColorGrading");
      std::string::string(qword_1801D8AC0, (__int64)"ContrastCurve");
      std::string::string(qword_1801D8AE0, (__int64)"ToneMapping");
      std::string::string(qword_1801D8B00, (__int64)"Vignette");
      std::string::string(qword_1801D8B20, (__int64)"DepthOnly");
      std::string::string(qword_1801D8B40, (__int64)"GroundPlane");
      atexit(ShaderProgramGenerator::BackgroundUnlit::GetOptionNameArray_::_2_::_dynamic_atexit_destructor_for__OptionNameArray__);
      Init_thread_footer(&dword_1801D8A90);
    }
  }
  return qword_1801D8AA0;
}
