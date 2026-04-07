/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@EEAAXXZ @ 0x180012080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::_Delete_this(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
  return result;
}
