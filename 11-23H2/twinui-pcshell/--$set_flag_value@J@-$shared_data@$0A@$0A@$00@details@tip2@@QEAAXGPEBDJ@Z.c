/*
 * XREFs of ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x1802872E8
 * Callers:
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$3 @ 0x1802880F3 (_PersistEnterprisePinDataToRegistry_--_1_--catch$3.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$15 @ 0x18028875A (_ShouldAddEnterprisePinToOutput_--_1_--catch$15.c)
 * Callees:
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x18028909C (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,1>::set_flag_value<long>(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx

  result = tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock();
  v6 = result;
  if ( result )
  {
    v7 = result + 16;
    PropVariantClear((PROPVARIANT *)(result + 16));
    *(_OWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    result = 3LL;
    *(_WORD *)v7 = 3;
    *(_DWORD *)(v6 + 24) = a4;
  }
  return result;
}
