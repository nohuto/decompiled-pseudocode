/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIContextualProcessor@@XZ @ 0x1801C5B38
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IContextualProcessor>>::operator IContextualProcessor * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(*a1);
  return v1;
}
