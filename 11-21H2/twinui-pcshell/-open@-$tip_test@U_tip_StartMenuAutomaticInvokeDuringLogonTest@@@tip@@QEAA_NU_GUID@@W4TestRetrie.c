/*
 * XREFs of ?open@?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@QEAA_NU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180452868
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180047F50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180041254 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18044F560 (--0-$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@QEAA@PEAU_GUI.c)
 */

char __fastcall tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::open(_QWORD *a1, __int64 a2)
{
  std::_Ref_count_base *v4; // rdi
  _DWORD *v6; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-20h]

  v4 = (std::_Ref_count_base *)operator new(0xC8uLL);
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_StartMenuInvokeTest>>::`vftable';
  tip::details::test_merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest>::test_merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest>(
    (__int64)v4 + 16,
    a2,
    2LL);
  v6 = (_DWORD *)((char *)v4 + 16);
  v7 = v4;
  std::shared_ptr<KBViewInfo>::operator=(a1, (__int64 *)&v6);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return tip::details::test_common_data<1>::has_ever_started(*a1 + 8LL);
}
