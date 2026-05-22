/*
 * XREFs of ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x180192F80
 * Callers:
 *     ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x1801929F0 (--$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardPro.c)
 *     ??$emplace@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UTargetingInfo@KeyboardProcessor@@@std@@@std@@@1@AEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x180192C44 (--$emplace@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardProcessor@@V-$a.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_8ff6b2d91b019428ca0582bb0ab092c7___ @ 0x180192D34 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_KeyboardProcessor--Target.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_7e8f1aeb274407a30328aba6a7927ecf___ @ 0x180192DCC (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_KeyboardProcessor--Targ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 */

KeyboardProcessor::TargetingInfo *__fastcall KeyboardProcessor::TargetingInfo::TargetingInfo(
        KeyboardProcessor::TargetingInfo *this,
        const struct KeyboardProcessor::TargetingInfo *a2)
{
  KeyboardProcessor::TargetingInfo *v3; // rax
  __int64 v4; // rcx
  const struct KeyboardProcessor::TargetingInfo *v6; // r8
  __int128 v7; // xmm1

  v3 = this;
  v4 = 2LL;
  v6 = a2;
  do
  {
    *(_OWORD *)v3 = *(_OWORD *)v6;
    *((_OWORD *)v3 + 1) = *((_OWORD *)v6 + 1);
    *((_OWORD *)v3 + 2) = *((_OWORD *)v6 + 2);
    *((_OWORD *)v3 + 3) = *((_OWORD *)v6 + 3);
    *((_OWORD *)v3 + 4) = *((_OWORD *)v6 + 4);
    *((_OWORD *)v3 + 5) = *((_OWORD *)v6 + 5);
    *((_OWORD *)v3 + 6) = *((_OWORD *)v6 + 6);
    v3 = (KeyboardProcessor::TargetingInfo *)((char *)v3 + 128);
    v7 = *((_OWORD *)v6 + 7);
    v6 = (const struct KeyboardProcessor::TargetingInfo *)((char *)v6 + 128);
    *((_OWORD *)v3 - 1) = v7;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)v3 = *(_OWORD *)v6;
  *((_OWORD *)v3 + 1) = *((_OWORD *)v6 + 1);
  *((_OWORD *)v3 + 2) = *((_OWORD *)v6 + 2);
  *((_OWORD *)v3 + 3) = *((_OWORD *)v6 + 3);
  *((_OWORD *)v3 + 4) = *((_OWORD *)v6 + 4);
  *((_OWORD *)v3 + 5) = *((_OWORD *)v6 + 5);
  *((_OWORD *)v3 + 6) = *((_OWORD *)v6 + 6);
  *((_QWORD *)this + 46) = *((_QWORD *)a2 + 46);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)this + 46);
  *((_QWORD *)this + 47) = *((_QWORD *)a2 + 47);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)this + 47);
  return this;
}
