/*
 * XREFs of ??_G?$_Ref_count_obj2@VStartupFolderNotification@@@std@@UEAAPEAXI@Z @ 0x18063E860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<StartupFolderNotification>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<StartupFolderNotification>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
