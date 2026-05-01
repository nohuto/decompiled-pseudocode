/*
 * XREFs of ?set_flag@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBD@Z @ 0x1802893DC
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall tip2::details::shared_data<0,0,1>::set_flag(__int64 a1, __int16 a2, __int64 a3)
{
  return tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(a1, a2, a3);
}
