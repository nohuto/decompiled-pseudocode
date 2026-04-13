/*
 * XREFs of ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800058DC
 * Callers:
 *     ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180053144 (--1-$basic_ios@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 *     ??_D?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180053DF4 (--_D-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??_Gios_base@std@@UEAAPEAXI@Z @ 0x180054700 (--_Gios_base@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_istream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x180054748 (--_G-$basic_istream@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_D?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x180067940 (--_D-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAXXZ.c)
 *     ??_G?$basic_iostream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x180067A94 (--_G-$basic_iostream@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_G?$basic_ostream@_WU?$char_traits@_W@std@@@std@@UEAAPEAXI@Z @ 0x180067AF4 (--_G-$basic_ostream@_WU-$char_traits@_W@std@@@std@@UEAAPEAXI@Z.c)
 *     ??_D?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x18009BB3C (--_D-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAXXZ.c)
 * Callees:
 *     ?_Tidy@ios_base@std@@AEAAXXZ @ 0x180005928 (-_Tidy@ios_base@std@@AEAAXXZ.c)
 *     ??_Glocale@std@@QEAAPEAXI@Z @ 0x180054A84 (--_Glocale@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::ios_base::_Ios_base_dtor(struct std::ios_base *this)
{
  __int64 v1; // rax
  std::locale *v3; // rcx

  v1 = *((_QWORD *)this + 1);
  if ( !v1 || (--byte_1801954E0[v1], byte_1801954E0[v1] <= 0) )
  {
    std::ios_base::_Tidy(this);
    v3 = (std::locale *)*((_QWORD *)this + 8);
    if ( v3 )
      std::locale::`scalar deleting destructor'(v3, 1u);
  }
}
