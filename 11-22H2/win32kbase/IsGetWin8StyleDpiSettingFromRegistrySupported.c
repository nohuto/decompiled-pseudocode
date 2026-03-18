/*
 * XREFs of IsGetWin8StyleDpiSettingFromRegistrySupported @ 0x1C00C4A14
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetWin8StyleDpiSettingFromRegistrySupported()
{
  if ( qword_1C02947E0 )
    return qword_1C02947E0();
  else
    return 3221225659LL;
}
