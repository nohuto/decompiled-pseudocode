/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEAV21@@Z @ 0x1800B5710
 * Callers:
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800B613C (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180011EC4 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800467B4 (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800B5B5C (--$_Uninitialized_move@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULeg.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800B5CC8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@ULegacyDeviceInfo@@@2@_K1@Z @ 0x1800B6ED8 (-_Change_array@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegac.c)
 */

char *__fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Emplace_reallocate<std::shared_ptr<LegacyDeviceInfo> &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  size_t size_of; // rax
  char *v11; // rsi
  char *v12; // rdi
  __int64 v13; // rdx
  char *v14; // r8
  __int64 v15; // rcx
  char *result; // rax
  void *v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  try
  {
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v12, a3);
    v18 = (__int64)v12;
    v13 = a1[1];
    v14 = v11;
    v15 = *a1;
    if ( a2 != v13 )
    {
      std::_Uninitialized_move<std::shared_ptr<LegacyDeviceInfo> *,std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(
        v15,
        a2,
        v11);
      v18 = (__int64)v11;
      v14 = v12 + 16;
      v13 = a1[1];
      v15 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<LegacyDeviceInfo> *,std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(
      v15,
      v13,
      v14);
    std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Change_array(a1, v11, v8, v9, v11);
    result = v12;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(v18, (__int64)(v12 + 16));
    std::_Deallocate<16,0>(v17, 16 * v9);
    throw;
  }
  return result;
}
