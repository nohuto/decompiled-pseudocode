/*
 * XREFs of ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2$$QEAW4EndpointApplicability@@@Z @ 0x180033944
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180038354 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x180033C40 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float &,int,int,enum EndpointApplicability,0>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  __int64 v8; // rdi
  LPVOID v9; // rax
  bool v11; // [rsp+20h] [rbp-28h]

  v8 = 0LL;
  v9 = operator new(0x30uLL);
  if ( v9 )
  {
    v11 = *a5 != 0;
    v8 = DuckingDescriptorAndId::DuckingDescriptorAndId(v9, L"6", *a6, *a4, v11, *a6);
  }
  *a1 = v8;
  return a1;
}
