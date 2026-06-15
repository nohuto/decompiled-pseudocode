/*
 * XREFs of ??_GTelephonyController@@MEAAPEAXI@Z @ 0x180166184
 * Callers:
 *     ??_ETelephonyController@@O7EAAPEAXI@Z @ 0x180077FC0 (--_ETelephonyController@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x180166124 (--1TelephonyController@@MEAA@XZ.c)
 */

TelephonyController *__fastcall TelephonyController::`scalar deleting destructor'(TelephonyController *this, char a2)
{
  TelephonyController::~TelephonyController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
