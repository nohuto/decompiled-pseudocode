/*
 * XREFs of ?_Buy_nonzero@?$vector@UtagPOINTER_DEVICE_INFO@@V?$allocator@UtagPOINTER_DEVICE_INFO@@@std@@@std@@AEAAX_K@Z @ 0x180535CE0
 * Callers:
 *     ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x180531FEC (-GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA-AUDigitizerState@2@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<tagPOINTER_DEVICE_INFO>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *result; // rax

  if ( a2 > 0x3CAE759203CAE7LL )
    std::_Xlength_error("vector too long");
  v3 = 1080 * a2;
  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(1080 * a2);
  *a1 = v4;
  a1[1] = v4;
  result = &v4[v3];
  a1[2] = result;
  return result;
}
