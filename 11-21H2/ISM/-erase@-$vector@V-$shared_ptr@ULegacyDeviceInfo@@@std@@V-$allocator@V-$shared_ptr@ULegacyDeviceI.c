/*
 * XREFs of ?erase@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@Z @ 0x1800B6F88
 * Callers:
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800B6C0C (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@PEAV10@00@Z @ 0x1800B5AAC (--$_Move_unchecked@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@ULe.c)
 */

__int64 *__fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::erase(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx

  std::_Move_unchecked<std::shared_ptr<LegacyDeviceInfo> *,std::shared_ptr<LegacyDeviceInfo> *>(
    a3 + 16,
    *(_QWORD *)(a1 + 8),
    a3);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(std::_Ref_count_base **)(v6 - 8);
  if ( v7 )
  {
    std::_Ref_count_base::_Decref(v7);
    v6 = *(_QWORD *)(a1 + 8);
  }
  *a2 = a3;
  *(_QWORD *)(a1 + 8) = v6 - 16;
  return a2;
}
