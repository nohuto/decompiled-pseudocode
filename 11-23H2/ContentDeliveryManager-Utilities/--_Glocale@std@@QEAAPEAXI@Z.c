/*
 * XREFs of ??_Glocale@std@@QEAAPEAXI@Z @ 0x180054A34
 * Callers:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800058DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1800531C8 (--1-$basic_streambuf@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18005372C (--1locale@std@@QEAA@XZ.c)
 */

std::locale *__fastcall std::locale::`scalar deleting destructor'(std::locale *this, char a2)
{
  std::locale::~locale(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
