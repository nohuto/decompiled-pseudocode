/*
 * XREFs of ??_G?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x1800598C4
 * Callers:
 *     ??_E?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x180058ED0 (--_E-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000524C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180057C3C (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::wistringstream::`scalar deleting destructor'(struct std::ios_base *this, char a2)
{
  char *v4; // rsi

  v4 = (char *)this - 144;
  std::wistringstream::~wistringstream((__int64)this);
  *(_QWORD *)this = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(this);
  if ( (a2 & 1) != 0 )
    operator delete(v4);
  return v4;
}
