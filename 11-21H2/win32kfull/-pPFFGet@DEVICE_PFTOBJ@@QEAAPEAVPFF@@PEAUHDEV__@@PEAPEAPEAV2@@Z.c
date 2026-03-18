/*
 * XREFs of ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C000F69C
 * Callers:
 *     GreEnumFonts @ 0x1C000F6D8 (GreEnumFonts.c)
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001D14C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C013AE1C (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02707FC (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     DEVICE_PFTOBJ_pPFFGetWrap @ 0x1C02711A0 (DEVICE_PFTOBJ_pPFFGetWrap.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0291D74 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct PFF *__fastcall DEVICE_PFTOBJ::pPFFGet(DEVICE_PFTOBJ *this, unsigned __int64 a2, struct PFF ***a3)
{
  struct PFF **v3; // rcx
  struct PFF *result; // rax

  v3 = (struct PFF **)(*(_QWORD *)this + 40LL + 8 * ((a2 >> 4) % *(unsigned int *)(*(_QWORD *)this + 24LL)));
  result = *v3;
  if ( a3 )
    *a3 = v3;
  while ( result && a2 != *((_QWORD *)result + 11) )
    result = (struct PFF *)*((_QWORD *)result + 1);
  return result;
}
