/*
 * XREFs of ??1?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1807519AC
 * Callers:
 *     ??_D?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180751E50 (--_D-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??_E?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x180751E80 (--_E-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180096C1C (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_ostringstream<unsigned short>::~basic_ostringstream<unsigned short>(__int64 a1)
{
  __int64 v2; // rdx

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 136) + 4LL) + a1 - 136) = &std::basic_ostringstream<unsigned short>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 136) + 4LL);
  *(_DWORD *)(v2 + a1 - 140) = v2 - 136;
  std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>((_QWORD *)(a1 - 128));
  return std::basic_ostream<unsigned short>::~basic_ostream<unsigned short,std::char_traits<unsigned short>>(a1 - 120);
}
