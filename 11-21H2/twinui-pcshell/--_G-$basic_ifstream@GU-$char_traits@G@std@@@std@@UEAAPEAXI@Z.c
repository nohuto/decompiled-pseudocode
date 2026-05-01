/*
 * XREFs of ??_G?$basic_ifstream@GU?$char_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x1805DD82C
 * Callers:
 *     ??_E?$basic_ifstream@GU?$char_traits@G@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x1802102D0 (--_E-$basic_ifstream@GU-$char_traits@G@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$basic_ifstream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1805DD5BC (--1-$basic_ifstream@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 */

void *__fastcall std::basic_ifstream<unsigned short>::`scalar deleting destructor'(__int64 a1, char a2)
{
  void *v3; // rsi

  v3 = (void *)(a1 - 176);
  std::basic_ifstream<unsigned short>::~basic_ifstream<unsigned short,std::char_traits<unsigned short>>(a1);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}
