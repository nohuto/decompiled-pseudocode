/*
 * XREFs of ??_G?$_Ref_count@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@UEAAPEAXI@Z @ 0x180240D70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count<TOUCH_TELEMETRY_UPDATE_INFO>::`scalar deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
