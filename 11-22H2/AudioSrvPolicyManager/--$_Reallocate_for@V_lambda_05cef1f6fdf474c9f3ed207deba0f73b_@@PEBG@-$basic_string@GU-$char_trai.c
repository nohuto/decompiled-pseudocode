/*
 * XREFs of ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x180009F70
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180009D30 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000A6B0 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000AA50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000ADE0 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18000BD10 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x180013180 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18001361C (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180014360 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F520 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180015DE0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x180048B1C (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  SIZE_T v11; // rdi
  HANDLE ProcessHeap; // rax
  LPVOID v13; // rax
  _QWORD *v14; // rdi
  HANDLE v16; // rax

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  v8 = a2 | 7;
  v9 = a1[3];
  if ( v8 > 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = -2LL;
    goto LABEL_5;
  }
  v10 = v9 >> 1;
  if ( v9 > 0x7FFFFFFFFFFFFFFELL - (v9 >> 1) )
  {
    v11 = -2LL;
    goto LABEL_5;
  }
  v4 = v10 + v9;
  if ( v8 >= v10 + v9 )
    v4 = v8;
  if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_21;
  v11 = 2 * (v4 + 1);
  if ( v11 >= 0x1000 )
  {
LABEL_5:
    if ( v11 + 39 >= v11 )
    {
      ProcessHeap = GetProcessHeap();
      v13 = HeapAlloc(ProcessHeap, 0, v11 + 39);
      if ( v13 )
      {
        v14 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v14 - 1) = v13;
        goto LABEL_8;
      }
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
      goto LABEL_20;
    }
LABEL_21:
    std::_Throw_bad_array_new_length();
  }
  if ( v11 )
  {
    v16 = GetProcessHeap();
    v14 = HeapAlloc(v16, 0, v11);
    goto LABEL_8;
  }
LABEL_20:
  v14 = 0LL;
LABEL_8:
  a1[3] = v4;
  a1[2] = a2;
  memcpy_0(v14, a4, 2 * a2);
  *((_WORD *)v14 + a2) = 0;
  if ( v9 >= 8 )
    std::_Deallocate<16,0>(*a1, 2 * v9 + 2);
  *a1 = v14;
  return a1;
}
