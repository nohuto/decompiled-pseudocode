/*
 * XREFs of ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18007435C
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18006EE8C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180070718 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180078588 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 */

_QWORD *__fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // edx
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r8
  char *v6; // rdx
  void *v7; // rcx
  __int64 v8; // r9
  char *v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v12[3]; // [rsp+28h] [rbp-21h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-9h]
  unsigned __int64 v14[3]; // [rsp+48h] [rbp-1h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp+17h]
  _QWORD v16[3]; // [rsp+68h] [rbp+1Fh] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+37h]

  v3 = *(_DWORD *)(a1 + 136);
  if ( (v3 & 2) != 0 || (v4 = *(unsigned __int64 **)(a1 + 88), !*v4) )
  {
    if ( (v3 & 4) != 0 || (v8 = **(_QWORD **)(a1 + 80)) == 0 )
    {
      a2[2] = 0LL;
      a2[3] = 7LL;
      *(_WORD *)a2 = 0;
      v17 = 7LL;
      v16[2] = 0LL;
      LOWORD(v16[0]) = 0;
      std::wstring::_Assign_rv(a2, v16);
      if ( v17 >= 8 )
      {
        v7 = (void *)v16[0];
        goto LABEL_13;
      }
    }
    else
    {
      v9 = **(char ***)(a1 + 48);
      v10 = 2LL * **(int **)(a1 + 104);
      v15 = 7LL;
      v14[2] = 0LL;
      LOWORD(v14[0]) = 0;
      std::wstring::assign(v14, v9, (v8 + v10 - (__int64)v9) >> 1);
      a2[3] = 7LL;
      a2[2] = 0LL;
      *(_WORD *)a2 = 0;
      std::wstring::_Assign_rv(a2, v14);
      if ( v15 >= 8 )
      {
        v7 = (void *)v14[0];
        goto LABEL_13;
      }
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 128);
    if ( v5 < *v4 )
      v5 = *v4;
    v6 = **(char ***)(a1 + 56);
    v13 = 7LL;
    v12[2] = 0LL;
    LOWORD(v12[0]) = 0;
    std::wstring::assign(v12, v6, (__int64)(v5 - (_QWORD)v6) >> 1);
    a2[3] = 7LL;
    a2[2] = 0LL;
    *(_WORD *)a2 = 0;
    std::wstring::_Assign_rv(a2, v12);
    if ( v13 >= 8 )
    {
      v7 = (void *)v12[0];
LABEL_13:
      operator delete(v7);
    }
  }
  return a2;
}
