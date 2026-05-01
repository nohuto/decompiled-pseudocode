/*
 * XREFs of ?CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@Foundation@Windows@@PEAE@Z @ 0x180141BA0
 * Callers:
 *     ?Activate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@00PEAUIPropertySet@Collections@Foundation@Windows@@PEAU?$IVectorView@PEAUHSTRING__@@@567@@Z @ 0x180491830 (-Activate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@00PEAUIPropertySet@Collections@Fo.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1801EACE3 (memcmp_0.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipActivator::CanActivate(
        SystemTray::TrayInfoTipActivator *this,
        HSTRING a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4,
        bool *a5)
{
  PCWSTR StringRawBuffer; // rcx
  unsigned __int64 v7; // r8
  bool v8; // bl
  PCWSTR v10; // rax
  UINT32 length; // [rsp+20h] [rbp-28h] BYREF
  GUID pclsid; // [rsp+28h] [rbp-20h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
  v7 = -1LL;
  v8 = 0;
  do
    ++v7;
  while ( aMicrosoftExplo[v7] );
  if ( v7 <= length && !memcmp_0(StringRawBuffer, L"Microsoft.Explorer.Notification.", 2 * v7) )
  {
    v10 = WindowsGetStringRawBuffer(a2, 0LL);
    v8 = CLSIDFromString(v10 + 32, &pclsid) >= 0;
  }
  *a5 = v8;
  return 0LL;
}
