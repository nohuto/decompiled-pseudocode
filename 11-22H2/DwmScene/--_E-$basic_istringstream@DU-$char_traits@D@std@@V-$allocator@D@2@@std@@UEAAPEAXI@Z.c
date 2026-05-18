/*
 * XREFs of ??_E?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1800515D4
 * Callers:
 *     ??_E?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x180051580 (--_E-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??_D?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180051544 (--_D-$basic_istringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 */

void *__fastcall std::istringstream::`vector deleting destructor'(__int64 a1, char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 144);
  std::istringstream::`vbase destructor'(a1 - 144);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
