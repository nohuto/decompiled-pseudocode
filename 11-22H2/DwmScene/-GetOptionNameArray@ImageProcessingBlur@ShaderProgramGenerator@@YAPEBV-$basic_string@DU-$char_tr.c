/*
 * XREFs of ?GetOptionNameArray@ImageProcessingBlur@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800A762C
 * Callers:
 *     ?RegisterShaders@ImageProcessingBlur@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A783C (-RegisterShaders@ImageProcessingBlur@ShaderProgramGenerator@@YAPEAXXZ.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *ShaderProgramGenerator::ImageProcessingBlur::GetOptionNameArray()
{
  if ( dword_1801D8BF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D8BF0);
    if ( dword_1801D8BF0 == -1 )
    {
      std::string::string(qword_1801D8C00, (__int64)"Blur8");
      std::string::string(qword_1801D8C20, (__int64)"Blur16");
      std::string::string(qword_1801D8C40, (__int64)"Blur32");
      atexit(ShaderProgramGenerator::ImageProcessingBlur::GetOptionNameArray_::_2_::_dynamic_atexit_destructor_for__OptionNameArray__);
      Init_thread_footer(&dword_1801D8BF0);
    }
  }
  return qword_1801D8C00;
}
