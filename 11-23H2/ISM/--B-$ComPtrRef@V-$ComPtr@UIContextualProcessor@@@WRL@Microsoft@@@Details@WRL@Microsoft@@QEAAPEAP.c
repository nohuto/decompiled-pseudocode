/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIContextualProcessor@@XZ @ 0x1801B840C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IContextualProcessor>>::operator IContextualProcessor * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(*a1);
  return v1;
}
