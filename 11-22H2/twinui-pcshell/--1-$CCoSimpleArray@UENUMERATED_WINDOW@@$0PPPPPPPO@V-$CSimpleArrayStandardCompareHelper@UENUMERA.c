/*
 * XREFs of ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18039637C
 * Callers:
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$34 @ 0x1802BA250 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$34.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$1 @ 0x1802C516C (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$1.c)
 *     _RecoverApplicationWindows_::_1_::dtor$0 @ 0x1802C6D08 (_RecoverApplicationWindows_--_1_--dtor$0.c)
 *     ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x180617CE0 (-VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@.c)
 *     _VirtualDesktopPersistence::VirtualDesktopCollectionChanged_::_1_::dtor$1 @ 0x180617FDB (_VirtualDesktopPersistence--VirtualDesktopCollectionChanged_--_1_--dtor$1.c)
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x1807520F0 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     _CPinnedList::ApplyAppendDefaultTaskbarLayout_::_1_::dtor$1 @ 0x180752320 (_CPinnedList--ApplyAppendDefaultTaskbarLayout_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyPrependDefaultTaskbarLayout_::_1_::dtor$1 @ 0x18075263C (_CPinnedList--ApplyPrependDefaultTaskbarLayout_--_1_--dtor$1.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$1 @ 0x180752A0A (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
