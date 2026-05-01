/*
 * XREFs of ??_G?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x18076AB7C
 * Callers:
 *     ??_E?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x1802AE500 (--_E-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$4PPPPPPPM@A@EAAPEAXI@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18076A4B0 (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 */

void *__fastcall std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  void *v3; // rsi

  v3 = (void *)(a1 - 152);
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(a1);
  std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}
