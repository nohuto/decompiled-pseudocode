/*
 * XREFs of ??_D?$basic_ifstream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x1805DD764
 * Callers:
 *     _stringutils::ReadFileToString_::_1_::dtor$0 @ 0x1805DE04A (_stringutils--ReadFileToString_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$basic_ifstream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1805DD5BC (--1-$basic_ifstream@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_ifstream<unsigned short>::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 176;
  std::basic_ifstream<unsigned short>::~basic_ifstream<unsigned short,std::char_traits<unsigned short>>(a1 + 176);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v1);
}
