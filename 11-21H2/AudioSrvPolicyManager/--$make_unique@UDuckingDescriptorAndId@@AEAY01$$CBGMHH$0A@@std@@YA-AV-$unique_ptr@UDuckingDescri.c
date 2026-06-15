/*
 * XREFs of ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBG$$QEAM$$QEAH2@Z @ 0x18002AC8C
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18002D764 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x18002AE48 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        _DWORD *a5)
{
  HANDLE ProcessHeap; // rax
  __int64 v9; // r8
  LPVOID v10; // r10
  __int64 v11; // rax
  bool v13; // [rsp+20h] [rbp-18h]

  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x30uLL);
  v11 = 0LL;
  if ( v10 )
  {
    v13 = *a5 != 0;
    v11 = DuckingDescriptorAndId::DuckingDescriptorAndId(v10, a2, v9, *a4, v13, 0);
  }
  *a1 = v11;
  return a1;
}
