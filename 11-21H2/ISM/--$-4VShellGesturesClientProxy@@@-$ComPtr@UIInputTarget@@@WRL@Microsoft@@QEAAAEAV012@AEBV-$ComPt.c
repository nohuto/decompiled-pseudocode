/*
 * XREFs of ??$?4VShellGesturesClientProxy@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VShellGesturesClientProxy@@@12@@Z @ 0x180150320
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180150C00 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IInputTarget>::operator=<ShellGesturesClientProxy>(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = (*a2 + 112LL) & -(__int64)(*a2 != 0LL);
  v3 = v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v5);
  v5 = *a1;
  *a1 = v3;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v5);
  return a1;
}
