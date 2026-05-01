/*
 * XREFs of ??_G?$_Ref_count@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@UEAAPEAXI@Z @ 0x180043070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x18uLL);
  return a1;
}
