/*
 * XREFs of ??1?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800DABD4
 * Callers:
 *     _InputStateManager::InputStateManager_::_1_::dtor$5 @ 0x1800829F0 (_InputStateManager--InputStateManager_--_1_--dtor$5.c)
 *     _InputInjectionClientProxy::InjectTouchInput_::_1_::dtor$2 @ 0x1801C3F97 (_InputInjectionClientProxy--InjectTouchInput_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::~vector<Windows::UI::Internal::Input::TouchInjectionContact>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
