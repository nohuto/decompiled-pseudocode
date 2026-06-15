/*
 * XREFs of ??_GTelephonyControllerCallInstance@@MEAAPEAXI@Z @ 0x1801620CC
 * Callers:
 *     ??_ETelephonyControllerCallInstance@@O7EAAPEAXI@Z @ 0x18006C5A0 (--_ETelephonyControllerCallInstance@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1TelephonyControllerCallInstance@@MEAA@XZ @ 0x180162068 (--1TelephonyControllerCallInstance@@MEAA@XZ.c)
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
