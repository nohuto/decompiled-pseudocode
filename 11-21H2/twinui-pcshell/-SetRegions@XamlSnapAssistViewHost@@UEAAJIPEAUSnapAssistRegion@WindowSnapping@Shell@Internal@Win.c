/*
 * XREFs of ?SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x1806030E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@std@@@std@@QEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@QEAU234567@AEBU234567@@Z @ 0x1805FFA28 (--$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@-$vector.c)
 *     ?_Reallocate_exactly@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@std@@@std@@AEAAX_K@Z @ 0x1806046D0 (-_Reallocate_exactly@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@V-$al.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::SetRegions(
        XamlSnapAssistViewHost *this,
        unsigned int a2,
        struct ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion *a3)
{
  const void **v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned int i; // ebx
  _OWORD *v10; // r8
  __int64 v11; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v6 = (const void **)((char *)this + 504);
    v7 = *((_QWORD *)this + 63);
    *((_QWORD *)this + 64) = v7;
    v8 = (*((_QWORD *)this + 65) - v7) >> 5;
    if ( a2 > v8 )
      std::vector<ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Reallocate_exactly((char *)this + 504);
    for ( i = 0; i < a2; ++i )
    {
      v10 = (_OWORD *)((char *)a3 + 32 * i);
      v11 = *((_QWORD *)this + 64);
      if ( v11 == *((_QWORD *)this + 65) )
      {
        std::vector<ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Emplace_reallocate<ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion const &>(
          v6,
          (_BYTE *)v11,
          v10);
      }
      else
      {
        *(_OWORD *)v11 = *v10;
        *(_OWORD *)(v11 + 16) = v10[1];
        v6[1] = (char *)v6[1] + 32;
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A1,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           (const char *)v8);
  }
  return result;
}
