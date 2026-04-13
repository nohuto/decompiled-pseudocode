/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_55b1f7175feb20028fed27b00f720bea_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180077160
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CTaskWrapper@V_lambda_55b1f7175feb20028fed27b00f720bea_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x180076438 (--1-$CTaskWrapper@V_lambda_55b1f7175feb20028fed27b00f720bea_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_55b1f7175feb20028fed27b00f720bea_>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_55b1f7175feb20028fed27b00f720bea_>::~CTaskWrapper<_lambda_55b1f7175feb20028fed27b00f720bea_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
