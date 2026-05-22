/*
 * XREFs of GetHolographicInputSession @ 0x1800BFD44
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800C1400 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800C15D0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800C2FF0 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180038A10 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180082D48 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A1734 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x1800BE514 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x1800BEF18 (--1TraceSessionConfig@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetHolographicInputSession(__int64 a1)
{
  const char *v2; // r9
  unsigned __int64 v3; // r8
  int v5; // [rsp+38h] [rbp-D0h] BYREF
  int v6[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v9; // [rsp+68h] [rbp-A0h]
  __int128 v10; // [rsp+78h] [rbp-90h]
  __int128 Src; // [rsp+88h] [rbp-80h] BYREF
  __int128 v12; // [rsp+98h] [rbp-70h]
  __int128 v13; // [rsp+A8h] [rbp-60h]
  __int64 v14; // [rsp+B8h] [rbp-50h]
  __int64 v15; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v16; // [rsp+C8h] [rbp-40h]
  WCHAR Buffer[264]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v7 = a1;
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 7LL;
  LOWORD(v8) = 0;
  v10 = 0LL;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 7LL;
  LOWORD(Src) = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  std::wstring::assign((void **)&v8, L"HolographicInput", 0x10uLL);
  v10 = xmmword_180209B50;
  *(_QWORD *)&v13 = 64LL;
  *((_QWORD *)&v13 + 1) = 0x810000002LL;
  v14 = 0x10000000002LL;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetTempPathW(0x104u, Buffer) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x184,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      v2);
  v3 = -1LL;
  do
    ++v3;
  while ( Buffer[v3] );
  std::wstring::assign((void **)&Src, Buffer, v3);
  std::wstring::append((void **)&Src, L"\\DiagOutputDir\\HolographicInput.etl", 0x23uLL);
  v5 = 0;
  v6[0] = 0;
  LODWORD(v7) = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v15,
    L"{3317C7E7-7C40-4275-9F7B-D539C10E19BA}",
    (int *)&v7,
    v6,
    &v5);
  LODWORD(v7) = 0;
  v6[0] = 0;
  v5 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v15,
    L"{F903DB44-149E-4B4E-AFE1-2A1096F53DFA}",
    &v5,
    v6,
    (int *)&v7);
  LODWORD(v7) = 0;
  v6[0] = 0;
  v5 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v15,
    L"{6E831A67-EB0D-55CD-69C0-CFE57755346D}",
    &v5,
    v6,
    (int *)&v7);
  LODWORD(v7) = 0;
  v6[0] = 0;
  v5 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v15,
    L"{D27719C1-8DCF-555B-E03F-EF4E275A4799}",
    &v5,
    v6,
    (int *)&v7);
  *(_OWORD *)a1 = v8;
  *(_OWORD *)(a1 + 16) = v9;
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 7LL;
  LOWORD(v8) = 0;
  *(_OWORD *)(a1 + 32) = v10;
  *(_OWORD *)(a1 + 48) = Src;
  *(_OWORD *)(a1 + 64) = v12;
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 7LL;
  LOWORD(Src) = 0;
  *(_OWORD *)(a1 + 80) = v13;
  *(_QWORD *)(a1 + 96) = v14;
  *(_QWORD *)(a1 + 104) = v15;
  *(_OWORD *)(a1 + 112) = v16;
  v15 = 0LL;
  v16 = 0LL;
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)&v8);
  return a1;
}
