/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E8E80
 * Callers:
 *     CalculateDisplayBlankTime @ 0x1801E9594 (CalculateDisplayBlankTime.c)
 * Callees:
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E9090 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 */

unsigned __int64 __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  char *v2; // rsi
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx

  v2 = (char *)a1[1];
  v4 = *a1;
  v5 = 0x8E38E38E38E38E39uLL * ((__int64)&v2[-*a1] >> 3);
  if ( a2 >= v5 )
  {
    if ( a2 > v5 )
    {
      result = 0x8E38E38E38E38E39uLL * ((a1[2] - v4) >> 3);
      if ( a2 <= result )
      {
        v7 = a2 - v5;
        if ( v7 )
        {
          v8 = 72 * v7;
          result = (unsigned __int64)memset_0(v2, 0, 72 * v7);
          v2 += v8;
        }
        a1[1] = (__int64)v2;
      }
      else
      {
        return std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(a1);
      }
    }
  }
  else
  {
    result = 9 * a2;
    a1[1] = v4 + 72 * a2;
  }
  return result;
}
