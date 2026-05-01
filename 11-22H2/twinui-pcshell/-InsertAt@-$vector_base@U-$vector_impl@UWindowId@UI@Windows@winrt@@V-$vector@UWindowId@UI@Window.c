/*
 * XREFs of ?InsertAt@?$vector_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@@winrt@@QEAAXIAEBUWindowId@UI@Windows@2@@Z @ 0x180729D28
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIUstruct_Windows_UI_WindowId@23@@Z @ 0x180729CC0 (-InsertAt@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@wi.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBUWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@QEAAPEAUWindowId@UI@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x18072905C (--$_Emplace_reallocate@AEBUWindowId@UI@Windows@winrt@@@-$vector@UWindowId@UI@Windows@winrt@@V-$a.c)
 */

char *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId>::InsertAt(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v6; // rcx
  char *result; // rax
  char *v8; // r9
  char *v9; // rbx
  __int64 v10; // rdi
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (__int64)(a1 + 2);
  v4 = 48LL;
  if ( !a1 )
    v3 = 48LL;
  if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 3) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  if ( a1 )
  {
    v6 = (__int64)(a1 + 2);
    v4 = (__int64)(a1 + 2);
  }
  else
  {
    v6 = 48LL;
  }
  result = *(char **)v4;
  v8 = *(char **)(v6 + 8);
  v9 = (char *)(*(_QWORD *)v4 + 8LL * a2);
  if ( v8 == *(char **)(v6 + 16) )
    return std::vector<winrt::Windows::UI::WindowId>::_Emplace_reallocate<winrt::Windows::UI::WindowId const &>(
             (const void **)v6,
             (_BYTE *)(*(_QWORD *)v4 + 8LL * a2),
             a3);
  v10 = *a3;
  if ( v9 == v8 )
  {
    *(_QWORD *)v8 = v10;
    *(_QWORD *)(v6 + 8) += 8LL;
  }
  else
  {
    *(_QWORD *)v8 = *((_QWORD *)v8 - 1);
    *(_QWORD *)(v6 + 8) += 8LL;
    result = (char *)memmove_0(v9 + 8, v9, v8 - v9 - 8);
    *(_QWORD *)v9 = v10;
  }
  return result;
}
