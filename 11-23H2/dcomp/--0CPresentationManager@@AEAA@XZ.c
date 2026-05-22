/*
 * XREFs of ??0CPresentationManager@@AEAA@XZ @ 0x1801ACE58
 * Callers:
 *     ?Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AD4D0 (-Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$set@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ @ 0x1800A7294 (--0-$set@PEAUIUnknown@@U-$less@PEAUIUnknown@@@std@@V-$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ.c)
 */

CPresentationManager *__fastcall CPresentationManager::CPresentationManager(CPresentationManager *this)
{
  __int64 v2; // rax
  CPresentationManager *result; // rax

  *(_QWORD *)this = &CPresentationManager::`vftable'{for `CMILCOMBaseT<IPresentationManager>'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CPresentationManager::`vftable'{for `IPresentationManagerInternal'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  std::set<IUnknown *>::set<IUnknown *>((__int64 *)this + 11);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)this + 20) = v2;
  result = this;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 1LL;
  *((_OWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_BYTE *)this + 220) = 0;
  return result;
}
