/*
 * XREFs of ?end@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@XZ @ 0x180072254
 * Callers:
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18006FC78 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18009152C (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::end(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  if ( a1[3] < 8uLL )
    v2 = a1;
  else
    v2 = (_QWORD *)*a1;
  result = a2;
  *a2 = (char *)v2 + 2 * a1[2];
  return result;
}
