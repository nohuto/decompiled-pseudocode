/*
 * XREFs of ?_Change_array@?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@AEAAXQEAUTouchInjectionContact@Input@Internal@UI@Windows@@_K1@Z @ 0x180198390
 * Callers:
 *     ??$_Emplace_reallocate@AEBUTouchInjectionContact@Input@Internal@UI@Windows@@@?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@QEAAPEAUTouchInjectionContact@Input@Internal@UI@Windows@@QEAU23456@AEBU23456@@Z @ 0x180197664 (--$_Emplace_reallocate@AEBUTouchInjectionContact@Input@Internal@UI@Windows@@@-$vector@UTouchInje.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
