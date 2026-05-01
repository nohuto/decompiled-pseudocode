/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_27f92beab74f4884d4c93c012b588629_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801AA9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$CTaskWrapper@V_lambda_eb2c18d22b535205c554a19bae5aba9b_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x1801AA214 (--1-$CTaskWrapper@V_lambda_eb2c18d22b535205c554a19bae5aba9b_@@@ComTaskPool@Internal@Windows@@UEA.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_27f92beab74f4884d4c93c012b588629_>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_eb2c18d22b535205c554a19bae5aba9b_>::~CTaskWrapper<_lambda_eb2c18d22b535205c554a19bae5aba9b_>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
