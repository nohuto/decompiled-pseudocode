/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIMessageSession@@XZ @ 0x180058280
 * Callers:
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x18004AF84 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IMessageSession>>::operator IMessageSession * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(*a1);
  return v1;
}
