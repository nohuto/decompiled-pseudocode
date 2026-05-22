/*
 * XREFs of ??_G?$_Buf@G@std@@QEAAPEAXI@Z @ 0x18014EFCC
 * Callers:
 *     ??1?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAA@XZ @ 0x180041C64 (--1-$_Node_class@GV-$regex_traits@G@std@@@std@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall std::_Buf<unsigned short>::`scalar deleting destructor'(void **a1)
{
  free(a1[1]);
  operator delete(a1);
  return a1;
}
