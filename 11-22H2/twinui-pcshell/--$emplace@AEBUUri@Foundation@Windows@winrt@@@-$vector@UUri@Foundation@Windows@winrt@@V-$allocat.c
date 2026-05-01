/*
 * XREFs of ??$emplace@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@AEBUUri@Foundation@Windows@winrt@@@Z @ 0x18022FF64
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x18023DB00 (-InsertAt@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Wind.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAA?A_TAEBUUri@Foundation@Windows@winrt@@@Z @ 0x18022F380 (--$_Emplace_back_with_unused_capacity@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundatio.c)
 *     ??$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUUri@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x18022F3AC (--$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt.c)
 */

_QWORD *__fastcall std::vector<winrt::Windows::Foundation::Uri>::emplace<winrt::Windows::Foundation::Uri const &>(
        __int64 *a1,
        _QWORD *a2,
        winrt::Windows::Foundation::IUnknown *a3,
        _QWORD *a4)
{
  winrt::Windows::Foundation::IUnknown *v4; // r15
  winrt::Windows::Foundation::IUnknown *v8; // rdi
  __int64 v9; // rax
  winrt::Windows::Foundation::IUnknown *v10; // rcx
  _BYTE v12[16]; // [rsp+28h] [rbp-10h] BYREF

  v4 = (winrt::Windows::Foundation::IUnknown *)a1[1];
  if ( v4 == (winrt::Windows::Foundation::IUnknown *)a1[2] )
  {
    *a2 = std::vector<winrt::Windows::Foundation::Uri>::_Emplace_reallocate<winrt::Windows::Foundation::Uri const &>(
            a1,
            (__int64)a3,
            a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      std::vector<winrt::Windows::Foundation::Uri>::_Emplace_back_with_unused_capacity<winrt::Windows::Foundation::Uri const &>(
        (__int64)a1,
        a4);
    }
    else
    {
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
        (winrt::Windows::Foundation::IUnknown *)v12,
        a4);
      v8 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 - 8);
      v9 = *((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = 0LL;
      *(_QWORD *)v4 = v9;
      a1[1] += 8LL;
      while ( v8 != a3 )
      {
        v10 = v8;
        v8 = (winrt::Windows::Foundation::IUnknown *)((char *)v8 - 8);
        winrt::Windows::Foundation::IUnknown::operator=(v10, v8);
      }
      winrt::Windows::Foundation::IUnknown::operator=(a3, (winrt::Windows::Foundation::IUnknown *)v12);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v12);
    }
    *a2 = a3;
  }
  return a2;
}
