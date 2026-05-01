/*
 * XREFs of ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x180569F14
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180569010 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x18056A7DC (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x18056A960 (-IsJavawExe@@YA_NPEBG@Z.c)
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x18056AB1C (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppIdForSpecialCategoryApp(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  _QWORD *v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int128 v10; // [rsp+40h] [rbp-40h]
  _QWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  unsigned __int64 v13; // [rsp+68h] [rbp-18h]

  v8[0] = a1;
  if ( IsJavawExe(a2) )
  {
    TryGetMainClassNameFromJavaEngineProcess(v11, a3);
    if ( v12 )
    {
      v6 = v11;
      if ( v13 >= 8 )
        v6 = (_QWORD *)v11[0];
      v8[0] = v6;
      v8[1] = v12;
      ComposeWin32AppIdForJavaApp(&v9, a2, v8);
      *(_OWORD *)a1 = v9;
      *(_OWORD *)(a1 + 16) = v10;
      *(_QWORD *)&v10 = 0LL;
      *((_QWORD *)&v10 + 1) = 7LL;
      LOWORD(v9) = 0;
      std::wstring::_Tidy_deallocate((__int64)&v9);
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 24) = 7LL;
      *(_WORD *)a1 = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)v11);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
