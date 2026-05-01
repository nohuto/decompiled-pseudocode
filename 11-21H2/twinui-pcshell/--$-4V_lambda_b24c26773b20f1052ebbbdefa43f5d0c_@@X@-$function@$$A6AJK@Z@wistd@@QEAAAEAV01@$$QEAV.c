/*
 * XREFs of ??$?4V_lambda_b24c26773b20f1052ebbbdefa43f5d0c_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_b24c26773b20f1052ebbbdefa43f5d0c_@@@Z @ 0x18010DED8
 * Callers:
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAVCShellSnapComponent@@@Z @ 0x18010D2B8 (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotificati_ea_18010D2B8.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x18005ECB8 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

_QWORD *__fastcall wistd::function<long (unsigned long)>::operator=<_lambda_b24c26773b20f1052ebbbdefa43f5d0c_,void>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=((__int64)a1);
  a1[1] = &wistd::__function::__func<_lambda_a5f94e402445cab957f9d0f02bc81a26_,long (unsigned long)>::`vftable';
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  result = a1;
  a1[14] = a1 + 1;
  return result;
}
