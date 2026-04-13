/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_822b4fd04ca4bb1472820328fff37fc1___ @ 0x18004E320
 * Callers:
 *     ?EnableContextualSuggestionsAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x180055830 (-EnableContextualSuggestionsAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyn.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022A28 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_822b4fd04ca4bb1472820328fff37fc1___(
        _BYTE *a1)
{
  _QWORD *v2; // rbx

  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 0LL;
  *v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  v2[1] = 0LL;
  if ( v2 + 1 != (_QWORD *)a1 )
  {
    v2[1] = *(_QWORD *)a1;
    *(_QWORD *)a1 = 0LL;
  }
  *((_BYTE *)v2 + 16) = a1[8];
  *v2 = off_1800E4DB0;
  *((_DWORD *)v2 + 6) = 0;
  `eh vector constructor iterator'(
    v2 + 4,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *((_DWORD *)v2 + 6) = 0;
  return v2;
}
