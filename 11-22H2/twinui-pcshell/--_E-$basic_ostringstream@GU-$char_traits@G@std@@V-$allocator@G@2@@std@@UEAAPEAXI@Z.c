/*
 * XREFs of ??_E?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x180751E80
 * Callers:
 *     ??_E?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x1802ADF30 (--_E-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     ??1?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1807519AC (--1-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

void *__fastcall std::basic_ostringstream<unsigned short>::`vector deleting destructor'(__int64 a1, char a2)
{
  void *v3; // rsi

  v3 = (void *)(a1 - 136);
  std::basic_ostringstream<unsigned short>::~basic_ostringstream<unsigned short>(a1);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}
