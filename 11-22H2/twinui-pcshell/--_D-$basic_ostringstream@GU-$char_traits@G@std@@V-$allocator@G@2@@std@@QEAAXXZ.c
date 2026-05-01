/*
 * XREFs of ??_D?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180751E50
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$2 @ 0x1802C5190 (_GetPidlsFromTaskbarLayout_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1807519AC (--1-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_ostringstream<unsigned short>::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 136;
  std::basic_ostringstream<unsigned short>::~basic_ostringstream<unsigned short>(a1 + 136);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v1);
}
