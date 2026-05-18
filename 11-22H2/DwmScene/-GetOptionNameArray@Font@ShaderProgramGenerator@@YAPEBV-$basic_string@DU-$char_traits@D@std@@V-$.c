/*
 * XREFs of ?GetOptionNameArray@Font@ShaderProgramGenerator@@YAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800AF620
 * Callers:
 *     ?RegisterShaders@Font@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AF69C (-RegisterShaders@Font@ShaderProgramGenerator@@YAPEAXXZ.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_QWORD *ShaderProgramGenerator::Font::GetOptionNameArray()
{
  if ( dword_1801D8F70 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D8F70);
    if ( dword_1801D8F70 == -1 )
    {
      std::string::string(qword_1801D8F78, (__int64)"<dummy>");
      atexit(ShaderProgramGenerator::Font::GetOptionNameArray_::_2_::_dynamic_atexit_destructor_for__OptionNameArray__);
      Init_thread_footer(&dword_1801D8F70);
    }
  }
  return qword_1801D8F78;
}
