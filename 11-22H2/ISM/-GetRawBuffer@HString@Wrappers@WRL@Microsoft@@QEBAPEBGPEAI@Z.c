/*
 * XREFs of ?GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z @ 0x1800F4A90
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1801000B4 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     <none>
 */

PCWSTR __fastcall Microsoft::WRL::Wrappers::HString::GetRawBuffer(HSTRING *this, unsigned int *a2)
{
  return WindowsGetStringRawBuffer(*this, 0LL);
}
