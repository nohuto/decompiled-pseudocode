/*
 * XREFs of ?_Change_array@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@AEAAXQEAUWindowId@UI@Windows@winrt@@_K1@Z @ 0x18072869C
 * Callers:
 *     ??$_Emplace_reallocate@UWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@QEAAPEAUWindowId@UI@Windows@winrt@@QEAU2345@$$QEAU2345@@Z @ 0x180726AD8 (--$_Emplace_reallocate@UWindowId@UI@Windows@winrt@@@-$vector@UWindowId@UI@Windows@winrt@@V-$allo.c)
 *     ??$_Emplace_reallocate@AEBUWindowId@UI@Windows@winrt@@@?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@QEAAPEAUWindowId@UI@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x18072905C (--$_Emplace_reallocate@AEBUWindowId@UI@Windows@winrt@@@-$vector@UWindowId@UI@Windows@winrt@@V-$a.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<winrt::Windows::UI::WindowId>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
