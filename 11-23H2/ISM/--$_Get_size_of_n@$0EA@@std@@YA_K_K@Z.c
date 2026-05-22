/*
 * XREFs of ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x18003DA44
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18005BF90 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDI.c)
 *     ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x18005C33C (--0-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_K.c)
 *     ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x1800A6CB0 (--$_Emplace_reallocate@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x18010E06C (--$_Emplace_reallocate@AEBV-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x18013BD94 (--$_Emplace_reallocate@AEBV-$function@$$A6AXAEAV-$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Mic.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Get_size_of_n<64>(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return a1 << 6;
}
