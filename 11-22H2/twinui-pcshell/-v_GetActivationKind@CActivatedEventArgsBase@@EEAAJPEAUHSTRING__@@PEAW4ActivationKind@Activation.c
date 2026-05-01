/*
 * XREFs of ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x18073B360
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBackgroundExtensionContract@@YA_NPEBG@Z @ 0x18073A9E4 (-IsBackgroundExtensionContract@@YA_NPEBG@Z.c)
 *     ?SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z @ 0x18073AAF8 (-SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::v_GetActivationKind(
        CActivatedEventArgsBase *this,
        HSTRING a2,
        enum Windows::ApplicationModel::Activation::ActivationKind *a3)
{
  const WCHAR *StringRawBuffer; // rsi
  HSTRING *v6; // r8
  int v7; // ebp
  unsigned int i; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2);
  *(_DWORD *)a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = SplitActionAndServiceId(a2, &string, v6);
  if ( v7 >= 0 )
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  for ( i = 0; i < 0x2D; ++i )
  {
    if ( CompareStringOrdinal(StringRawBuffer, -1, (&off_1807F4C40)[2 * i], -1, 0) == 2 )
    {
      *(_DWORD *)a3 = *((_DWORD *)&off_1807F4C40 + 4 * i + 2);
      goto LABEL_12;
    }
  }
  if ( !IsBackgroundExtensionContract(StringRawBuffer) )
    MicrosoftTelemetryAssertTriggeredNoArgs(v10, v9);
LABEL_12:
  WindowsDeleteString(string);
  return (unsigned int)v7;
}
