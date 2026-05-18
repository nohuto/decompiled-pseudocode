/*
 * XREFs of ?GetOptionNameArray@UnlitShader@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800AF954
 * Callers:
 *     ?RegisterShaders@UnlitShader@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AFA28 (-RegisterShaders@UnlitShader@ShaderProgramGenerator@@YAPEAXXZ.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *ShaderProgramGenerator::UnlitShader::GetOptionNameArray()
{
  if ( dword_1801D8FA0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D8FA0);
    if ( dword_1801D8FA0 == -1 )
    {
      std::string::string(qword_1801D8FB0, (__int64)"DepthOnly");
      std::string::string(qword_1801D8FD0, (__int64)"Diagnostics");
      std::string::string(qword_1801D8FF0, (__int64)"AlphaMask");
      std::string::string(qword_1801D9010, (__int64)"AlphaBlend");
      std::string::string(qword_1801D9030, (__int64)"Skinning");
      atexit(ShaderProgramGenerator::UnlitShader::GetOptionNameArray_::_2_::_dynamic_atexit_destructor_for__OptionNameArray__);
      Init_thread_footer(&dword_1801D8FA0);
    }
  }
  return qword_1801D8FB0;
}
