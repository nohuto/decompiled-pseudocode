/*
 * XREFs of ??_G?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x180041810
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAA@XZ @ 0x180041C64 (--1-$_Node_class@GV-$regex_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::~_Node_class<unsigned short,std::regex_traits<unsigned short>>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x50uLL);
  return a1;
}
