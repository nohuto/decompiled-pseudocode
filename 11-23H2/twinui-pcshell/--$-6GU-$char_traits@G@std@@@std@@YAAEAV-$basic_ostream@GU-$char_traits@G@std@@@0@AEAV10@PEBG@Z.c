/*
 * XREFs of ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1804B1200
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1804B4664 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x180711F60 (-GetKeyPathForHwnd@Util@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_J@Z.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1804B1D9C (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1804B2230 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::operator<<<unsigned short,std::char_traits<unsigned short>>(__int64 a1, __int64 a2)
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
  std::basic_ostream<unsigned short>::sentry::sentry(v15, v3);
  if ( v15[8] )
  {
    try
    {
      v7 = std::ios_base::flags((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)));
    }
    catch ( ... )
    {
      LOBYTE(v8) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v8);
      v3 = a1;
      v4 = 0;
      goto LABEL_20;
    }
    if ( (v7 & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v9 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v10 = std::basic_ios<unsigned short>::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v9, v10) == 0xFFFF )
        {
          v4 = 4;
          goto LABEL_18;
        }
        --v6;
      }
    }
    v11 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
    if ( std::basic_streambuf<unsigned short>::sputn(v11, a2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v12 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v13 = std::basic_ios<unsigned short>::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v12, v13) == 0xFFFF )
          goto LABEL_17;
        --v6;
      }
    }
    else
    {
LABEL_17:
      v4 = 4;
    }
LABEL_18:
    std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
LABEL_20:
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  std::basic_ostream<unsigned short>::sentry::~sentry(v15);
  return v3;
}
