/*
 * XREFs of ?GetAreaList@Trace@@YAAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@@std@@XZ @ 0x18001D3E4
 * Callers:
 *     ??0LevelSettings@Trace@@QEAA@PEBDI@Z @ 0x18001D114 (--0LevelSettings@Trace@@QEAA@PEBDI@Z.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *Trace::GetAreaList()
{
  _QWORD *v0; // rax

  if ( dword_1801D3E20 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D3E20);
    if ( dword_1801D3E20 == -1 )
    {
      v0 = operator new(0x48uLL);
      *v0 = v0;
      v0[1] = v0;
      v0[2] = v0;
      *((_WORD *)v0 + 12) = 257;
      qword_1801D3E28 = (__int64)v0;
      atexit(Trace::GetAreaList_::_2_::_dynamic_atexit_destructor_for__list__);
      Init_thread_footer(&dword_1801D3E20);
    }
  }
  return &qword_1801D3E28;
}
