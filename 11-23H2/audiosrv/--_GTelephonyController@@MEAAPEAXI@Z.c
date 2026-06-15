/*
 * XREFs of ??_GTelephonyController@@MEAAPEAXI@Z @ 0x180166134
 * Callers:
 *     ??_ETelephonyController@@O7EAAPEAXI@Z @ 0x180077F90 (--_ETelephonyController@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x1801660D4 (--1TelephonyController@@MEAA@XZ.c)
 */

TelephonyController *__fastcall TelephonyController::`scalar deleting destructor'(TelephonyController *this, char a2)
{
  TelephonyController::~TelephonyController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
