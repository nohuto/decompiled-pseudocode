/*
 * XREFs of ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@1@@Z @ 0x18046E584
 * Callers:
 *     ??$process@AEAU_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@Z @ 0x18046E3EC (--$process@AEAU_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@-$OutputArc.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?saveValue@JSONOutputArchive@cereal@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800E6418 (-saveValue@JSONOutputArchive@cereal@@QEAAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x18015C08C (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x18034A01C (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 */

char *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<enum TouchKeyboardExperienceTip::Status &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r11
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v8 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(v7 + 408) = *a2;
  v9 = (_QWORD *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v8 + 32));
  cereal::JSONOutputArchive::saveValue(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL), v9);
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v11 + 408) = *(_QWORD *)a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(
    *(_QWORD *)(v11 + 32),
    *(_DWORD **)(a3 + 8));
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v12 + 408) = *(_QWORD *)a4;
  v13 = *(_QWORD *)(v12 + 32);
  v15 = **(_DWORD **)(a4 + 8);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(
           *(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL),
           &v15);
}
