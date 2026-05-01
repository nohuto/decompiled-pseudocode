/*
 * XREFs of ?Activate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@00PEAUIPropertySet@Collections@Foundation@Windows@@PEAU?$IVectorView@PEAUHSTRING__@@@567@@Z @ 0x180547360
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@Foundation@Windows@@PEAE@Z @ 0x18018A410 (-CanActivate@TrayInfoTipActivator@SystemTray@@UEAAJPEAUHSTRING__@@0PEAUIPropertySet@Collections@.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipActivator::Activate(
        SystemTray::TrayInfoTipActivator *a1,
        HSTRING a2,
        __int64 a3,
        HSTRING a4,
        struct Windows::Foundation::Collections::IPropertySet *a5)
{
  int CanActivate; // eax
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-28h]
  unsigned __int8 v9[4]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CanActivate = SystemTray::TrayInfoTipActivator::CanActivate(a1, a2, a4, a5, v9);
  try
  {
    if ( CanActivate < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1D,
        (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipactivator.cpp",
        (const char *)(unsigned int)CanActivate,
        v8);
    if ( v9[0] )
      result = 0LL;
    else
      result = 2147500033LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x27,
                           (int)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipactivator.cpp",
                           v6);
  }
  return result;
}
