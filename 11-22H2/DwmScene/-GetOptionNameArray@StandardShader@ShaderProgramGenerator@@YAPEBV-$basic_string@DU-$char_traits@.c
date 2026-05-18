/*
 * XREFs of ?GetOptionNameArray@StandardShader@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800B198C
 * Callers:
 *     ?RegisterShaders@StandardShader@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800B1AB4 (-RegisterShaders@StandardShader@ShaderProgramGenerator@@YAPEAXXZ.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *ShaderProgramGenerator::StandardShader::GetOptionNameArray()
{
  if ( dword_1801D90F0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D90F0);
    if ( dword_1801D90F0 == -1 )
    {
      std::string::string(qword_1801D9100, (__int64)"DepthOnly");
      std::string::string(qword_1801D9120, (__int64)"Diagnostics");
      std::string::string(qword_1801D9140, (__int64)"Background");
      std::string::string(qword_1801D9160, (__int64)"AlphaMask");
      std::string::string(qword_1801D9180, (__int64)"AlphaBlend");
      std::string::string(qword_1801D91A0, (__int64)"Skinning");
      std::string::string(qword_1801D91C0, (__int64)"DepthToColor");
      std::string::string(qword_1801D91E0, (__int64)"StochasticTransparency");
      std::string::string(qword_1801D9200, (__int64)"GLTFMaterial");
      atexit(ShaderProgramGenerator::StandardShader::GetOptionNameArray_::_2_::_dynamic_atexit_destructor_for__OptionNameArray__);
      Init_thread_footer(&dword_1801D90F0);
    }
  }
  return qword_1801D9100;
}
