/*
 * XREFs of ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x18002AE48
 * Callers:
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBG$$QEAM$$QEAH2@Z @ 0x18002AC8C (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

__int64 __fastcall DuckingDescriptorAndId::DuckingDescriptorAndId(
        __int64 a1,
        _WORD *a2,
        float a3,
        __int64 a4,
        char a5,
        int a6)
{
  unsigned __int64 v6; // r8
  HANDLE ProcessHeap; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = -1LL;
  *(_WORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 7LL;
  do
    ++v6;
  while ( a2[v6] );
  std::wstring::assign((char **)a1, a2, v6);
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v11 = v10;
  if ( v10 )
  {
    v10[2] = 1;
    v10[3] = 1;
    *(_QWORD *)v10 = &std::_Ref_count_obj2<DuckingDescriptor>::`vftable';
    *((_QWORD *)v10 + 2) = &DuckingDescriptor::`vftable';
    v10[10] = a6;
    *((float *)v10 + 6) = a3;
    *((_BYTE *)v10 + 28) = a5;
    *((_QWORD *)v10 + 4) = a4;
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = v11 + 4;
  result = a1;
  *(_QWORD *)(a1 + 40) = v11;
  return result;
}
