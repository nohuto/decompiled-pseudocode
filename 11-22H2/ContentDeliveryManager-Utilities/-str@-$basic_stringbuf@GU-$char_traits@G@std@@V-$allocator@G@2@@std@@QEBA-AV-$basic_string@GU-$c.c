/*
 * XREFs of ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18006C150
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180067C7C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18006907C (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18006FC78 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x1800518C0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG_K@Z @ 0x180066EAC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG_K@Z.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::str(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  _QWORD v10[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 || (v3 = *(unsigned __int64 **)(a1 + 64), !*v3) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 || (v8 = **(_QWORD **)(a1 + 56)) == 0 )
    {
      v10[3] = 7LL;
      v10[2] = 0LL;
      LOWORD(v10[0]) = 0;
      goto LABEL_11;
    }
    v7 = **(_QWORD **)(a1 + 24);
    v6 = v8 + 2LL * **(int **)(a1 + 80) - v7;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 < *v3 )
      v4 = *v3;
    v5 = *(unsigned __int64 **)(a1 + 32);
    v6 = v4 - *v5;
    v7 = *v5;
  }
  std::wstring::wstring(v10, v7, v6 >> 1);
LABEL_11:
  std::wstring::wstring(a2, (__int64)v10);
  std::wstring::_Tidy(v10, 1, 0LL);
  return a2;
}
