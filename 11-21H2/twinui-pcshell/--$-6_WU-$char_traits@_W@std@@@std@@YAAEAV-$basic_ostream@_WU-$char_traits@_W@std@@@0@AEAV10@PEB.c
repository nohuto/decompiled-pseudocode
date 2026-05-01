/*
 * XREFs of ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1805FF188
 * Callers:
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x180602444 (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x1806008CC (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x180600CB4 (--1sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::operator<<<wchar_t,std::char_traits<wchar_t>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r14
  __int64 v6; // rsi
  __int16 v7; // ax
  __int64 v8; // r8
  __int64 v9; // r12
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int16 v13; // ax
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) - v5;
  }
  std::wostream::sentry::sentry(v15, v3);
  if ( v15[8] )
  {
    try
    {
      v7 = std::ios_base::flags((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)));
    }
    catch ( ... )
    {
      LOBYTE(v8) = 1;
      std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v8);
      v3 = a1;
      v4 = 0;
      goto LABEL_19;
    }
    if ( (v7 & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v9 = std::wios::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v10 = std::wios::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        if ( (unsigned __int16)std::wstreambuf::sputc(v9, v10) == 0xFFFF )
          goto LABEL_16;
        --v6;
      }
    }
    v11 = std::wios::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
    if ( std::wstreambuf::sputn(v11, a2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v12 = std::wios::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v13 = std::wios::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        if ( (unsigned __int16)std::wstreambuf::sputc(v12, v13) == 0xFFFF )
          goto LABEL_16;
        --v6;
      }
    }
    else
    {
LABEL_16:
      v4 = 4;
    }
    std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
LABEL_19:
  std::wios::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  std::wostream::sentry::~sentry(v15);
  return v3;
}
