/*
 * XREFs of ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180076888
 * Callers:
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x18001D30C (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x18001E93C (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180078588 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     memmove_0 @ 0x180022320 (memmove_0.c)
 */

void **__fastcall std::string::operator=(void **a1, void **Src)
{
  if ( a1 != Src )
  {
    if ( (unsigned __int64)a1[3] >= 0x10 )
      operator delete(*a1);
    a1[3] = (void *)15;
    a1[2] = 0LL;
    *(_BYTE *)a1 = 0;
    if ( (unsigned __int64)Src[3] >= 0x10 )
    {
      *a1 = *Src;
      *Src = 0LL;
    }
    else if ( Src[2] != (void *)-1LL )
    {
      memmove_0(a1, Src, (size_t)Src[2] + 1);
    }
    a1[2] = Src[2];
    a1[3] = Src[3];
    Src[3] = (void *)15;
    Src[2] = 0LL;
    *(_BYTE *)Src = 0;
  }
  return a1;
}
