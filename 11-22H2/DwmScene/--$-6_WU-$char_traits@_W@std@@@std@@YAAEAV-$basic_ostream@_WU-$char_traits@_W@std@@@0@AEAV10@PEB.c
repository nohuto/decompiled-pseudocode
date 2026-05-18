/*
 * XREFs of ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEBD@Z @ 0x18002D7D0
 * Callers:
 *     ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420 (-GetHardwareVersion@Engine@1Spectre@@IEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18001E54C (--1locale@std@@QEAA@XZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18001F018 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x1800315F0 (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x18003205C (--1sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::operator<<<wchar_t,std::char_traits<wchar_t>>(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r15
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // rsi
  std::locale *v7; // rax
  struct std::_Facet_base *v8; // r12
  __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  __int16 v14; // ax
  int v15; // ecx
  __int64 v16; // rbx
  unsigned __int16 v17; // ax
  _BYTE v19[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - v5;
  }
  std::wostream::sentry::sentry(v19, a1);
  if ( v19[8] )
  {
    v7 = (std::locale *)std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v20);
    v8 = std::use_facet<std::ctype<wchar_t>>(v7);
    std::locale::~locale((std::locale *)v20);
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) == 0x40 )
      goto LABEL_13;
    while ( v6 > 0 )
    {
      v9 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v10 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      if ( (unsigned __int16)std::wstreambuf::sputc(v9, v10) == 0xFFFF )
      {
LABEL_21:
        v4 = 4;
        goto LABEL_22;
      }
      --v6;
    }
LABEL_13:
    while ( v5 > 0 )
    {
      v11 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      LOBYTE(v12) = *v2;
      v13 = std::ctype<wchar_t>::widen(v8, v12);
      v14 = std::wstreambuf::sputc(v11, v13);
      v15 = v4 | 4;
      if ( v14 != -1 )
        v15 = v4;
      v4 = v15;
      --v5;
      ++v2;
      if ( v15 )
        goto LABEL_22;
    }
    while ( v6 > 0 )
    {
      v16 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v17 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      if ( (unsigned __int16)std::wstreambuf::sputc(v16, v17) == 0xFFFF )
        goto LABEL_21;
      --v6;
    }
LABEL_22:
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
  std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v4, 0LL);
  std::wostream::sentry::~sentry(v19);
  return a1;
}
