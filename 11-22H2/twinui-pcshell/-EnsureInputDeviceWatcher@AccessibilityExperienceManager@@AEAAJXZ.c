/*
 * XREFs of ?EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B827C
 * Callers:
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1800E7F4C (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall AccessibilityExperienceManager::EnsureInputDeviceWatcher(AccessibilityExperienceManager *this)
{
  int InputDeviceWatcher; // edi
  __int64 *v2; // rbx

  InputDeviceWatcher = 0;
  v2 = (__int64 *)((char *)this + 224);
  if ( !*((_QWORD *)this + 28) )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 28);
    InputDeviceWatcher = CreateInputDeviceWatcher(
                           ((unsigned __int64)this + 152) & -(__int64)(this != 0LL),
                           0x4000LL,
                           v2);
    if ( InputDeviceWatcher < 0 )
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v2);
  }
  return (unsigned int)InputDeviceWatcher;
}
