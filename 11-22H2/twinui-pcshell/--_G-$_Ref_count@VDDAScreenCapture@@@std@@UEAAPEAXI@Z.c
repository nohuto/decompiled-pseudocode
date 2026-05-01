/*
 * XREFs of ??_G?$_Ref_count@VDDAScreenCapture@@@std@@UEAAPEAXI@Z @ 0x18048DD70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count<DDAScreenCapture>::`scalar deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
