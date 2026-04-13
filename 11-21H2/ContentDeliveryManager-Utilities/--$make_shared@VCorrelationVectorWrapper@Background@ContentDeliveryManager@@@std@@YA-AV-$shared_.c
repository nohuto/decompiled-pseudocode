/*
 * XREFs of ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@XZ @ 0x180054BF0
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180061BA0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180063B30 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ??0?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@XZ @ 0x180056034 (--0-$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<ContentDeliveryManager::Background::CorrelationVectorWrapper>(_QWORD *a1)
{
  char *v2; // rax

  v2 = (char *)operator new(0xA0uLL);
  if ( v2 )
    v2 = (char *)std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>(v2);
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(a1, v2 + 16);
  return a1;
}
