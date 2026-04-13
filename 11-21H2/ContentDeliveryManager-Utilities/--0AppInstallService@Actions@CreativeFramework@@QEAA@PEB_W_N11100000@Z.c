/*
 * XREFs of ??0AppInstallService@Actions@CreativeFramework@@QEAA@PEB_W_N11100000@Z @ 0x1800B9D54
 * Callers:
 *     ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800BB350 (-MakeAppInstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
CreativeFramework::Actions::AppInstallService *__fastcall CreativeFramework::Actions::AppInstallService::AppInstallService(
        CreativeFramework::Actions::AppInstallService *this,
        wchar_t *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        wchar_t *Src,
        wchar_t *a8,
        wchar_t *a9,
        wchar_t *a10,
        wchar_t *a11)
{
  unsigned __int64 v12; // rbx
  unsigned __int64 *v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8

  *(_QWORD *)this = &CreativeFramework::Actions::AppInstallService::`vftable';
  *((_QWORD *)this + 4) = 7LL;
  v12 = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 4) = 0;
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 72) = a3;
  *((_BYTE *)this + 73) = a5;
  *((_BYTE *)this + 74) = a4;
  *((_BYTE *)this + 75) = a6;
  v13 = (unsigned __int64 *)((char *)this + 80);
  v13[3] = 7LL;
  v13[2] = 0LL;
  *(_WORD *)v13 = 0;
  v14 = -1LL;
  if ( *a2 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a2[v15] );
  }
  else
  {
    v15 = 0LL;
  }
  std::wstring::assign(v13, (char *)a2, v15);
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  if ( *Src )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( Src[v16] );
  }
  else
  {
    v16 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)this + 14, (char *)Src, v16);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  *((_QWORD *)this + 25) = 7LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_WORD *)this + 88) = 0;
  *((_QWORD *)this + 29) = 7LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_WORD *)this + 104) = 0;
  if ( *a10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a10[v17] );
  }
  else
  {
    v17 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)this + 26, (char *)a10, v17);
  *((_QWORD *)this + 33) = 7LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_WORD *)this + 120) = 0;
  if ( *a11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a11[v18] );
  }
  else
  {
    v18 = 0LL;
  }
  std::wstring::assign((unsigned __int64 *)this + 30, (char *)a11, v18);
  if ( a8 )
  {
    if ( *a8 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a8[v19] );
    }
    else
    {
      v19 = 0LL;
    }
    std::wstring::assign((unsigned __int64 *)this + 18, (char *)a8, v19);
  }
  if ( a9 )
  {
    if ( *a9 )
    {
      do
        ++v14;
      while ( a9[v14] );
      v12 = v14;
    }
    std::wstring::assign((unsigned __int64 *)this + 22, (char *)a9, v12);
  }
  return this;
}
