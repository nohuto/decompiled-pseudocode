/*
 * XREFs of ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800203F0
 * Callers:
 *     ??6ExceptionDetails@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800CCAB4 (--6ExceptionDetails@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_SUBRESO.c)
 *     ??6ExceptionDetails@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x1800CCB94 (--6ExceptionDetails@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEAV12@AEBUD3D11_TEXTURE.c)
 *     ??6ExceptionDetails@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AEAV12@AEBUDXGI_SAMPLE_DESC@@@Z @ 0x1800CCD84 (--6ExceptionDetails@@YAAEAV-$basic_ostream@DU-$char_traits@D@std@@@std@@AEAV12@AEBUDXGI_SAMPLE_D.c)
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUD3D11_TEXTURE2D_DESC@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF074 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AE.c)
 *     ?ToString@ExceptionDetails@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UD3D11_SUBRESOURCE_DATA@@V?$allocator@UD3D11_SUBRESOURCE_DATA@@@std@@@3@@Z @ 0x1800CF140 (-ToString@ExceptionDetails@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator_ea_1800CF140.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAA@AEAV12@@Z @ 0x18001E3D8 (--0sentry@-$basic_ostream@DU-$char_traits@D@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QEAA@XZ @ 0x18001E5A4 (--1sentry@-$basic_ostream@DU-$char_traits@D@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::operator<<<std::char_traits<char>>(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - v5;
  }
  std::ostream::sentry::sentry((__int64)&v13, a1);
  if ( v14 )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v7 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v8) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        if ( (unsigned int)std::streambuf::sputc(v7, v8) == -1 )
        {
          v4 = 4;
          goto LABEL_19;
        }
        --v6;
      }
    }
    v9 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::streambuf::sputn(v9, a2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v10 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v11) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        if ( (unsigned int)std::streambuf::sputc(v10, v11) == -1 )
          goto LABEL_18;
        --v6;
      }
    }
    else
    {
LABEL_18:
      v4 = 4;
    }
LABEL_19:
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v4, 0LL);
  std::ostream::sentry::~sentry(&v13);
  return a1;
}
