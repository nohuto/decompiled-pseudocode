/*
 * XREFs of ?RemoveEffectPackConfigurationFromList@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010E374
 * Callers:
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x18010E000 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@0@@Z @ 0x1800EEC00 (--$_Destroy_range@V-$allocator@V-$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@std@@@std@@YAX.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPackConfiguration_const__________lambda_e88da4b83d171c6f9230c1d6aaf0e7ce___ @ 0x18010D8E0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_EffectP.c)
 */

__int64 __fastcall EffectPackConfigurationManager::RemoveEffectPackConfigurationFromList(
        EffectPackConfigurationManager *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rsi
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPackConfiguration_const__________lambda_e88da4b83d171c6f9230c1d6aaf0e7ce___(
    v7,
    *((_QWORD *)this + 8),
    *((_QWORD *)this + 9),
    a2);
  v5 = v7[0];
  if ( v7[0] != *((_QWORD *)this + 9) )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPackConfiguration const>>>(v7[0], *((_QWORD *)this + 9));
    *((_QWORD *)this + 9) = v5;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
