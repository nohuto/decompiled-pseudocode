/*
 * XREFs of ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VSetDesktopWallpaperService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x1800D09D0
 * Callers:
 *     ??$make_shared@VSetDesktopWallpaperService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDesktopWallpaperService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800D0B44 (--$make_shared@VSetDesktopWallpaperService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-AV.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::SetDesktopWallpaperService>::_Ref_count_obj<CreativeFramework::Actions::SetDesktopWallpaperService>(
        __int64 a1,
        __int64 *a2,
        char **a3,
        char **a4)
{
  char v5; // bp
  _QWORD *v6; // rdi
  char *v7; // r12
  char *v8; // r14
  __int64 v9; // rsi
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 1;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v6 = (_QWORD *)(a1 + 16);
  v7 = *a4;
  v8 = *a3;
  v9 = *a2;
  *(_QWORD *)(a1 + 16) = &CreativeFramework::Actions::SetDesktopWallpaperService::`vftable';
  v10 = (unsigned __int64 *)(a1 + 24);
  v10[3] = 7LL;
  v10[2] = 0LL;
  *(_WORD *)v10 = 0;
  v11 = -1LL;
  if ( *(_WORD *)v9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v9 + 2 * v12) );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign(v10, (char *)v9, v12);
  v6[8] = 7LL;
  v6[7] = 0LL;
  *((_WORD *)v6 + 20) = 0;
  if ( *(_WORD *)v8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)&v8[2 * v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign(v6 + 5, v8, v13);
  v6[12] = 7LL;
  v6[11] = 0LL;
  *((_WORD *)v6 + 36) = 0;
  if ( *(_WORD *)v7 )
  {
    do
      ++v11;
    while ( *(_WORD *)&v7[2 * v11] );
  }
  else
  {
    v11 = 0LL;
  }
  std::wstring::assign(v6 + 9, v7, v11);
  if ( !v6[3] )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      30LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
      (const char *)0x80070057LL,
      v15);
  if ( *(_WORD *)v9 != 49 || *(_WORD *)(v9 + 2) )
  {
    if ( v6[7] && v6[11] )
      v5 = 0;
    if ( v5 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        34LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
        (const char *)0x80070057LL,
        v15);
  }
  return a1;
}
