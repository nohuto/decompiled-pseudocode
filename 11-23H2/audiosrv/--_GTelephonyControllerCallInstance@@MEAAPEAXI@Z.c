/*
 * XREFs of ??_GTelephonyControllerCallInstance@@MEAAPEAXI@Z @ 0x180167F94
 * Callers:
 *     ??_ETelephonyControllerCallInstance@@O7EAAPEAXI@Z @ 0x180077FD0 (--_ETelephonyControllerCallInstance@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1TelephonyControllerCallInstance@@MEAA@XZ @ 0x180167F18 (--1TelephonyControllerCallInstance@@MEAA@XZ.c)
 */

TelephonyControllerCallInstance *__fastcall TelephonyControllerCallInstance::`scalar deleting destructor'(
        TelephonyControllerCallInstance *this,
        char a2)
{
  TelephonyControllerCallInstance::~TelephonyControllerCallInstance(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
