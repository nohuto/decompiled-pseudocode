/*
 * XREFs of ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x180033C40
 * Callers:
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2@Z @ 0x1800338C0 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDes.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2$$QEAW4EndpointApplicability@@@Z @ 0x180033944 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA-A.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBG$$QEAM$$QEAH2@Z @ 0x1800339D0 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY02$$CBG$$QEAM$$QEAH2@Z @ 0x180033A54 (--$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY04$$CBG$$QEAM$$QEAH2@Z @ 0x180033AD8 (--$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000AA50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$make_shared@VDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@std@@YA?AV?$shared_ptr@VDuckingDescriptor@@@0@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@Z @ 0x180033818 (--$make_shared@VDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@std@@YA-AV-$shared.c)
 */

_QWORD *DuckingDescriptorAndId::DuckingDescriptorAndId(_QWORD *a1, _WORD *a2, __int64 a3, ...)
{
  int v3; // xmm2_4
  int v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v9; // [rsp+60h] [rbp+28h] BYREF
  va_list va1; // [rsp+60h] [rbp+28h]
  va_list va2; // [rsp+68h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  v6 = v3;
  std::wstring::wstring(a1, a2, a3);
  std::make_shared<DuckingDescriptor,float &,__int64 &,bool &,enum EndpointApplicability &>(
    a1 + 4,
    &v6,
    (__int64 *)va,
    (__int64 *)va1,
    (int *)va2);
  return a1;
}
