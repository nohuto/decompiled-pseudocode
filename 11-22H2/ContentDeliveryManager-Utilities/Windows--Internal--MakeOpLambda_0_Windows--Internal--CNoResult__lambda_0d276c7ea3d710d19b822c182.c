/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_0d276c7ea3d710d19b822c1822ed0068___ @ 0x1800730B0
 * Callers:
 *     ?StageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180076E00 (-StageAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022A28 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_0d276c7ea3d710d19b822c1822ed0068___(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  v2[1] = *a1;
  *v2 = off_1800E5DD8;
  *((_DWORD *)v2 + 4) = 0;
  `eh vector constructor iterator'(
    v2 + 3,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *((_DWORD *)v3 + 4) = 0;
  return v3;
}
