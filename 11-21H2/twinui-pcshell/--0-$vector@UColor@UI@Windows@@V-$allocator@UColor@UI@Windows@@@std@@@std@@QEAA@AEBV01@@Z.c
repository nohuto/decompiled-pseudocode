/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180560108
 * Callers:
 *     ??$_Construct_in_place@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YAXAEAVAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@2@Z @ 0x18055F5E0 (--$_Construct_in_place@VAssistantLightStrip@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Dev.c)
 *     ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180560EF4 (--$_Assign_range@PEAV-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@-$.c)
 *     ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x180561124 (--0AssistantLightStrip@Lighting@TwinUI@@QEAA@V-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@.c)
 *     ?Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@Z @ 0x1805613DC (-Animate@AssistantLightStrip@Lighting@TwinUI@@AEAAJHAEAV-$vector@V-$vector@UColor@UI@Windows@@V-.c)
 * Callees:
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x180560B2C (-_Buy_raw@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 */

__int64 *__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(__int64 *a1, __int64 a2)
{
  const void *v3; // r14
  __int64 v4; // rbp
  signed __int64 v5; // rbp
  __int64 v6; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = v4 - (_QWORD)v3;
    std::vector<int>::_Buy_raw(a1, v5 >> 2);
    v6 = *a1;
    memmove_0((void *)*a1, v3, v5);
    a1[1] = v6 + 4 * (v5 >> 2);
  }
  return a1;
}
