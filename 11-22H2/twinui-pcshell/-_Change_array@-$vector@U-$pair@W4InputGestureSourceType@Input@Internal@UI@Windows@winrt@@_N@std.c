/*
 * XREFs of ?_Change_array@?$vector@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@V?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@2@@std@@AEAAXQEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@2@_K1@Z @ 0x18016D970
 * Callers:
 *     ??$_Emplace_reallocate@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@?$vector@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@V?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@2@@std@@QEAAPEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@1@QEAU21@$$QEAU21@@Z @ 0x18016D884 (--$_Emplace_reallocate@U-$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>::_Change_array(
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
